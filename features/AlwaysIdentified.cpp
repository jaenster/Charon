#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"
#include "headers/ghidra.h"

using namespace Ghidra;

REMOTEFUNC(BOOL __stdcall, ITEM_EditItemData_eItemFlag, (D2UnitStrc* pItem, eD2ItemFlag eItemFlag, BOOL bSet), 0x6280d0);

ASMPTR NET_D2GS_SERVER_Send_0x9C_ItemWorld_original = 0x53eae0, NET_D2GS_SERVER_Send_0x9C_ItemWorld_rejoin = 0x53eae9;

__declspec(naked) void __fastcall NET_D2GS_SERVER_Send_0x9C_ItemWorld_relocated(D2ClientStrc* pClient, D2UnitStrc* pItem, undefined4 nAction, eD2ItemFlag eItemFlag, uint param_5) {
    __asm {
        PUSH       EBP
        MOV        EBP, ESP
        SUB        ESP, 0x100

        JMP NET_D2GS_SERVER_Send_0x9C_ItemWorld_rejoin
    }
};

void __fastcall NET_D2GS_SERVER_Send_0x9C_ItemWorld_hook(D2ClientStrc* pClient, D2UnitStrc* pItem, undefined4 nAction, eD2ItemFlag eItemFlag, uint param_5) {
    if (nAction == 0 && Settings["itemQOL"]) {// Dropped on ground
        ITEM_EditItemData_eItemFlag(pItem, ITEMFLAG_IDENTIFIED, 1);
    }

    NET_D2GS_SERVER_Send_0x9C_ItemWorld_relocated(pClient, pItem, nAction, eItemFlag, param_5);
};

namespace AlwaysIdentified {

    class : public Feature {
    public:
        void init() {
            MemoryPatch(NET_D2GS_SERVER_Send_0x9C_ItemWorld_original) << JUMP(NET_D2GS_SERVER_Send_0x9C_ItemWorld_hook);
        }
    } feature;

}
