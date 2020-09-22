/**
 * Charon - For the finer life in Diablo 2.
 */


#define DEFINE_REMOTE_REFERENCES true

#include <windows.h>
#include "headers/common.h"
#include "headers/feature.h"
#include "headers/remote.h"
#include "headers/hook.h"
#include <shellapi.h>
#include <shlobj.h>
#include <PathCch.h>
#include <iostream>

HINSTANCE hInst = nullptr;
extern wchar_t saveDir[512] = { 0 };

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    hInst = (HINSTANCE)hModule;
    PWSTR roamingAppDataPath;
    HRESULT ret;
    size_t c;

    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        ret = SHGetKnownFolderPath(FOLDERID_RoamingAppData, 0, nullptr, &roamingAppDataPath);

        if (ret == S_OK) {
            swprintf_s(saveDir, L"%ws\\Charon", roamingAppDataPath);
        }
        else {
            GetModuleFileName(hModule, saveDir, 512);
            for (c = 0; c < 512; c++) {
                if (!saveDir[c]) {
                    break;
                }
            }

            while (--c >= 0 && saveDir[c] != L'\\');

            if (c >= 0 && c < 512) {
                saveDir[c] = 0;
            }
        }

        swprintf_s(settingsPath, L"%ws\\settings.txt", saveDir);
        CoTaskMemFree(roamingAppDataPath);
        CreateDirectoryW(saveDir, NULL);
        LoadSettings();

        DisableThreadLibraryCalls(hModule);
        for (Feature* f = Features; f; f = f->next) {
            f->init();
        }

        gamelog << COLOR(2) << "Charon loaded." << std::endl << COLOR(3) << "Press F11 to edit settings." << std::endl;
        break;
    case DLL_PROCESS_DETACH:
        for (Feature* f = Features; f; f = f->next) {
            f->deinit();
        }
        for (std::pair<DWORD, BYTE> element : OriginalBytes) {
            RevertBytes(element.first, 1);
        }
        break;
    }

    return TRUE;
}
