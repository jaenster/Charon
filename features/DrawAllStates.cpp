/**
 * @description simple file that draws all possible states
 */
#include "headers/remote.h"
#include "headers/feature.h"
#include "headers/hook.h"

namespace DrawAllStates {

    static ASMPTR start = 0x46e46f;
    static ASMPTR end = 0x46e486;
    static auto name = "drawAllStates";

    class : public Feature {
    public:
        void init() override {
            State[name] = false;
            Settings[name] = true;
        }

        void gameLoop() override {
            if (Settings[name] && !State[name]) {

                MemoryPatch(start) << NOP_TO(end);
                State[name] = !State[name];

            } else if (!Settings[name] && State[name]) {

                MemoryPatch(start) << REVERT(end - start);
                State[name] = !State[name];

            }
        }
    } feature;
}