/**
 * Enables all of the drawing hooks.
 *
 * @todo Reimplement the full render loop function some day.
 */

#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"
#include <iostream>

REMOTEFUNC(void __fastcall, DrawAutomap, (), 0x45ad60);
REMOTEFUNC(void __fastcall, DrawSprites, (), 0x4F9870);
REMOTEREF(D2::Types::RendererFunctionsStrc*, CurrentRendererFunctions, 0x7c8cc0);
REMOTEFUNC(void, DrawCursor, (), 0x4684C0);
REMOTEFUNC(void, DrawCursorOOG, (), 0x4F97E0);

/**
 * Drawing hooks.
 */
void preDrawUnitsPatch() {
    State["inGame"] = true;
    const DWORD addr = 0x473c00;
    for (Feature* f = Features; f; f = f->next) {
        f->gameUnitPreDraw();
    }
    __asm {
        call addr;
    }
}

void _gameUnitPostDraw() {
    for (Feature* f = Features; f; f = f->next) {
        f->gameUnitPostDraw();
    }
}

void gameAutomapDraw() {
    for (Feature* f = Features; f; f = f->next) {
        f->gameAutomapPreDraw();
    }
    DrawAutomap();
    for (Feature* f = Features; f; f = f->next) {
        f->gameAutomapPostDraw();
    }
}

void oogDraw() {
    State["inGame"] = false;
    D2::GetScreenModeSize(D2::GetScreenMode(), &D2::ScreenWidth, &D2::ScreenHeight);
    DWORD old = D2::SetFont(DEFAULT_FONT);
    for (Feature* f = Features; f; f = f->next) {
        f->oogPostDraw();
    }
    for (Feature* f = Features; f; f = f->next) {
        f->allPostDraw();
    }
    D2::SetFont(old);
    DrawCursorOOG();
    // Since we patch to override DrawSprites, we need to call it ourselves.
}
REMOTEFUNC(unsigned int __stdcall, DRAW_GetTypeOfBorder,(void),0x45ae90);

unsigned int __stdcall gamePreDraw() {
    for (Feature* f = Features; f; f = f->next) {
        f->preDraw();
    }

    // stuff we override
    return DRAW_GetTypeOfBorder();
}

void gameDraw() {
    DWORD old = D2::SetFont(DEFAULT_FONT);
    for (Feature* f = Features; f; f = f->next) {
        f->gamePostDraw();
    }
    for (Feature* f = Features; f; f = f->next) {
        f->allPostDraw();
    }
    D2::SetFont(old);
}

void DrawCursorHook() {
    DWORD old = D2::SetFont(DEFAULT_FONT);
    for (Feature* f = Features; f; f = f->next) {
        f->allPostDraw();
    }
    D2::SetFont(old);
    DrawCursor();
}

void _allFinalDraw() {
    for (Feature* f = Features; f; f = f->next) {
        f->allFinalDraw();
    }

    CurrentRendererFunctions->fpEndScene();
}

REMOTEFUNC(float, PerfModOriginal, (), 0x4f6130);

// This feature class registers itself.
class : public Feature {
public:
    void init() {
        MemoryPatch(0x476ce1) << CALL(preDrawUnitsPatch); // Hook the unit draw
        MemoryPatch(0x456fa5) << CALL(gameAutomapDraw); // Hook the automap draw
        MemoryPatch(0x44CB14) << CALL(gameDraw); // Hook the game draw
        MemoryPatch(0x44cae8) << CALL(gamePreDraw);
        MemoryPatch(0x4F9A5D) << CALL(oogDraw); // Hook the oog draw
        MemoryPatch(0x44ebea) << CALL(DrawCursorHook); // Congratulations screen hook
        MemoryPatch(0x45fe1f) << CALL(DrawCursorHook); // Disc screen hook
        MemoryPatch(0x4601d6) << CALL(DrawCursorHook); // Unknown screen hook


        MemoryPatch(0x476d31) << JUMP(_gameUnitPostDraw);
        MemoryPatch(0x4F6230) << CALL(_allFinalDraw) << NOP_TO(0x4F623A);
    }
} feature;
