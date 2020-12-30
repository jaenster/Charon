#include "headers/feature.h"
#include "headers/hook.h"
#include "headers/remote.h"
#include "headers/ghidra.h"
#include "headers/CustomPacket.h"
#include <vector>

namespace MonsterDrawing {

    CustomPacketServerSide<Packet0x3d> *packetHandler;
    Ghidra::D2UnitStrc *pLastVictim;
    Ghidra::D2UnitStrc *pLastAttacker;

    REMOTEFUNC(Ghidra::D2ClientStrc* __fastcall, PLAYER_GetClientFromUnitData, (D2::Types::UnitAny * pUnit),                                                                    0x5531c0)
    REMOTEFUNC(void __fastcall,                  SERVER_KillExperience,        (Ghidra::D2GameStrc * pGame, Ghidra::D2UnitStrc * pAttacker, Ghidra::D2UnitStrc * pVictim),      0x57e990)
    REMOTEFUNC(unsigned int __fastcall,          CALC_Experience,              (Ghidra::D2UnitStrc * param_1_00, int dummy, Ghidra::D2GameStrc * param_2, unsigned int param_3),0x57e3f0)
    REMOTEFUNC(void __stdcall,                      FUN_005a54f0,                    (Ghidra::D2UnitStrc *param_1,Ghidra::D2DamageStrc *param_2),                                    0x5a54f0)

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

        for (int i = 0; i<toDraw.size(); ++i) {

            Drawing *other = toDraw[i];
            if (other->unitType == pBytes->unitType
                && other->unitId == pBytes->unitId
                && other->value < 0 // only for damage
                && GetTickCount() - other->counter < 500
                && other->color == pBytes->color) {

                other->offset = 0;
                other->value += pBytes->value;
                other->counter = GetTickCount();
                return;
            }
        }


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

    void __stdcall FUN_005a54f0_Replacement(Ghidra::D2UnitStrc *pVictim,Ghidra::D2DamageStrc *pEvent) {
        if (pLastAttacker && pLastAttacker->eUnitType == 0) {


            Ghidra::D2ClientStrc *pClient = PLAYER_GetClientFromUnitData((D2::Types::UnitAny *) (pLastAttacker));
            if (pClient != nullptr) {
                auto totalDmg = pEvent->dwDmgTotal >> 8;
                if (totalDmg > 0) {
                    Packet0x3d *packet = new Packet0x3d{0x3D, static_cast<char>(pVictim->eUnitType), pVictim->nUnitGUID, 1, -static_cast<int>(totalDmg)};
                    packetHandler->sendPacket(pClient, packet);
                    delete packet;
                }
            }
        }
//        FUN_005a54f0(pVictim, pEvent);
    }


    __declspec(naked) void FetchAttacker() {
        static ASMPTR jumpback = 0x57ceee+6;
        __asm {

            mov pLastAttacker, ebx
            // original code
            mov    DWORD PTR [ebp-0x8],ebx // pAttacker
            mov    DWORD PTR [ebp-0x4],ecx // pGame

            JMP jumpback
        }
    }

     __declspec(naked) void Breakpoint() {
        static ASMPTR jmpTo = 0x5a6606;
        __asm {
            PUSH       EBP
            MOV        EBP, ESP
            SUB        ESP, 0x10

            jmp jmpTo;
        }
    }



    class : public Feature {
    public:
        void init() {

            // register packet 0x3D
            packetHandler = new CustomPacketServerSide<Packet0x3d>(0x3d, (DWORD) D2ClientIncoming0x3d);

            // actual memory patches for feature
            MemoryPatch(0x5a4f12) << CALL(SERVER_KillExperience_intercept);
            MemoryPatch(0x57e4fa) << CALL(CALC_Experience_intercept);

            MemoryPatch(0x57cff8) << CALL(FUN_005a54f0_Replacement);
            MemoryPatch(0x57ceee) << JUMP(FetchAttacker) << NOP_TO(0x57ceee+6);

            MemoryPatch(0x5a6600) << JUMP(Breakpoint) << NOP_TO(0x5a6606);
        }

        void gameUnitPostDraw() {
            for (int i = 0; i<toDraw.size(); ++i) {

                Drawing* current = toDraw[i];

                DWORD old = D2::SetFont(DEFAULT_FONT);
                for (D2::Types::NonPlayerUnit* unit : D2::ServerSideUnits.nonplayers.all()) {
                    if (unit->dwUnitId == current->unitId && unit->dwType == current->unitType) {
                        if (GetTickCount() - current->counter < 2500) {
                            std::wstring numberStr;

                            int absV = abs(current->value);
                            if (absV > 1000*1000) {
                                numberStr = std::to_wstring(current->value/1000);
                                numberStr.append(L"M");
                            } else if (absV > 1000) {
                                numberStr = std::to_wstring(current->value/1000);
                                numberStr.append(L"K");
                            } else {
                                numberStr = std::to_wstring(current->value);
                            }

                            std::wstring symbol = current->value < 0 ? L"" : L"+";
                            std::wstring currentText = symbol + numberStr;

                            POINT point = unit->pos().toScreen();
                            D2::SetFont(1);
                            D2::DrawGameText(
                                    currentText.c_str(),
                                    point.x + (++current->offset / 2) + (current->value < 0 ? 15 : -15),
                                    point.y - (current->offset),
                                    current->color,
                                    false
                            );
                        } else {
                            toDraw.erase(toDraw.begin()+(i--));
                        }
                        break;
                    }
                }
                D2::SetFont(old);

            }

        }
    } feature;

}
