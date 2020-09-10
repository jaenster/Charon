#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"

using D2::Types::RunesTable;
using D2::Types::ItemRatioTable;
using D2::Types::UniqueItemsTable;

ASMPTR CreateTxtTableArray_Rejoin = 0x6122f9;
ASMPTR CreateTxtTableArray_Original = 0x6122f0;

__declspec(naked) void* __stdcall CreateTxtTableArray_Relocated(void* pMemory, char* szTableName, void* pBinFieldInput, int* nTxtTableSize, int nEndOffset) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x11c
        jmp CreateTxtTableArray_Rejoin
    }
}

void* __stdcall CreateTxtTableArray_Intercept(void* pMemory, char* szTableName, void* pBinFieldInput, int* nTxtTableSize, int nEndOffset) {
    void* table;
    table = CreateTxtTableArray_Relocated(pMemory, szTableName, pBinFieldInput, nTxtTableSize, nEndOffset);
    if (strcmp(szTableName, "runes") == 0) {
        int tableSize = *nTxtTableSize;
        RunesTable* runes = (RunesTable*)table;
        gamelog << "Enabling ladder runewords." << std::endl;
        runes = (RunesTable*)table;

        for (int c = 0; c < tableSize; c++) {
            runes[c].Server = 0;
        }
    }
    else if (strcmp(szTableName, "itemratio") == 0) {
        int tableSize = *nTxtTableSize;
        ItemRatioTable* itemratio = (ItemRatioTable*)table;
        gamelog << "Balancing drop rates for single player." << std::endl;

        for (int c = 0; c < tableSize; c++) {
            itemratio[c].unique.divisor = itemratio[c].set.divisor = itemratio[c].rare.divisor = itemratio[c].magic.divisor;
            itemratio[c].unique.min = itemratio[c].set.min = itemratio[c].rare.min = itemratio[c].magic.min;
            itemratio[c].unique.value = itemratio[c].magic.value * 3;
            itemratio[c].set.value = itemratio[c].rare.value = itemratio[c].magic.value * 2;
        }
    }
    else if (strcmp(szTableName, "uniqueitems") == 0) {
        gamelog << "Enabling ladder unique items." << std::endl;
        int tableSize = *nTxtTableSize;
        UniqueItemsTable* uniqueitems = (UniqueItemsTable*)table;
        for (int c = 0; c < tableSize; c++) {
            uniqueitems[c].ladder = false;
        }
    }

    return table;

}

namespace TxtOverride {

    class : public Feature {
    public:
        void init() {
            MemoryPatch(CreateTxtTableArray_Original) << JUMP(CreateTxtTableArray_Intercept);
        }
    } feature;

}
