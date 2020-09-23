#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"

REMOTEREF(DWORD, PlayerCountOverride, 0x883d70);

void __fastcall SetPlayerCount(DWORD count) {
    PlayerCountOverride = count > 1 ? count : 1;
    gamelog << "Difficulty (players) set to " << count << " and saved." << std::endl;
    Settings["PlayerCountOverride"] = PlayerCountOverride;
    SaveSettings();
}

int __fastcall ExperienceHook(int exp) {
    if (Settings["xpMultiplier"]) {
        exp = (int)((double)exp * (double)(max(1, PlayerCountOverride)) * 2.7f / ((double)PlayerCountOverride + 1.0f));
    }

    if (Settings["reportXP"]) {
        gamelog << "Exp gained: " << exp << std::endl;
    }

    return exp;
}

namespace ExperienceMod {

    class : public Feature {
        bool ingame = false;
    public:
        void init() {
            // Rewrite players count modification and leave to our handler - 42 bytes total
            MemoryPatch(0x47c4e4)
                << ASM::PUSHAD
                << ASM::MOV_ECX_EAX
                << CALL(SetPlayerCount)
                << ASM::POPAD
                << NOP_TO(0x47c50e);

            MemoryPatch(0x57e501) << ASM::MOV_ECX_EAX << ASM::MOV_ECX_EAX << CALL(ExperienceHook) << BYTESEQ{ 0xc2, 0x08, 0x00 };

            AutomapInfoHooks.push_back([]() -> std::wstring {
                wchar_t ret[256] = L"Players 1";

                if (PlayerCountOverride > 1) {
                    swprintf_s(ret, L"Players %d", PlayerCountOverride);
                }

                return ret;
            });
        }

        void gameLoop() {
            if (!ingame || PlayerCountOverride != Settings["PlayerCountOverride"]) {
                PlayerCountOverride = Settings["PlayerCountOverride"];

                if (PlayerCountOverride > 1) {
                    gamelog << "Difficulty (players) set to " << PlayerCountOverride << "." << std::endl;
                }
            }

            ingame = true;
        }

        void oogLoop() {
            ingame = false;
        }
    } feature;

}
