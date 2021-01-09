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

[[maybe_unused]]
void __stdcall _serverLoop(Ghidra::D2GameStrc* pGame) {
    // to test it ups by one every loop, every tick this function is called for ever hosted game the client does
    //int gameFrame = pGame->unk5[46];

    for (Feature* f = Features; f; f = f->next) {
        f->gameServerLoop(pGame);
    }
}

REMOTEFUNC(int, FUN_0052d310,(void), 0x52d310)
__declspec(naked) void _serverLoopIntercept() {
    __asm {
        // safety, we dont know what the function/gameloops messup in terms of ptrs
        pushad

        push edi // pGame
        call _serverLoop

        popad
        // since we jump to this intercept as a call, the return value is set
        JMP FUN_0052d310
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

        // overriding FUN_0052d310 function call
        MemoryPatch(0x52d96c) << CALL(_serverLoopIntercept);

    }
} feature;
