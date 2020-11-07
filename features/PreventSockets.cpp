/**
 * @description Prevent the fact you can socket an item, to prevent miss click socketing
 * @Author Jaenster
 */

#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"
namespace PreventSockets {

    unsigned int __fastcall getSetting() {
        return Settings["preventSockets"];
    }

    __declspec(naked) unsigned int __fastcall myIntercept() {
        static ASMPTR back = 0x48448f;
        __asm {
            // Original code // 3b c6 1b c0
            cmp        eax, ESI
            sbb        eax, eax

            // since ESI is not needed anymore we can use it
            mov esi, eax // backup eax
            
            call getSetting
            xchg esi, eax

            // esi got value of setting
            // eax got actual number of open sockets on target
            test esi, esi
            jz Continue

            // fake that we have zero available sockets
            mov eax, 0 

        Continue:

            // Last statement we overriden with the jump
            pop        edi // 5f
            JMP back
        }
    }

    class : public Feature {
    public:
        void init() {
            MemoryPatch(0x48448a) << JUMP(myIntercept);
        }

        bool keyEvent(DWORD keyCode, bool down, DWORD flags) {
            switch (keyCode) {
            case VK_INSERT:
                bool isActive = (Settings["preventSockets"] = !Settings["preventSockets"]);
                gamelog << "Preventing sockets: " << COLOR(isActive ? 2 : 1) << (isActive ? "on": "off") << std::endl;
                SaveSettings();
                return false;
            }

            return true;
        }

    } feature;

}
