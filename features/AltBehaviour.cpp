#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"

namespace AltBehavior {

    bool drawItemsOnFloor = false;
    bool unitUnderCursor = false;

    void __stdcall setSelectedUnitHook(D2::Types::UnitAny* unit) {
        static bool lastState;

        unitUnderCursor = unit != nullptr && unit->dwType != 4;
    }

    bool isNewBehavior() {
        return Settings["altToggle"];
    }

    __declspec(naked) void interceptSetSelectedUnit() {
        static ASMPTR jumpback = 0x466de9;
        static ASMPTR setSelectedUnitHookPtr = (DWORD) setSelectedUnitHook;
        __asm {
        push eax
        call setSelectedUnitHookPtr

        // Original code
        PUSH       EBP
        MOV        EBP,ESP
        SUB        ESP,0x200
        JMP jumpback
        }
    }



    __declspec(naked) void interceptIfIsAltShowItemsSet() {
        static ASMPTR continueIf = 0x457264 + 6;
        static ASMPTR skipDrawItems = 0x45728e;
        static ASMPTR checkBorders = 0x45726c;
        static ASMPTR isNewBehaviorPtr = (DWORD) isNewBehavior;
        __asm {
        // if we select a monster or object, use the game mechanics
            cmp unitUnderCursor, 0;
            jnz old

        // ask charon if change behavior is preferred
            call isNewBehaviorPtr;
            cmp eax, 0;
            jz old;

        // hooked alternative behavior
            cmp drawItemsOnFloor, 0
            jz skipDraw
            JMP    checkBorders

        old: // original code
            CMP    DWORD PTR ds:0x7a27f4, ebx; // if (GFX_bShowUIFlag.AltShowItems != 0)
            JMP    continueIf; // jump back

        skipDraw:
            JMP skipDrawItems
        }
    }

    class : public Feature {
    public:
        void init() {
            MemoryPatch(0x457264) << ASM::NOP << JUMP(interceptIfIsAltShowItemsSet);

            MemoryPatch(0x466de0) << JUMP(interceptSetSelectedUnit) << NOP_TO(0x466de9);
        }

        bool keyEvent(DWORD keyCode, bool down, DWORD flags) {

            if (!Settings["altToggle"]) {
                // when settings are not on, disable keycode
                drawItemsOnFloor = false;
                return true;
            }

            if (keyCode == 18 /*alt*/) {
                drawItemsOnFloor = !drawItemsOnFloor;
            }

            return true;
        }

    } feature;

}
