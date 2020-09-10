/**
 * Small patches and features that don't belong elsewhere.
 */

#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"
#include <iostream>
#include <cwchar>
#include <vector>
#include <string>

REMOTEREF(int, DrawAutoMapStatsOffsetY, 0x7A51BC);
REMOTEREF(D2::Types::UnitAny*, CurrentTooltipItem, 0x7BCBF4);

void _drawAutoMapInfo(DWORD size) {
    DWORD width = 0, height = 0, fileno = 1;
    height = D2::GetTextSize(L"test", &width, &fileno);
    DWORD bottom = DrawAutoMapStatsOffsetY - height;
    for (AutomapInfoCallback func : AutomapInfoHooks) {
        std::wstring msg = func();
        bottom += D2::GetTextSize(msg.c_str(), &width, &fileno);
        D2::DrawGameText(msg.c_str(), D2::ScreenWidth - 16 - width, bottom, 4, 0);
    }
}

HMODULE __stdcall multi(LPSTR Class, LPSTR Window) {
    return 0;
}

ASMPTR GetItemName_Original = 0x48C060;
ASMPTR GetItemName_Rejoin = 0x48C068;

__declspec(naked) BOOL __fastcall GetItemName_Relocated(D2::Types::UnitAny* item, wchar_t* wBuffer, DWORD dwSize) {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 0x1bd8
        jmp GetItemName_Rejoin
    }
}

BOOL __fastcall GetItemName_Intercept(D2::Types::UnitAny* item, wchar_t* wBuffer, DWORD dwSize) {
    BOOL ret = GetItemName_Relocated(item, wBuffer, dwSize);
    DWORD sockets = D2::GetUnitStat(item, 194, 0);

    if (sockets > 0) {
        size_t len = wcslen(wBuffer);
        wchar_t* tmpBuffer = new wchar_t[dwSize];

        if (wBuffer[len - 1] == L' ') {
            wBuffer[len - 1] = L'\0';
        }

        swprintf(tmpBuffer, 128, L"%ls (%d)", wBuffer, sockets);
        wcscpy_s(wBuffer, 128, tmpBuffer);

        delete[] tmpBuffer;
    }

    return TRUE;
}

void __fastcall GetItemDescription(wchar_t* wBuffer) {
    if (CurrentTooltipItem->pItemData->dwItemLevel > 0) {
        wchar_t tmpBuffer[1024];
        swprintf(tmpBuffer, 1024, L"�c2Item Level: %d\n%ls", CurrentTooltipItem->pItemData->dwItemLevel, wBuffer);
        wcscpy_s(wBuffer, 1024, tmpBuffer);
    }
}

ASMPTR ItemDescription_Patches[] = { 0x48ED2F, 0x48E39C, 0x48DB1D };
REMOTEFUNC(void __fastcall, CalcTextDimensions, (wchar_t* wBuffer, long* x, long* y), 0x502520);

void __fastcall ItemDescription_Hook(wchar_t* wBuffer, long *x, long *y) {
    GetItemDescription(wBuffer);
    CalcTextDimensions(wBuffer, x, y);
}

ASMPTR SocketNotGrey_Patches[] = { 0x452857, 0x48E878, 0x48E897 };

DWORD gamestart = 0;

// This feature class registers itself.
class : public Feature {
public:
    void init() {
		MemoryPatch(0x4F5623) << CALL(multi) << ASM::NOP; // Allow multiple windows open
        MemoryPatch(0x476D40) << ASM::RET; // Ignore shaking requests
        MemoryPatch(0x43BF60) << ASM::RET; // Prevent battle.net connections
        MemoryPatch(0x515FB1) << BYTE(0x01); // Delay of 1 on cleaning up sounds after quiting game
        MemoryPatch(0x4781AC) << BYTESEQ{ 0x6A, 0x05, 0x90, 0x90, 0x90 }; // Hyperjoin for TCP/IP games
        MemoryPatch(GetItemName_Original) << JUMP(GetItemName_Intercept);
        MemoryPatch(ItemDescription_Patches[0]) << CALL(ItemDescription_Hook);
        MemoryPatch(ItemDescription_Patches[1]) << CALL(ItemDescription_Hook);
        MemoryPatch(ItemDescription_Patches[2]) << CALL(ItemDescription_Hook);

        // Disable coloring socketed items grey
        MemoryPatch(SocketNotGrey_Patches[0]) << DWORD(0x400000);
        MemoryPatch(SocketNotGrey_Patches[1]) << DWORD(0x400000);
        MemoryPatch(SocketNotGrey_Patches[2]) << DWORD(0x400000);

        MemoryPatch(0x45ADE8) << CALL(_drawAutoMapInfo);

        AutomapInfoHooks.push_back([]() -> std::wstring {
            return version;
            });

        AutomapInfoHooks.push_back([]() -> std::wstring {
            DWORD elapsed = GetTickCount() - gamestart, seconds = (elapsed / 1000) % 60, minutes = (elapsed / 60000) % 60;
            wchar_t msg[16];
            swprintf_s(msg, L"%d:%02d", minutes, seconds);
            return msg;
        });

        D2::NoPickUp = true;
    }

    void gameLoop() {
        gamestart = gamestart ? gamestart : GetTickCount();
    }

    void oogLoop() {
        gamestart = 0;
    }

    void oogPostDraw() {
        DWORD width = 0, height = 0, fileno = 1;
        height = D2::GetTextSize(version.c_str(), &width, &fileno);
        D2::DrawGameText(version.c_str(), D2::ScreenWidth - width - 5, D2::ScreenHeight - 5, 4, 0);
    }
} feature;
