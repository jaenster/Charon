#include <headers/remote.h>
#include <iostream>
#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"

namespace ItemContainerMove {
    class Item: public D2::Types::UnitAny {
        int test;
    public:
        bool toCursor() {
            return true;
        }
        bool drop() {
            D2::Types::Path *path = D2::PlayerUnit != nullptr ? D2::PlayerUnit->pPath : nullptr;
            if (path != nullptr) {
                std::cout << "Dropping item" << std::endl;
                D2::ClickMap(0, path->xPos, path->yPos, 0x0);
            }
            return true;
        }
    };

    // Breakpoint ITEM_SetItemOnHand
    static ASMPTR start = 0x468070;
    static ASMPTR end = 0x46807a;

    bool __stdcall myStuff(D2::Types::UnitAny* unit) {
        if (unit && unit->dwType == D2::UnitType::ITEM && GetAsyncKeyState(VK_SHIFT)) {
            Item* item = unit->Cast<Item>();

            bool inShop = D2::GetUiFlag(D2::UiFlag::Shop);
            bool inInventory = D2::GetUiFlag(D2::UiFlag::Inventory);
            bool inTrade = D2::GetUiFlag(D2::UiFlag::TradePrompt);
            bool inStash = D2::GetUiFlag(D2::UiFlag::Stash);
            bool inCube = D2::GetUiFlag(D2::UiFlag::Cube);
            bool inMerc = D2::GetUiFlag(D2::UiFlag::MercScreen);

            if (inInventory && !inShop && !inTrade && !inStash && !inCube && !inMerc) {
                item->drop();
            } else if (inStash) {

                //ToDo; this cant be true, as the item just came on our cursor, we need to know what was the location before
                if (item->pItemData->ItemLocation == inStash) {


                }
            }

        }
        return false;
    }

    struct Foo;
    struct Bar {
        Foo* asFoo() {
            return reinterpret_cast<Foo *>(this);
        }
    };

    struct Foo: Bar {
        void Nope() {

        }
    };

    __declspec(naked) void breakpoint() {

        __asm {
        pushad

        push ecx
        call myStuff

        popad


        // original code
        xor     eax, eax
        cmp     ecx, eax
        mov    DWORD PTR ds:0x7a6abc, ecx

        // jump back
        JMP end;

        }
        }


    class : public Feature {
    public:
        void init() {
            MemoryPatch(start) << JUMP(breakpoint) << NOP_TO(end);
        }
    } feature;

}
