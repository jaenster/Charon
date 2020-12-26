#include "headers/feature.h"
#include "headers/hook.h"
#include "headers/remote.h"
#include "headers/ghidra.h"
#include "headers/CustomPacket.h"
#include <vector>

namespace MonsterDrawing {

    CustomPacketServerSide<Packet0x3d> *packetHandler;
    Ghidra::D2UnitStrc *pLastVictim;

    REMOTEFUNC(Ghidra::D2ClientStrc* __fastcall, PLAYER_GetClientFromUnitData, (D2::Types::UnitAny * pUnit),                                                                    0x5531c0)
    REMOTEFUNC(void __fastcall,                  SERVER_KillExperience,        (Ghidra::D2GameStrc * pGame, Ghidra::D2UnitStrc * pAttacker, Ghidra::D2UnitStrc * pVictim),      0x57e990)
    REMOTEFUNC(unsigned int __fastcall,          CALC_Experience,              (Ghidra::D2UnitStrc * param_1_00, int dummy, Ghidra::D2GameStrc * param_2, unsigned int param_3),0x57e3f0)

    struct Drawing {
        char unitType;
        int unitId;
        DWORD counter;
        int offset;
        char color;
        int value;
    };

    std::vector<Drawing*> toDraw;

    void __fastcall D2ClientIncoming0x3d(Packet0x3d *pBytes) {
        Drawing* drawing = new Drawing{pBytes->unitType, pBytes->unitId, GetTickCount(),0, pBytes->color, pBytes->value};
        toDraw.push_back(drawing);
    }

    void __fastcall SERVER_KillExperience_intercept(Ghidra::D2GameStrc *pGame, Ghidra::D2UnitStrc *pAttacker,
                                                    Ghidra::D2UnitStrc *pVictim) {
        pLastVictim = pVictim;
        return SERVER_KillExperience(pGame, pAttacker, pVictim);
    }

    unsigned int __fastcall CALC_Experience_intercept(Ghidra::D2UnitStrc *unit, int dummy, Ghidra::D2GameStrc *param_2,
                                                      unsigned int param_3) {
        unsigned int experience = CALC_Experience(unit, dummy, param_2, param_3);
        Ghidra::D2ClientStrc *pClient = PLAYER_GetClientFromUnitData((D2::Types::UnitAny *) (unit));

        Packet0x3d *packet = new Packet0x3d{0x3D, static_cast<char>(pLastVictim->eUnitType), pLastVictim->nUnitGUID, 12,
                                            static_cast<int>(experience)};
        packetHandler->sendPacket(pClient, packet);
        delete packet;

        return experience;
    }


    class : public Feature {
    public:
        void init() {

            // register packet 0x3D
            packetHandler = new CustomPacketServerSide<Packet0x3d>(0x3d, (DWORD) D2ClientIncoming0x3d);

            // actual memory patches for feature
            MemoryPatch(0x5a4f12) << CALL(SERVER_KillExperience_intercept);
            MemoryPatch(0x57e4fa) << CALL(CALC_Experience_intercept);
        }

        void gameUnitPostDraw() {
            for (int i = 0; i<toDraw.size(); ++i) {

                Drawing* current = toDraw[i];

                for (D2::Types::NonPlayerUnit* unit : D2::ServerSideUnits.nonplayers.all()) {
                    if (unit->dwUnitId == current->unitId && unit->dwType == current->unitType) {
                        if (GetTickCount() - current->counter < 2500) {
                            std::wstring numberStr = std::to_wstring(current->value);
                            std::wstring symbol = current->value < 0 ? L"-" : L"+";
                            std::wstring currentText = symbol + numberStr;

                            POINT point = unit->pos().toScreen();
                            D2::DrawGameText(currentText.c_str(), point.x+(++current->offset/2), point.y-(current->offset), current->color, false);
                        } else {
                            toDraw.erase(toDraw.begin()+(i--));
                        }
                        break;
                    }
                }

            }

        }
    } feature;

}
