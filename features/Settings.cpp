#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"
#include "resource.h"
#include <unordered_map>
#include <functional>
#include <fstream>
#include <string>

std::unordered_map<UINT, std::function<BOOL CALLBACK(HWND, WPARAM, LPARAM)>> WindowMessageHandlers;

HWND hwndSettings = nullptr;
wchar_t settingsPath[512] = { 0 };

BOOL CALLBACK SettingsWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    return WindowMessageHandlers[uMsg] ? WindowMessageHandlers[uMsg](hwnd, wParam, lParam) : FALSE;
}

void __stdcall TranslateDispatchIntercept(MSG* lpMsg) {
    if (!IsWindow(hwndSettings) || !IsDialogMessage(hwndSettings, lpMsg)) {
        TranslateMessage(lpMsg);
        DispatchMessage(lpMsg);
    }
}

void LoadSettings() {
    std::ifstream file(settingsPath);
    std::string key;
    DWORD value;

    while (file) {
        std::getline(file, key, ':');
        file >> value;
        if (key.length()) {
            Settings[key] = value;
        }
        std::getline(file, key);
    }
}

void SaveSettings() {
    std::ofstream file(settingsPath);

    for (std::pair<std::string, DWORD> element : Settings) {
        if (element.first.length()) {
            file << element.first << ": " << element.second << std::endl;
        }
    }
}

class : public Feature {
public:
    void init() {
        MemoryPatch(0x4202eb) << CALL(TranslateDispatchIntercept) << NOP_TO(0x4202fb);
        MemoryPatch(0x431821) << CALL(TranslateDispatchIntercept) << NOP_TO(0x431829);
        MemoryPatch(0x451c0a) << CALL(TranslateDispatchIntercept) << NOP_TO(0x451c1a);
        MemoryPatch(0x4fa5f4) << CALL(TranslateDispatchIntercept) << NOP_TO(0x4fa604);
        MemoryPatch(0x50ff9a) << CALL(TranslateDispatchIntercept) << NOP_TO(0x50ffaa);
        MemoryPatch(0x513991) << CALL(TranslateDispatchIntercept) << NOP_TO(0x5139a1);
        MemoryPatch(0x6bbe91) << CALL(TranslateDispatchIntercept) << NOP_TO(0x6bbea1);

        WindowMessageHandlers[WM_INITDIALOG] = [](HWND hwnd, WPARAM wParam, LPARAM lParam) -> BOOL {
            ShowCursor(true);

            CheckDlgButton(hwnd, IDC_LIGHTING_TEST, Settings["useColors"]);
            CheckDlgButton(hwnd, IDC_DEBUG_MODE, Settings["debugMode"]);
            CheckDlgButton(hwnd, IDC_DRAW_SWATCH, State["drawSwatch"]);
            CheckDlgButton(hwnd, IDC_XP_MULTIPLIER, Settings["xpMultiplier"]);
            CheckDlgButton(hwnd, IDC_REPORT_XP, Settings["reportXP"]);
            CheckDlgButton(hwnd, IDC_REVEAL_LEVEL, Settings["revealLevel"]);
            CheckDlgButton(hwnd, IDC_SHOW_MONSTERS, Settings["showMonsters"]);
            CheckDlgButton(hwnd, IDC_SHOW_ITEMS, Settings["showItems"]);
            CheckDlgButton(hwnd, IDC_SHOW_MISSILES, Settings["showMissiles"]);
            CheckDlgButton(hwnd, IDC_LADDER_ITEMS, Settings["ladderItems"]);
            CheckDlgButton(hwnd, IDC_REBALANCE_DROPS, Settings["rebalanceDrops"]);
            CheckDlgButton(hwnd, IDC_ALWAYS_D3D, Settings["alwaysD3D"]);
            CheckDlgButton(hwnd, IDC_ITEM_INFO, Settings["itemInfo"]);
            CheckDlgButton(hwnd, IDC_COWS_OVERRIDE, Settings["cowsOverride"]);
            CheckDlgButton(hwnd, IDC_RESPEC_OVERRIDE, Settings["respecOverride"]);
            CheckDlgButton(hwnd, IDC_IMBUE_OVERRIDE, Settings["imbueOverride"]);
            CheckDlgButton(hwnd, IDC_SOCKET_OVERRIDE, Settings["socketOverride"]);
            CheckDlgButton(hwnd, IDC_NO_PICKUP, D2::NoPickUp);
            CheckDlgButton(hwnd, IDC_DISABLE_WEATHER, Settings["disableWeather"]);

            HWND hFilters = GetDlgItem(hwnd, IDC_ALWAYS_D3D_FILTER);

            for (int c = 0, pos = 0; c < 6; c++) {
                pos = SendMessage(hFilters, CB_ADDSTRING, 0, (LPARAM)filterParams[c].c_str());
            }

            SendMessage(hFilters, CB_SETCURSEL, Settings["alwaysD3DFilter"], 0);

            return TRUE;
        };

        WindowMessageHandlers[WM_COMMAND] = [](HWND hwnd, WPARAM wParam, LPARAM lParam) -> BOOL {
            HWND hFilters;

            switch (LOWORD(wParam)) {
                case IDOK:
                    Settings["useColors"] = IsDlgButtonChecked(hwnd, IDC_LIGHTING_TEST);
                    Settings["debugMode"] = IsDlgButtonChecked(hwnd, IDC_DEBUG_MODE);
                    State["drawSwatch"] = IsDlgButtonChecked(hwnd, IDC_DRAW_SWATCH);
                    Settings["xpMultiplier"] = IsDlgButtonChecked(hwnd, IDC_XP_MULTIPLIER);
                    Settings["reportXP"] = IsDlgButtonChecked(hwnd, IDC_REPORT_XP);
                    Settings["revealLevel"] = IsDlgButtonChecked(hwnd, IDC_REVEAL_LEVEL);
                    Settings["showMonsters"] = IsDlgButtonChecked(hwnd, IDC_SHOW_MONSTERS);
                    Settings["showItems"] = IsDlgButtonChecked(hwnd, IDC_SHOW_ITEMS);
                    Settings["showMissiles"] = IsDlgButtonChecked(hwnd, IDC_SHOW_MISSILES);
                    Settings["ladderItems"] = IsDlgButtonChecked(hwnd, IDC_LADDER_ITEMS);
                    Settings["rebalanceDrops"] = IsDlgButtonChecked(hwnd, IDC_REBALANCE_DROPS);
                    Settings["alwaysD3D"] = IsDlgButtonChecked(hwnd, IDC_ALWAYS_D3D);
                    Settings["itemInfo"] = IsDlgButtonChecked(hwnd, IDC_ITEM_INFO);
                    Settings["cowsOverride"] = IsDlgButtonChecked(hwnd, IDC_COWS_OVERRIDE);
                    Settings["respecOverride"] = IsDlgButtonChecked(hwnd, IDC_RESPEC_OVERRIDE);
                    Settings["imbueOverride"] = IsDlgButtonChecked(hwnd, IDC_IMBUE_OVERRIDE);
                    Settings["socketOverride"] = IsDlgButtonChecked(hwnd, IDC_SOCKET_OVERRIDE);
                    D2::NoPickUp = Settings["noPickup"] = IsDlgButtonChecked(hwnd, IDC_NO_PICKUP);
                    Settings["disableWeather"] = IsDlgButtonChecked(hwnd, IDC_DISABLE_WEATHER);

                    hFilters = GetDlgItem(hwnd, IDC_ALWAYS_D3D_FILTER);
                    Settings["alwaysD3DFilter"] = SendMessage(hFilters, CB_GETCURSEL, 0, 0);

                    SaveSettings();

                case IDCANCEL:
                    PostMessage(hwnd, WM_CLOSE, 0, 0);
                    break;
            }

            return TRUE;
        };

        WindowMessageHandlers[WM_CLOSE] = [](HWND hwnd, WPARAM wParam, LPARAM lParam) -> BOOL {
            DestroyWindow(hwnd);
            ShowCursor(false);
            hwndSettings = nullptr;
            return TRUE;
        };

        HotkeyCallbacks[VK_F11] = [](LPARAM options) -> BOOL {
            if (hwndSettings == nullptr) {
                hwndSettings = CreateDialog(hInst, MAKEINTRESOURCE(IDD_SETTINGS), D2::hWnd, SettingsWindowProc);
                ShowWindow(hwndSettings, SW_SHOW);
            }
            else {
                PostMessage(hwndSettings, WM_CLOSE, 0, 0);
            }

            return FALSE;
        };
    }
} feature;
