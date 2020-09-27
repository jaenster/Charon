/**
 * Displays units on the map and automap.
 */

#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"
#include <iostream>

DWORD ItemRarityColor[32] = { 255, 29, 30, 32, 151, 132, 111, 155, 111 };

// This feature class registers itself.
class : public Feature {
public:
    void init() {
        // gamelog << COLOR(4) << "Installing unit tracker..." << std::endl;
    }

    void gameAutomapPostDraw() {
        BYTE d;

        if (Settings["showMissiles"]) {
            // Client side tracks missiles
            d = 3;
            for (int c = 0; c < 128; c++) {
                for (D2::Types::UnitAny* unit = D2::ClientSideUnitHashTables[d].table[c]; unit != NULL; unit = unit->pListNext) {
                    unit->dwOwnerType;
                    switch (unit->dwOwnerType) {
                        // Missiles cast directly by us (not owned units, like merc, hydras, etc)
                    case 0:
                        DrawDot(WorldToAutomap(unit->pPath), 0x99);
                        break;
                        // Most others
                    case 1:
                    default:
                        DrawDot(WorldToAutomap(unit->pPath), 0x99);
                        break;
                    }
                }
            }
        }

        if (Settings["debugMode"]) {
            for (D2::Types::Room2* room = D2::PlayerUnit->pPath->pRoom1->pRoom2->pLevel->pRoom2First; room != NULL; room = room->pRoom2Next) {
                for (D2::Types::PresetUnit* unit = room->pPreset; unit != NULL; unit = unit->pPresetNext) {
                    DrawDot(WorldToAutomap({ (double)room->dwPosX * 5 + (double)unit->dwPosX, (double)room->dwPosY * 5 + (double)unit->dwPosY }), 0x84);
                }
            }
        }

        if (Settings["showItems"]) {
            // Server side tracks items
            d = 4;
            for (int c = 0; c < 128; c++) {
                for (D2::Types::UnitAny* unit = D2::ServerSideUnitHashTables[d].table[c]; unit != NULL; unit = unit->pListNext) {
                    if (unit->dwMode == 3 || unit->dwMode == 5) {
                        if (unit->pItemData->dwFlags & 0x4000000) {
                            DrawAutomapX(unit->pItemPath, ItemRarityColor[7], 3);
                        }
                        else if (unit->pItemData->dwQuality > 3 || (unit->pItemData->dwFlags & 0x400800 && unit->pItemData->dwQuality > 2 && D2::GetUnitStat(unit, 194, 0) >= 2)) { // @todo check number of sockets
                            DrawAutomapX(unit->pItemPath, ItemRarityColor[unit->pItemData->dwQuality], 3);
                        }
                        else {
                            D2::Types::ItemTxt* txt = D2::GetItemText(unit->dwTxtFileNo);
                            if (txt->nType >= 96 && txt->nType <= 102 || txt->nType == 74) {
                                DrawAutomapX(unit->pItemPath, 169, 3);
                            }
                        }
                    }
                }
            }
        }

        if (Settings["showMonsters"]) {
            // Server side tracks enemies
            d = 1;
            for (int c = 0; c < 128; c++) {
                for (D2::Types::UnitAny* unit = D2::ServerSideUnitHashTables[d].table[c]; unit != NULL; unit = unit->pListNext) {
                    if (isHostile(unit) && unitHP(unit) > 0) {
                        if (isAttackable(unit)) {
                            if (unit->pMonsterData->fBoss || unit->pMonsterData->fChamp) {
                                DrawAutomapX(unit->pPath, 0x0C);
                            }
                            else if (unit->pMonsterData->fMinion) {
                                DrawAutomapX(unit->pPath, 0x0B);
                            }
                            else {
                                DrawAutomapX(unit->pPath, 0x0A);
                            }
                        }
                        else {
                            DrawAutomapX(unit->pPath, 0x1B);
                        }
                    }
                }
            }
        }
    }
} feature;
