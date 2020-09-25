#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"
#include "headers/dialog.h"
#include <unordered_map>
#include <functional>
#include <fstream>
#include <string>

wchar_t settingsPath[512] = { 0 };

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
    Element *dialog;
    bool test;
    int p = -200;
public:
    void init() {
        dialog = new Dialog();
        dialog->setPos(-200, -121);
        dialog->setDimensions(400, 242);

        int width = 190, height = 15, top = 15, x = 5, y = 30, font = 0;

        TextElement* dlabel = new TextElement();
        dlabel->setPos(200, 0); dlabel->setTextOffset(0, -3); dlabel->setDimensions(0, 25); dlabel->setFont(5); dlabel->setOrientation(Orientation::CENTER); dlabel->setText(L"Charon Settings"); dlabel->show(); dialog->addChild(dlabel);

        TextElement* close = new TextElement();
        close->setPos(400 - 50, 5); close->setDimensions(45, 18); close->setTextOffset(0, -4);  close->setFont(font); close->setText(L"Close"); close->setOrientation(Orientation::CENTER); close->setFrame(0xD, 128, 0xD); close->show(); dialog->addChild(close);

        close->onClick([&](MouseButton button, bool down) -> void {
            dialog->hide();
        });

        TextElement* caption = new TextElement();
        caption->setPos(0, 227); caption->setDimensions(400, height); caption->setTextOffset(0, -4);  caption->setFont(font); caption->setText(L"\u00FFc3*\u00FFc4Requires New Game, \u00FFc;*\u00FFc4Requires Restart"); caption->setOrientation(Orientation::CENTER); caption->show(); dialog->addChild(caption);

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Reveal Map"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["revealLevel"] = !Settings["revealLevel"];
                SaveSettings();
            });

            elem->setText([&]() -> std::wstring {
                return Settings["revealLevel"] ? L"\u00FFc2On" : L"\u00FFc1Off";
            });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Show Monsters"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["showMonsters"] = !Settings["showMonsters"];
                SaveSettings();
            });

            elem->setText([&]() -> std::wstring {
                return Settings["showMonsters"] ? L"\u00FFc2On" : L"\u00FFc1Off";
            });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Show Items"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["showItems"] = !Settings["showItems"];
                SaveSettings();
            });

            elem->setText([&]() -> std::wstring {
                return Settings["showItems"] ? L"\u00FFc2On" : L"\u00FFc1Off";
            });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Show Missiles"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["showMissiles"] = !Settings["showMissiles"];
                SaveSettings();
            });

            elem->setText([&]() -> std::wstring {
                return Settings["showMissiles"] ? L"\u00FFc2On" : L"\u00FFc1Off";
            });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Show Extra Item Info"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["itemInfo"] = !Settings["itemInfo"];
                SaveSettings();
            });

            elem->setText([&]() -> std::wstring {
                return Settings["itemInfo"] ? L"\u00FFc2On" : L"\u00FFc1Off";
            });

            y += height * 3;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Default /nopickup"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                D2::NoPickUp = Settings["noPickup"] = !Settings["noPickup"];
                SaveSettings();
            });

            elem->setText([&]() -> std::wstring {
                return Settings["noPickup"] ? L"\u00FFc2On" : L"\u00FFc1Off";
            });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Repeatable Cow Portal"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["cowsOverride"] = !Settings["cowsOverride"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["cowsOverride"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Repeatable Respec Quest"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["respecOverride"] = !Settings["respecOverride"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["respecOverride"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Repeatable Imbue Quest"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["imbueOverride"] = !Settings["imbueOverride"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["imbueOverride"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Repeatable Socket Quest"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["socketOverride"] = !Settings["socketOverride"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["socketOverride"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }

        x = 205;
        y = 30;

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"\u00FFc3*\u00FFc4Enable Ladder Items"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["ladderItems"] = !Settings["ladderItems"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["ladderItems"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"\u00FFc3*\u00FFc4Tweak Drops for Solo"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["rebalanceDrops"] = !Settings["rebalanceDrops"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["rebalanceDrops"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Better Players XP Scaling"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["xpMultiplier"] = !Settings["xpMultiplier"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["xpMultiplier"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Report XP Gains"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["reportXP"] = !Settings["reportXP"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["reportXP"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height * 2;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Draw Color Swatch"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                State["drawSwatch"] = !State["drawSwatch"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return State["drawSwatch"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Disable Weather"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["disableWeather"] = !Settings["disableWeather"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["disableWeather"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Lighting Test"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["useColors"] = !Settings["useColors"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["useColors"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"Debug Mode"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["debugMode"] = !Settings["debugMode"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["debugMode"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"\u00FFc;*\u00FFc4Always D3D Mode"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["alwaysD3D"] = !Settings["alwaysD3D"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["alwaysD3D"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"AD3D Filter"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["alwaysD3DFilter"] = (Settings["alwaysD3DFilter"] + 1) % 6;
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                std::wstring ret = Settings["alwaysD3DFilter"] ? L"\u00FFc8" : L"\u00FFc5";
                ret += filterParams[Settings["alwaysD3DFilter"]];
                return ret;
                });

            y += height;
        }

        {
            TextElement* elem;
            Element* group = new Element();
            group->setPos(x, y); group->setDimensions(width, height); group->show(); dialog->addChild(group);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setText(L"AD3D Start Fullscreen"); elem->show(); group->addChild(elem);
            elem = new TextElement(); elem->setTextOffset(0, -4); elem->setDimensions(width, height); elem->setFont(font); elem->setOrientation(Orientation::RIGHT); elem->show(); group->addChild(elem);

            group->onClick([&](MouseButton button, bool down) -> void {
                if (down) return;
                Settings["alwaysD3DStartFull"] = !Settings["alwaysD3DStartFull"];
                SaveSettings();
                });

            elem->setText([&]() -> std::wstring {
                return Settings["alwaysD3DStartFull"] ? L"\u00FFc2On" : L"\u00FFc1Off";
                });

            y += height;
        }
    }

    bool keyEvent(DWORD keyCode, bool down, DWORD flags) {
        switch (keyCode) {
        case VK_ESCAPE:
            if (dialog->isVisible()) {
                if (down) {
                    dialog->hide();
                    return false;
                }
            }

            break;
        case VK_F11:
            dialog->setVisibile(!dialog->isVisible());
            return false;

        case VK_LEFT:
            dialog->setPos(p, p++);
            return false;
        }

        return true;
    }

} feature;
