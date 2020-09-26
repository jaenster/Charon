/**
 * Enables throttle and game loop hooks.
 */

#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"
#include <iostream>

void _postInit() {
    for (Feature* f = Features; f; f = f->next) {
        f->postInit();
    }
}

ASMPTR _init_rejoin = 0x405e36, _init_call_1 = 0x514530;

__declspec(naked) void _postInitHook() {
    __asm {
        cmp byte ptr[esi + 0x220], 0x0
        mov eax, [0x74c704]
        jnz skip
        cmp eax, 2
        jz skip
        movzx edx, byte ptr[esi + 0x224]
        mov ecx, dword ptr[esi]
        call _init_call_1
        mov eax, [0x74c704]
        mov dword ptr[ebp + -0x4], 0x1
        skip:
        pushad
        call _postInit
        popad
        jmp _init_rejoin
    }
}


void _gameLoop() {
    for (Feature* f = Features; f; f = f->next) {
        f->gameLoop();
    }
}

void _oogLoop() {
    // Out of game logic goes here.
    for (Feature* f = Features; f; f = f->next) {
        f->oogLoop();
    }
}

// This feature class registers itself.
class : public Feature {
public:
    void init() {
        MemoryPatch(0x405e09) << JUMP(_postInitHook);
        // override the entire sleepy section - 32 bytes long
        MemoryPatch(0x451C2A)
            << CALL(_gameLoop)
            << BYTES(ASM::NOP, 2);

        // override the entire sleepy section - 23 bytes long
        MemoryPatch(0x4FA663)
            << CALL(_oogLoop)
            << BYTES(ASM::NOP, 18);

    }
} feature;
