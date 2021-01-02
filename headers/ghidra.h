#ifndef CHARON_GHIDRA_H
#define CHARON_GHIDRA_H


namespace Ghidra {
    typedef unsigned char undefined;

    typedef unsigned long long GUID;
    typedef unsigned int ImageBaseOffset32;
    typedef unsigned char byte;
    typedef unsigned int dword;
    typedef long long longlong;
    typedef unsigned char uchar;
    typedef unsigned int uint;
    typedef unsigned int uint3;
    typedef unsigned long ulong;
    typedef unsigned long long ulonglong;
    typedef unsigned char undefined1;
    typedef unsigned short undefined2;
    typedef unsigned int undefined3;
    typedef unsigned int undefined4;
    typedef unsigned long long undefined5;
    typedef unsigned long long undefined6;
    typedef unsigned long long undefined8;
    typedef unsigned short ushort;
    typedef unsigned short word;
    typedef unsigned int pointer;

    typedef struct D2DataTableTxtStrc D2DataTableTxtStrc, *PD2DataTableTxtStrc;

    typedef struct D2PlayerClassTxt D2PlayerClassTxt, *PD2PlayerClassTxt;

    typedef struct D2TxtLinkStrc D2TxtLinkStrc, *PD2TxtLinkStrc;

    typedef struct D2BodyLocsTxt D2BodyLocsTxt, *PD2BodyLocsTxt;

    typedef struct D2StorePageTxt D2StorePageTxt, *PD2StorePageTxt;

    typedef struct D2ElemTypesTxt D2ElemTypesTxt, *PD2ElemTypesTxt;

    typedef struct D2HitClassTxt D2HitClassTxt, *PD2HitClassTxt;

    typedef struct D2MonModeTxtSmall D2MonModeTxtSmall, *PD2MonModeTxtSmall;

    typedef struct D2PlrModeTxt D2PlrModeTxt, *PD2PlrModeTxt;

    typedef struct D2SkillCalcTxt D2SkillCalcTxt, *PD2SkillCalcTxt;

    typedef struct D2MissCalcTxt D2MissCalcTxt, *PD2MissCalcTxt;

    typedef struct D2SkillsHeaderTxt D2SkillsHeaderTxt, *PD2SkillsHeaderTxt;

    typedef struct D2EventsTxt D2EventsTxt, *PD2EventsTxt;

    typedef struct D2CompCodeTxt D2CompCodeTxt, *PD2CompCodeTxt;

    typedef struct D2MonAiTxt D2MonAiTxt, *PD2MonAiTxt;

    typedef struct D2PropertiesTxt D2PropertiesTxt, *PD2PropertiesTxt;

    typedef struct D2HireDescTxt D2HireDescTxt, *PD2HireDescTxt;

    typedef struct D2StatesTxt D2StatesTxt, *PD2StatesTxt;

    typedef struct D2StatesDataTbls D2StatesDataTbls, *PD2StatesDataTbls;

    typedef struct D2AllStatesDataTbl D2AllStatesDataTbl, *PD2AllStatesDataTbl;

    typedef struct D2SoundsTxt D2SoundsTxt, *PD2SoundsTxt;

    typedef struct D2HirelingTxt D2HirelingTxt, *PD2HirelingTxt;

    typedef struct D2NpcTxt D2NpcTxt, *PD2NpcTxt;

    typedef struct D2ColorsTxt D2ColorsTxt, *PD2ColorsTxt;

    typedef struct D2ParsedTreasureClassStrc D2ParsedTreasureClassStrc, *PD2ParsedTreasureClassStrc;

    typedef struct D2ParsedDifficultyTreasureClassStrc D2ParsedDifficultyTreasureClassStrc, *PD2ParsedDifficultyTreasureClassStrc;

    typedef struct D2MonStatsTxt D2MonStatsTxt, *PD2MonStatsTxt;

    typedef struct D2MonSoundsTxt D2MonSoundsTxt, *PD2MonSoundsTxt;

    typedef struct D2MonStats2Txt D2MonStats2Txt, *PD2MonStats2Txt;

    typedef struct D2MonPlaceTxt D2MonPlaceTxt, *PD2MonPlaceTxt;

    typedef struct D2MonPresetTxtPlace D2MonPresetTxtPlace, *PD2MonPresetTxtPlace;

    typedef struct D2MonPresetTxt D2MonPresetTxt, *PD2MonPresetTxt;

    typedef struct D2SuperUniquesTxt D2SuperUniquesTxt, *PD2SuperUniquesTxt;

    typedef struct D2MissilesTxt D2MissilesTxt, *PD2MissilesTxt;

    typedef struct D2MonLvlTxt D2MonLvlTxt, *PD2MonLvlTxt;

    typedef struct D2MonSeqTxt D2MonSeqTxt, *PD2MonSeqTxt;

    typedef struct D2MonSeqMonsterTbls D2MonSeqMonsterTbls, *PD2MonSeqMonsterTbls;

    typedef struct D2SkillDescTxt D2SkillDescTxt, *PD2SkillDescTxt;

    typedef struct D2SkillsTxt D2SkillsTxt, *PD2SkillsTxt;

    typedef struct D2SkillsPerClassCounter D2SkillsPerClassCounter, *PD2SkillsPerClassCounter;

    typedef struct D2SkillsPerClassStrc D2SkillsPerClassStrc, *PD2SkillsPerClassStrc;

    typedef struct D2PassiveSkillsPerClassStrc D2PassiveSkillsPerClassStrc, *PD2PassiveSkillsPerClassStrc;

    typedef struct D2OverlayTxt D2OverlayTxt, *PD2OverlayTxt;

    typedef struct D2CharStatsTxt D2CharStatsTxt, *PD2CharStatsTxt;

    typedef struct D2ItemStatCostTxt D2ItemStatCostTxt, *PD2ItemStatCostTxt;

    typedef struct D2MonEquipTxt D2MonEquipTxt, *PD2MonEquipTxt;

    typedef struct D2PetTypeTxt D2PetTypeTxt, *PD2PetTypeTxt;

    typedef struct D2ItemTypesTxt D2ItemTypesTxt, *PD2ItemTypesTxt;

    typedef struct D2SetsTxt D2SetsTxt, *PD2SetsTxt;

    typedef struct D2SetItemsTxt D2SetItemsTxt, *PD2SetItemsTxt;

    typedef struct D2UniqueItemsTxt D2UniqueItemsTxt, *PD2UniqueItemsTxt;

    typedef struct D2MonPropTxt D2MonPropTxt, *PD2MonPropTxt;

    typedef struct D2MonTypeTxt D2MonTypeTxt, *PD2MonTypeTxt;

    typedef struct D2MonUModTxt D2MonUModTxt, *PD2MonUModTxt;

    typedef struct D2LevelsTxt D2LevelsTxt, *PD2LevelsTxt;

    typedef struct D2LevelDefsTxt D2LevelDefsTxt, *PD2LevelDefsTxt;

    typedef struct D2LvlPrestTxt D2LvlPrestTxt, *PD2LvlPrestTxt;

    typedef struct D2ExperienceTxt D2ExperienceTxt, *PD2ExperienceTxt;

    typedef struct D2DifficultyLevelsTxt D2DifficultyLevelsTxt, *PD2DifficultyLevelsTxt;

    typedef int BOOL;

    typedef struct D2SeedStrc D2SeedStrc, *PD2SeedStrc;

    typedef struct D2AutomapRelatedTxt D2AutomapRelatedTxt, *PD2AutomapRelatedTxt;

    typedef struct D2TxtLinkNodeStrc D2TxtLinkNodeStrc, *PD2TxtLinkNodeStrc;

    typedef struct D2ParsedTreasureClassSub0x28Strc D2ParsedTreasureClassSub0x28Strc, *PD2ParsedTreasureClassSub0x28Strc;

    typedef struct D2ParsedActTreasureClassStrc D2ParsedActTreasureClassStrc, *PD2ParsedActTreasureClassStrc;

    typedef struct D2MonStatsTxtTC D2MonStatsTxtTC, *PD2MonStatsTxtTC;

    typedef wchar_t WCHAR;

    typedef struct D2CharItemStrc D2CharItemStrc, *PD2CharItemStrc;

    typedef struct D2SetsTxtPStrc D2SetsTxtPStrc, *PD2SetsTxtPStrc;

    typedef struct D2SetsTxtFStrc D2SetsTxtFStrc, *PD2SetsTxtFStrc;

    typedef struct D2UniqueSetItemsTxtEntry D2UniqueSetItemsTxtEntry, *PD2UniqueSetItemsTxtEntry;

    typedef struct D2SetItemsTxtEntry D2SetItemsTxtEntry, *PD2SetItemsTxtEntry;

    typedef struct D2MonPropTxtEntry D2MonPropTxtEntry, *PD2MonPropTxtEntry;

    typedef enum eD2DrlgType { /* Setting for Level Generation */
        DRLGTYPE_RandomMaze = 1,
        DRLGTYPE_WildernessLevel = 3,
        DRLGTYPE_PresetArea = 2
    } eD2DrlgType;

    typedef struct D2LevelDefsColor D2LevelDefsColor, *PD2LevelDefsColor;

    typedef enum eD2LevelId {
        LEVEL_OuterSteppes = 104,
        LEVEL_FarOasis = 43,
        LEVEL_Crypt = 18,
        LEVEL_RuinedTemple = 94,
        LEVEL_UpperKurast = 81,
        LEVEL_PitLevel2 = 16,
        LEVEL_HaremLevel1 = 50,
        LEVEL_FrozenTundra = 117,
        LEVEL_PitLevel1 = 12,
        LEVEL_ArreatPlateau = 112,
        LEVEL_HaremLevel2 = 51,
        LEVEL_Barracks = 28,
        LEVEL_PalaceCellarLevel1 = 52,
        LEVEL_AncientsWay = 118,
        LEVEL_RogueEncampment = 1,
        LEVEL_StonyField = 4,
        LEVEL_PalaceCellarLevel3 = 54,
        LEVEL_PalaceCellarLevel2 = 53,
        LEVEL_HallsOfVaught = 124,
        LEVEL_IcyCellar = 119,
        LEVEL_Tristram = 38,
        LEVEL_SpiderForest = 76,
        LEVEL_KurastDocktown = 75,
        LEVEL_Mausoleum = 19,
        LEVEL_ClawViperTempleLevel2 = 61,
        LEVEL_ForgottenTower = 20,
        LEVEL_ClawViperTempleLevel1 = 58,
        LEVEL_ArreatSummit = 120,
        LEVEL_MaggotLairLevel3 = 64,
        LEVEL_MaggotLairLevel2 = 63,
        LEVEL_BlackMarsh = 6,
        LEVEL_MatronsDen = 133,
        LEVEL_SpiderCave = 84,
        LEVEL_DenOfEvil = 8,
        LEVEL_UberTristram = 136,
        LEVEL_TheWorldstoneChamber = 132,
        LEVEL_LostCity = 44,
        LEVEL_None = 0,
        LEVEL_FlayerJungle = 78,
        LEVEL_FrozenRiver = 114,
        LEVEL_CityOfTheDamned = 106,
        LEVEL_CanyonOfTheMagi = 46,
        LEVEL_Cathedral = 33,
        LEVEL_ChaosSanctuary = 108,
        LEVEL_DisusedReliquary = 99,
        LEVEL_DrifterCavern = 116,
        LEVEL_RockyWaste = 41,
        LEVEL_FogottenSands = 134,
        LEVEL_ForgottenTemple = 97,
        LEVEL_GlacialTrail = 115,
        LEVEL_RuinedFane = 98,
        LEVEL_DarkWood = 5,
        LEVEL_HoleLevel1 = 11,
        LEVEL_InnerCloister = 32,
        LEVEL_BurialGrounds = 17,
        LEVEL_HoleLevel2 = 15,
        LEVEL_BloodMoor = 2,
        LEVEL_ColdPlains = 3,
        LEVEL_SpiderCavern = 85,
        LEVEL_BloodyFoothills = 110,
        LEVEL_RiverOfFlame = 107,
        LEVEL_TowerCellarLevel3 = 23,
        LEVEL_TowerCellarLevel4 = 24,
        LEVEL_GreatMarsh = 77,
        LEVEL_InfernalPit = 127,
        LEVEL_TowerCellarLevel5 = 25,
        LEVEL_DryHills = 42,
        LEVEL_FlayerDungeonLevel2 = 89,
        LEVEL_HallsOfTheDeadLevel2 = 57,
        LEVEL_FlayerDungeonLevel3 = 91,
        LEVEL_HallsOfTheDeadLevel1 = 56,
        LEVEL_TheWorldstoneKeepLevel1 = 128,
        LEVEL_FlayerDungeonLevel1 = 88,
        LEVEL_HallsOfTheDeadLevel3 = 60,
        LEVEL_TheWorldstoneKeepLevel3 = 130,
        LEVEL_TheWorldstoneKeepLevel2 = 129,
        LEVEL_ThePandemoniumFortress = 103,
        LEVEL_TalRashasTomb1 = 66,
        LEVEL_JailLevel2 = 30,
        LEVEL_StonyTombLevel2 = 59,
        LEVEL_TalRashasTomb7 = 72,
        LEVEL_Abaddon = 125,
        LEVEL_JailLevel1 = 29,
        LEVEL_LowerKurast = 79,
        LEVEL_TalRashasTomb6 = 71,
        LEVEL_TowerCellarLevel1 = 21,
        LEVEL_TowerCellarLevel2 = 22,
        LEVEL_MaggotLairLevel1 = 62,
        LEVEL_TalRashasTomb3 = 68,
        LEVEL_TalRashasTomb2 = 67,
        LEVEL_TalRashasTomb5 = 70,
        LEVEL_ValleyOfSnakes = 45,
        LEVEL_JailLevel3 = 31,
        LEVEL_StonyTombLevel1 = 55,
        LEVEL_TalRashasTomb4 = 69,
        LEVEL_Travincal = 83,
        LEVEL_LutGholein = 40,
        LEVEL_UndergroundPassageLevel2 = 14,
        LEVEL_DuranceOfHateLevel1 = 100,
        LEVEL_FurnaceofPain = 135,
        LEVEL_DuranceOfHateLevel2 = 101,
        LEVEL_DuranceOfHateLevel3 = 102,
        LEVEL_Harrogath = 109,
        LEVEL_ThroneOfDestruction = 131,
        LEVEL_UndergroundPassageLevel1 = 10,
        LEVEL_ArcaneSanctuary = 74,
        LEVEL_PitOfAcheron = 126,
        LEVEL_OuterCloister = 27,
        LEVEL_MonasteryGate = 26,
        LEVEL_A2SewersLevel3 = 49,
        LEVEL_TamoeHighland = 7,
        LEVEL_A3SewersLevel2 = 93,
        LEVEL_A3SewersLevel1 = 92,
        LEVEL_HallsOfPain = 123,
        LEVEL_KurastBazaar = 80,
        LEVEL_PlainsOfDespair = 105,
        LEVEL_HallsOfAnguish = 122,
        LEVEL_MooMooFarm = 39,
        LEVEL_A2SewersLevel1 = 47,
        LEVEL_DisusedFane = 95,
        LEVEL_A2SewersLevel2 = 48,
        LEVEL_SwampyPitLevel3 = 90,
        LEVEL_NihlathaksTemple = 121,
        LEVEL_SwampyPitLevel2 = 87,
        LEVEL_SwampyPitLevel1 = 86,
        LEVEL_KurastCauseway = 82,
        LEVEL_CaveLevel1 = 9,
        LEVEL_CaveLevel2 = 13,
        LEVEL_DurielsLair = 73,
        LEVEL_ForgottenReliquary = 96,
        LEVEL_CrystalizedPassage = 113,
        LEVEL_CatacombsLevel4 = 37,
        LEVEL_CatacombsLevel1 = 34,
        LEVEL_AncientTunnels = 65,
        LEVEL_CatacombsLevel3 = 36,
        LEVEL_CatacombsLevel2 = 35,
        LEVEL_FrigidHighlands = 111
    } eD2LevelId;

    typedef struct D2ParsedChestTreasureClassStrc D2ParsedChestTreasureClassStrc, *PD2ParsedChestTreasureClassStrc;

    struct D2StatesTxt {
        short state;
        short overlay[4];
        short castoverlay;
        short removerlay;
        short pgsvoverlay;
        int nosend: 1;
        int aura: 1;
        int hide: 1;
        int transform: 1;
        int pgsv: 1;
        int active: 1;
        int remhit: 1;
        int damblue: 1;
        int damred: 1;
        int attblue: 1;
        int attred: 1;
        int curse: 1;
        int curable: 1;
        int plrstaydeath: 1;
        int monstaydeath: 1;
        int bossstaydeath: 1;
        int disguise: 1;
        int restrict: 1;
        int blue: 1;
        int armblue: 1;
        int rfblue: 1;
        int rcblue: 1;
        int rlblue: 1;
        int rpblue: 1;
        int stambarblue: 1;
        int armred: 1;
        int rfred: 1;
        int rcred: 1;
        int rlred: 1;
        int rpred: 1;
        int exp: 1;
        int shatter: 1;
        int life: 1;
        int udead: 1;
        int green: 1;
        int nooverlays: 1;
        int noclear: 1;
        int bossinv: 1;
        int meleeonly: 1;
        int notondead: 1;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        short stat;
        short setfunc;
        short remfunc;
        short group;
        char colorpri;
        char colorshift;
        char lightr;
        char lightg;
        char lightb;
        undefined field_0x25;
        short onsound;
        short offsound;
        short itemtype;
        char itemtrans;
        char gfxtype;
        short gfxclass;
        short cltevent;
        short clteventfunc;
        short cltactivefunc;
        short srvactivefunc;
        short skill;
        short missile;
    };

    struct D2MonEquipTxt {
        short monster;
        short level;
        bool oninit;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        int item[3];
        byte loc[3];
        byte mod[3];
        undefined field_0x1a;
        undefined field_0x1b;
    };

    struct D2MonStatsTxtTC {
        short TreasureClass1;
        short TreasureClass2;
        short TreasureClass3;
        short TreasureClass4;
    };

    struct D2MonTypeTxt {
        short type;
        short equiv1;
        short equiv2;
        short equiv3;
        short strsing;
        short strplur;
    };

    struct D2ItemTypesTxt {
        char code[4];
        short equiv1;
        short equiv2;
        char repair;
        char body;
        byte bodyloc1;
        byte bodyloc2;
        short shoots;
        short quiver;
        char throwable;
        char reload;
        char reequip;
        char autostack;
        char magic;
        char rare;
        char normal;
        char charm;
        char gem;
        char beltable;
        char maxsock1;
        char maxsock25;
        char maxsock40;
        char treasureclass;
        char rarity;
        char staffmods;
        char costformula;
        char classs;
        char storepage;
        char varinvgfx;
        std::string invgfx[6];
    };

    struct D2UniqueSetItemsTxtEntry {
        int prop;
        int par;
        int min;
        int max;
    };

    struct D2UniqueItemsTxt {
        undefined field_0x0;
        undefined field_0x1;
        char index[32];
        undefined field_0x22;
        undefined field_0x23;
        short version;
        undefined field_0x26;
        undefined field_0x27;
        char code[4];
        int enabled: 1;
        int nolimit: 1;
        int carry1: 1;
        int ladder: 1;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        short rarity;
        undefined field_0x32;
        undefined field_0x33;
        short lvl;
        short lvlreq;
        char chrtransform;
        char invtransform;
        char flippyfile[32];
        char invfile[32];
        undefined field_0x7a;
        undefined field_0x7b;
        int costmult;
        int costadd;
        short dropsound;
        short usesound;
        char dropsfxframe;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        struct D2UniqueSetItemsTxtEntry sEntry[12];
    };

    struct D2BodyLocsTxt {
        char code[4];
    };

    struct D2SkillsPerClassStrc {
        short Amazon;
        short Sorceress;
        short Necromancer;
        short Paladin;
        short Barbarian;
        short Druid;
        short Assassin;
    };

    struct D2PropertiesTxt {
        ushort code;
        char set[7];
        undefined field_0x9;
        short val[7];
        char func[7];
        undefined field_0x1f;
        short stat[7];
    };

    struct D2HirelingTxt {
        short version;
        undefined field_0x2;
        undefined field_0x3;
        int id;
        int classs;
        int act;
        int difficulty;
        int seller;
        int gold;
        int level;
        int explvl;
        int hp;
        int hplvl;
        int defense;
        int deflvl;
        int str;
        int strlvl;
        int dex;
        int dexlvl;
        int ar;
        int arlvl;
        int share;
        int dmgmin;
        int dmgmax;
        int dmglvl;
        int resist;
        int resistlvl;
        int defaultchance;
        int head;
        int torso;
        int weapon;
        int shield;
        int nSkillId[6];
        int nSkillChance[6];
        int nSkillChanceRerLvl[6];
        byte nSkillMode[6];
        byte nSkillLevel[6];
        byte nSkillLvlPerLvl[6];
        byte hiredesc;
        char namefirst[32];
        char namelast[32];
        undefined field_0x113;
        short nNameFirst;
        short nNameLast;
    };

    struct D2ItemStatCostTxt {
        ushort stat;
        int sendother: 1;
        int signed: 1;
        int damagerelated: 1;
        int itemspecific: 1;
        int direct: 1;
        int updateanimrate: 1;
        int fmin: 1;
        int fcallback: 1;
        int saved: 1;
        int csvsigned: 1;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        char sendBits;
        char sendParamBits;
        char csvbits;
        char csvparam;
        int divide;
        int multiply;
        int add;
        char valshift;
        char savebits;
        char _1_09savebits;
        undefined field_0x1b;
        int _saveadd;
        int _1_09saveadd;
        int saveparambits;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        int minaccr;
        char encode;
        undefined field_0x31;
        short maxstat;
        short descpriority;
        char descfunc;
        char descval;
        ushort descstrpos;
        ushort descstrneg;
        ushort descstr2;
        short dgrp;
        char dgrpfunc;
        char dgrpval;
        short dgrpstrpos;
        short dgrpstrneg;
        short dgrpstr2;
        short itemevent1;
        short itemevent2;
        short itemeventfunc1;
        short itemeventfunc2;
        char keepzero;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
        char op;
        char op_param;
        short op_base;
        short op_stat1;
        short op_stat2;
        short op_stat3;
        undefined field_0x5e;
        undefined field_0x5f;
        undefined field_0x60;
        undefined field_0x61;
        undefined field_0x62;
        undefined field_0x63;
        undefined field_0x64;
        undefined field_0x65;
        undefined field_0x66;
        undefined field_0x67;
        undefined field_0x68;
        undefined field_0x69;
        undefined field_0x6a;
        undefined field_0x6b;
        undefined field_0x6c;
        undefined field_0x6d;
        undefined field_0x6e;
        undefined field_0x6f;
        undefined field_0x70;
        undefined field_0x71;
        undefined field_0x72;
        undefined field_0x73;
        undefined field_0x74;
        undefined field_0x75;
        undefined field_0x76;
        undefined field_0x77;
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        undefined field_0x80;
        undefined field_0x81;
        undefined field_0x82;
        undefined field_0x83;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        undefined field_0x90;
        undefined field_0x91;
        undefined field_0x92;
        undefined field_0x93;
        undefined field_0x94;
        undefined field_0x95;
        undefined field_0x96;
        undefined field_0x97;
        undefined field_0x98;
        undefined field_0x99;
        undefined field_0x9a;
        undefined field_0x9b;
        undefined field_0x9c;
        undefined field_0x9d;
        undefined field_0x9e;
        undefined field_0x9f;
        undefined field_0xa0;
        undefined field_0xa1;
        undefined field_0xa2;
        undefined field_0xa3;
        undefined field_0xa4;
        undefined field_0xa5;
        undefined field_0xa6;
        undefined field_0xa7;
        undefined field_0xa8;
        undefined field_0xa9;
        undefined field_0xaa;
        undefined field_0xab;
        undefined field_0xac;
        undefined field_0xad;
        undefined field_0xae;
        undefined field_0xaf;
        undefined field_0xb0;
        undefined field_0xb1;
        undefined field_0xb2;
        undefined field_0xb3;
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        undefined field_0xb8;
        undefined field_0xb9;
        undefined field_0xba;
        undefined field_0xbb;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        undefined field_0xc4;
        undefined field_0xc5;
        undefined field_0xc6;
        undefined field_0xc7;
        undefined field_0xc8;
        undefined field_0xc9;
        undefined field_0xca;
        undefined field_0xcb;
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        undefined field_0xd0;
        undefined field_0xd1;
        undefined field_0xd2;
        undefined field_0xd3;
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        undefined field_0xd8;
        undefined field_0xd9;
        undefined field_0xda;
        undefined field_0xdb;
        undefined field_0xdc;
        undefined field_0xdd;
        undefined field_0xde;
        undefined field_0xdf;
        undefined field_0xe0;
        undefined field_0xe1;
        undefined field_0xe2;
        undefined field_0xe3;
        undefined field_0xe4;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        undefined field_0xe8;
        undefined field_0xe9;
        undefined field_0xea;
        undefined field_0xeb;
        undefined field_0xec;
        undefined field_0xed;
        undefined field_0xee;
        undefined field_0xef;
        undefined field_0xf0;
        undefined field_0xf1;
        undefined field_0xf2;
        undefined field_0xf3;
        undefined field_0xf4;
        undefined field_0xf5;
        undefined field_0xf6;
        undefined field_0xf7;
        undefined field_0xf8;
        undefined field_0xf9;
        undefined field_0xfa;
        undefined field_0xfb;
        undefined field_0xfc;
        undefined field_0xfd;
        undefined field_0xfe;
        undefined field_0xff;
        undefined field_0x100;
        undefined field_0x101;
        undefined field_0x102;
        undefined field_0x103;
        undefined field_0x104;
        undefined field_0x105;
        undefined field_0x106;
        undefined field_0x107;
        undefined field_0x108;
        undefined field_0x109;
        undefined field_0x10a;
        undefined field_0x10b;
        undefined field_0x10c;
        undefined field_0x10d;
        undefined field_0x10e;
        undefined field_0x10f;
        undefined field_0x110;
        undefined field_0x111;
        undefined field_0x112;
        undefined field_0x113;
        undefined field_0x114;
        undefined field_0x115;
        undefined field_0x116;
        undefined field_0x117;
        undefined field_0x118;
        undefined field_0x119;
        undefined field_0x11a;
        undefined field_0x11b;
        undefined field_0x11c;
        undefined field_0x11d;
        undefined field_0x11e;
        undefined field_0x11f;
        undefined field_0x120;
        undefined field_0x121;
        undefined field_0x122;
        undefined field_0x123;
        undefined field_0x124;
        undefined field_0x125;
        undefined field_0x126;
        undefined field_0x127;
        undefined field_0x128;
        undefined field_0x129;
        undefined field_0x12a;
        undefined field_0x12b;
        undefined field_0x12c;
        undefined field_0x12d;
        undefined field_0x12e;
        undefined field_0x12f;
        undefined field_0x130;
        undefined field_0x131;
        undefined field_0x132;
        undefined field_0x133;
        undefined field_0x134;
        undefined field_0x135;
        undefined field_0x136;
        undefined field_0x137;
        undefined field_0x138;
        undefined field_0x139;
        undefined field_0x13a;
        undefined field_0x13b;
        undefined field_0x13c;
        undefined field_0x13d;
        undefined field_0x13e;
        undefined field_0x13f;
        int stuff;
    };

    struct D2ParsedChestTreasureClassStrc {
        struct D2ParsedTreasureClassStrc *ChestA;
        struct D2ParsedTreasureClassStrc *ChestB;
        struct D2ParsedTreasureClassStrc *ChestC;
    };

    struct D2ParsedActTreasureClassStrc {
        struct D2ParsedChestTreasureClassStrc Act1;
        struct D2ParsedChestTreasureClassStrc Act2;
        struct D2ParsedChestTreasureClassStrc Act3;
        struct D2ParsedChestTreasureClassStrc Act4;
        struct D2ParsedChestTreasureClassStrc Act5;
    };

    struct D2ParsedDifficultyTreasureClassStrc {
        struct D2ParsedActTreasureClassStrc Normal;
        struct D2ParsedActTreasureClassStrc Nightmare;
        struct D2ParsedActTreasureClassStrc Hell;
    };

    struct D2AutomapRelatedTxt {
        void *field_0x0;
        void *field_0x4;
    };

    struct D2SeedStrc {
        int nSeedLow;
        int nSeedHigh;
    };

    struct D2DataTableTxtStrc {
        struct D2PlayerClassTxt *pTxtPlayerClass;
        struct D2TxtLinkStrc *pTxtPlayerClassLink;
        struct D2BodyLocsTxt *pTxtBodyLocs;
        struct D2TxtLinkStrc *pTxtBodyLocsLink;
        struct D2StorePageTxt *pTxtStorePage;
        struct D2TxtLinkStrc *pTxtStorePageLink;
        struct D2ElemTypesTxt *pTxtElemTypes;
        struct D2TxtLinkStrc *pTxtElemTypesLink;
        struct D2HitClassTxt *pTxtHitClass;
        struct D2TxtLinkStrc *pTxtHitClassLink;
        struct D2MonModeTxtSmall *pTxtMonMode;
        struct D2TxtLinkStrc *pTxtMonModeLink;
        struct D2PlrModeTxt *pTxtPlrMode;
        struct D2TxtLinkStrc *pTxtPlrModeLink;
        struct D2SkillCalcTxt *pTxtSkillCalc;
        struct D2TxtLinkStrc *pTxtSkillCalcLink;
        pointer pSkillsCodeUnk1;
        int nSkillsCodeUnk2;
        int nSkillsCodeUnk3;
        pointer pSkillsDescCodeUnk1;
        int nSkillsDescCodeUnk2;
        int nSkillsDescCodeUnk3;
        struct D2MissCalcTxt *pTxtMissCalc;
        struct D2TxtLinkStrc *pTxtMissCalcLink;
        pointer pMissCodeUnk1;
        int nMissCodeUnk2;
        int nMissCodeUnk3;
        struct D2SkillsHeaderTxt *pTxtSkillsHeader;
        struct D2TxtLinkStrc *pTxtSkillsHeaderLink;
        struct D2EventsTxt *pTxtEvents;
        struct D2TxtLinkStrc *pTxtEventsLink;
        struct D2CompCodeTxt *pTxtCompCode;
        struct D2TxtLinkStrc *pTxtCompCodeLink;
        int nTxtCompCodeSize;
        struct D2MonAiTxt *pTxtMonAi;
        struct D2TxtLinkStrc *pTxtMonAiLink;
        int nTxtMonAiSize;
        struct D2TxtLinkStrc *sTxtItemsLink;
        pointer pItemsCodeUnk1;
        int nItemsCodeUnk2;
        int nItemsCodeUnk3;
        struct D2PropertiesTxt *pTxtProperties;
        struct D2TxtLinkStrc *pTxtPropertiesLink;
        int nTxtPropertiesSize;
        struct D2TxtLinkStrc *pTxtRunesLink;
        struct D2HireDescTxt *pTxtHireDesc;
        struct D2TxtLinkStrc *pTxtHireDescLink;
        struct D2StatesTxt *pTxtStates;
        struct D2TxtLinkStrc *pTxtStatesLink;
        int nTxtStatesSize;
        struct D2StatesDataTbls *pStatesDataTbls;
        struct D2StatesDataTbls *pSingleStateDataTbl[40];
        struct D2AllStatesDataTbl *pAllStatesDataTblFlag0x04;
        int nAllStatesDataTblFlag0x04Size;
        struct D2AllStatesDataTbl *pAllStatesDataTblFlag0x0B;
        int nAllStatesDataTblFlag0x0BSize;
        struct D2AllStatesDataTbl *pAllStatesDataTblFlag0x10;
        int nAllStatesDataTblFlag0x10Size;
        struct D2AllStatesDataTbl *pAllStatesDataTblFlag0x05;
        int nAllStatesDataTblFlag0x05Size;
        struct D2AllStatesDataTbl *pStatesItemTypesDataTbl;
        int nStatesItemTypesDataTblSize;
        struct D2SoundsTxt *pTxtSounds;
        struct D2TxtLinkStrc *pTxtSoundsLink;
        int nTxtSoundsSize;
        struct D2HirelingTxt *pTxtHireling;
        int nTxtHirelingSize;
        int nTxtHirelingIdLines[512];
        struct D2NpcTxt *pTxtNpc;
        int nTxtNpcSize;
        struct D2ColorsTxt *pTxtColors;
        struct D2TxtLinkStrc *pTxtColorsLink;
        struct D2TxtLinkStrc *pTxtMonsterTblsLink;
        struct D2ParsedTreasureClassStrc *pParsedTreasureClass;
        int nParsedTreasureClassSize;
        struct D2ParsedDifficultyTreasureClassStrc pParsedTreasureClassDiffActChestABC;
        struct D2MonStatsTxt *pTxtMonStats;
        struct D2TxtLinkStrc *pTxtMonStatsLink;
        int nTxtMonStatsSize;
        struct D2MonSoundsTxt *pTxtMonSounds;
        struct D2TxtLinkStrc *pTxtMonSoundsLink;
        int nTxtMonSoundsSize;
        struct D2MonStats2Txt *pTxtMonStats2;
        struct D2TxtLinkStrc *pTxtMonStats2Link;
        int nTxtMonStats2Size;
        struct D2MonPlaceTxt *pTxtMonPlace;
        struct D2TxtLinkStrc *pTxtMonPlaceLink;
        int nTxtMonPlaceSize;
        struct D2MonPresetTxtPlace *pTxtMonPresetPlace;
        struct D2MonPresetTxt *pTxtMonPresetPerAct[5];
        int pTxtMonPresetPerActId[5];
        struct D2SuperUniquesTxt *pTxtSuperUniques;
        struct D2TxtLinkStrc *pTxtSuperUniquesLink;
        int nTxtSuperUniquesSize;
        short aTxtSuperUniquesHardcoded[66];
        struct D2MissilesTxt *pTxtMissiles;
        struct D2TxtLinkStrc *pTxtMissilesLink;
        int nTxtMissilesSize;
        struct D2MonLvlTxt *pTxtMonLvl;
        int nTxtMonLvlSize;
        struct D2MonSeqTxt *pTxtMonSeq;
        struct D2TxtLinkStrc *pTxtMonSeqLink;
        int nTxtMonSeqSize;
        struct D2MonSeqMonsterTbls *pMonSeqMonsterTbls;
        int nMonSeqMonsterTblsSize;
        struct D2SkillDescTxt *pTxtSkillDesc;
        struct D2TxtLinkStrc *pTxtSkillDescLink;
        int nTxtSkillDescSize;
        struct D2SkillsTxt *pTxtSkills;
        struct D2TxtLinkStrc *pTxtSkillsLink;
        int nTxtSkillsCount;
        struct D2SkillsPerClassCounter *pSkillsPerClassCounter;
        int nSkillCountMaxPerClass;
        struct D2SkillsPerClassStrc *pSkillsPerClassStrc;
        int nPassiveSkillsCount;
        struct D2PassiveSkillsPerClassStrc *pPassiveSkillsPerClassStrc;
        struct D2TxtLinkStrc *pTxtOverlayLink;
        struct D2OverlayTxt *pTxtOverlay;
        int nTxtOverlaySize;
        struct D2CharStatsTxt *pTxtCharStats;
        int nTxtCharStatsSize;
        struct D2ItemStatCostTxt *pTxtItemStatCost;
        struct D2TxtLinkStrc *pTxtItemStatCostLink;
        int nTxtItemStatCostSize;
        short *pItemStatCostDescPriority;
        int nItemStatCostDescPrioritySize;
        struct D2MonEquipTxt *pTxtMonEquip;
        int nTxtMonEquipSize;
        struct D2PetTypeTxt *pTxtPetType;
        struct D2TxtLinkStrc *pTxtPetTypeLink;
        int nTxtPetTypeSize;
        struct D2TxtLinkStrc *pTxtItemTypesLink;
        struct D2ItemTypesTxt *pTxtItemTypes;
        int nTxtItemTypesSize;
        int nTxtItemTypesUnknownSize;
        pointer pTxtItemTypesUnknown;
        struct D2TxtLinkStrc *pTxtSetsLink;
        struct D2SetsTxt *pTxtSets;
        int nTxtSetsSize;
        struct D2TxtLinkStrc *pTxtSetItemsLink;
        struct D2SetItemsTxt *pTxtSetItems;
        int nTxtSetItemsSize;
        struct D2TxtLinkStrc *pTxtUniqueItemsLink;
        struct D2UniqueItemsTxt *pTxtUniqueItems;
        int nTxtUniqueItemsSize;
        struct D2TxtLinkStrc *pTxtMonPropLink;
        struct D2MonPropTxt *pTxtMonProp; /* structure need to be checked if it spawns properly */
        int nTxtMonPropSize;
        struct D2TxtLinkStrc *pTxtMonTypeLink;
        struct D2MonTypeTxt *pTxtMonType;
        int nTxtMonTypeSize;
        pointer pTxtMonTypeUnknown; /* Allocated inside of MonType */
        int nTxtMonTypeUnknownSize; /* Allocated inside of MonType */
        struct D2TxtLinkStrc *pTxtMonUmodLink;
        struct D2MonUModTxt *pTxtMonUmod;
        int nTxtMonUmodSize;
        struct D2LevelsTxt *pTxtLevels;
        int nTxtLevelsSize;
        struct D2LevelDefsTxt *pTxtLevelDefs;
        struct D2LvlPrestTxt *pTxtLvlPrest;
        int nTxtLvlPrestSize;
        int nTxtItemStatCostStuff;
        int nTxtItemStatCostStuffShiftedUnknonw;
        undefined4 pAnimTbls;
        struct D2ExperienceTxt *pTxtExperience;
        struct D2DifficultyLevelsTxt *pTxtDifficultyLevels;
        int nTxtDifficultyLevelsSize;
        BOOL field_0xc84;
        int pActMisc_0x008_B;
        pointer pActMisc_0x468_B;
        pointer pActMisc_0x468_A;
        int pActMisc_0x008_A;
        struct D2SeedStrc sSeed;
        struct D2AutomapRelatedTxt sAutomapRelated;
        undefined4 field_0xca8;
        undefined4 field_0xcac;
        undefined4 field_0xcb0;
        undefined4 field_0xcb4;
        undefined4 field_0xcb8;
        undefined4 field_0xcbc;
        undefined4 field_0xcc0;
        undefined4 field_0xcc4;
        undefined4 field_0xcc8;
        undefined4 field_0xccc;
        undefined4 field_0xcd0;
        undefined4 field_0xcd4;
        undefined4 field_0xcd8;
        undefined4 field_0xcdc;
        undefined4 field_0xce0;
        undefined4 field_0xce4;
        undefined4 field_0xce8;
        undefined4 field_0xcec;
        undefined4 field_0xcf0;
        undefined4 field_0xcf4;
        undefined4 field_0xcf8;
        undefined4 field_0xcfc;
        undefined4 field_0xd00;
        undefined4 field_0xd04;
        undefined4 field_0xd08;
        bool field_0xd0c;
    };

    struct D2MissilesTxt {
        ushort Missile;
        int LastCollide: 1;
        int Explosion: 1;
        int Pierce: 1;
        int CanSlow: 1;
        int CanDestroy: 1;
        int ClientSend: 1;
        int GetHit: 1;
        int SoftHit: 1;
        int ApplyMastery: 1;
        int ReturnFire: 1;
        int Town: 1;
        int SrcTown: 1;
        int NoMultiShot: 1;
        int NoUniqueMod: 1;
        int Half2HSrc: 1;
        int MissileSkill: 1;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        short pCltDoFunc;
        short pCltHitFunc;
        short pSrvDoFunc;
        short pSrvHitFunc;
        short pSrvDmgFunc;
        short TravelSound;
        short HitSound;
        short ExplosionMissile;
        short SubMissile1;
        short SubMissile2;
        short SubMissile3;
        short CltSubMissile1;
        short CltSubMissile2;
        short CltSubMissile3;
        short HitSubMissile1;
        short HitSubMissile2;
        short HitSubMissile3;
        short HitSubMissile4;
        short CltHitSubMissile1;
        short CltHitSubMissile2;
        short CltHitSubMissile3;
        short CltHitSubMissile4;
        short ProgSound;
        short ProgOverlay;
        int Param1;
        int Param2;
        int Param3;
        int Param4;
        int Param5;
        int sHitPar1;
        int sHitPar2;
        int sHitPar3;
        int CltParam1;
        int CltParam2;
        int CltParam3;
        int CltParam4;
        int CltParam5;
        int cHitPar1;
        int cHitPar2;
        int cHitPar3;
        int dParam1;
        int dParam2;
        uint SrvCalc1;
        uint CltCalc1;
        uint SHitCalc1;
        uint CHitCalc1;
        uint DmgCalc1;
        char HitClass;
        undefined field_0x95;
        short Range;
        short LevRange;
        char Vel;
        char VelLev;
        char MaxVel;
        undefined field_0x9d;
        short Accel;
        short animrate;
        short xoffset;
        short yoffset;
        short zoffset;
        uint HitFlags;
        short ResultFlags;
        char KnockBack;
        undefined field_0xaf;
        int MinDamage;
        int MaxDamage;
        int MinLevDam1;
        int MinLevDam2;
        int MinLevDam3;
        int MinLevDam4;
        int MinLevDam5;
        int MaxLevDam1;
        int MaxLevDam2;
        int MaxLevDam3;
        int MaxLevDam4;
        int MaxLevDam5;
        int DmgSymPerCalc;
        char EType;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        int EMin;
        int EMax;
        int MinELev1;
        int MinELev2;
        int MinELev3;
        int MinELev4;
        int MinELev5;
        int MaxELev1;
        int MaxELev2;
        int MaxELev3;
        int MaxELev4;
        int MaxELev5;
        int EDmgSymPerCalc;
        int ELen;
        int ELevLen1;
        int ELevLen2;
        int ELevLen3;
        char CltSrcTown;
        char SrcDamage;
        char SrcMissDmg;
        char Holy;
        char Light;
        char Flicker;
        char Red;
        char Green;
        char Blue;
        char InitSteps;
        char Activate;
        char LoopAnim;
        char CelFile[64];
        char AnimLen;
        undefined field_0x179;
        undefined field_0x17a;
        undefined field_0x17b;
        int RandStart;
        char SubLoop;
        char SubStart;
        char SubStop;
        char CollideType;
        char Collision;
        char ClientCol;
        char CollideKill;
        char CollideFriend;
        char NextHit;
        char NextDelay;
        char Size;
        char ToHit;
        char AlwaysExplode;
        char Trans;
        char Qty;
        undefined field_0x18f;
        int SpecialSetup;
        short Skill;
        char HitShift;
        undefined field_0x197;
        undefined field_0x198;
        undefined field_0x199;
        undefined field_0x19a;
        undefined field_0x19b;
        int DamageRate;
        char NumDirections;
        char AnimSpeed;
        char LocalBlood;
        undefined field_0x1a3;
    };

    struct D2SkillsPerClassCounter {
        int Amazon;
        int Sorceress;
        int Necromancer;
        int Paladin;
        int Barbarian;
        int Druid;
        int Assassin;
    };

    struct D2MonStats2Txt {
        short Id;
        undefined field_0x2;
        undefined field_0x3;
        char noGfxHitTest: 1;
        char noMap: 1;
        char noOvly: 1;
        char isSel: 1;
        char alSel: 1;
        char noSel: 1;
        char shiftSel: 1;
        char corpseSel: 1;
        char revive: 1;
        char isAtt: 1;
        char small: 1;
        char large: 1;
        char soft: 1;
        char critter: 1;
        char shadow: 1;
        char noUniqueShift: 1;
        char compositeDeath: 1;
        char inert: 1;
        char objCol: 1;
        char deadCol: 1;
        char unflatDead: 1;
        undefined field_0x7;
        char SizeX;
        char SizeY;
        char spawnCol;
        char Height;
        char overlayHeight;
        char pixHeight;
        char MeleeRng;
        undefined field_0xf;
        int BaseW;
        char HitClass;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        undefined field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        undefined field_0x48;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        undefined field_0x50;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
        undefined field_0x54;
        undefined field_0x55;
        undefined field_0x56;
        undefined field_0x57;
        undefined field_0x58;
        undefined field_0x59;
        undefined field_0x5a;
        undefined field_0x5b;
        undefined field_0x5c;
        undefined field_0x5d;
        undefined field_0x5e;
        undefined field_0x5f;
        undefined field_0x60;
        undefined field_0x61;
        undefined field_0x62;
        undefined field_0x63;
        undefined field_0x64;
        undefined field_0x65;
        undefined field_0x66;
        undefined field_0x67;
        undefined field_0x68;
        undefined field_0x69;
        undefined field_0x6a;
        undefined field_0x6b;
        undefined field_0x6c;
        undefined field_0x6d;
        undefined field_0x6e;
        undefined field_0x6f;
        undefined field_0x70;
        undefined field_0x71;
        undefined field_0x72;
        undefined field_0x73;
        undefined field_0x74;
        undefined field_0x75;
        undefined field_0x76;
        undefined field_0x77;
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        undefined field_0x80;
        undefined field_0x81;
        undefined field_0x82;
        undefined field_0x83;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        undefined field_0x90;
        undefined field_0x91;
        undefined field_0x92;
        undefined field_0x93;
        undefined field_0x94;
        undefined field_0x95;
        undefined field_0x96;
        undefined field_0x97;
        undefined field_0x98;
        undefined field_0x99;
        undefined field_0x9a;
        undefined field_0x9b;
        undefined field_0x9c;
        undefined field_0x9d;
        undefined field_0x9e;
        undefined field_0x9f;
        undefined field_0xa0;
        undefined field_0xa1;
        undefined field_0xa2;
        undefined field_0xa3;
        undefined field_0xa4;
        undefined field_0xa5;
        undefined field_0xa6;
        undefined field_0xa7;
        undefined field_0xa8;
        undefined field_0xa9;
        undefined field_0xaa;
        undefined field_0xab;
        undefined field_0xac;
        undefined field_0xad;
        undefined field_0xae;
        undefined field_0xaf;
        undefined field_0xb0;
        undefined field_0xb1;
        undefined field_0xb2;
        undefined field_0xb3;
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        undefined field_0xb8;
        undefined field_0xb9;
        undefined field_0xba;
        undefined field_0xbb;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        undefined field_0xc4;
        undefined field_0xc5;
        undefined field_0xc6;
        undefined field_0xc7;
        undefined field_0xc8;
        undefined field_0xc9;
        undefined field_0xca;
        undefined field_0xcb;
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        undefined field_0xd0;
        undefined field_0xd1;
        undefined field_0xd2;
        undefined field_0xd3;
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        undefined field_0xd8;
        undefined field_0xd9;
        undefined field_0xda;
        undefined field_0xdb;
        undefined field_0xdc;
        undefined field_0xdd;
        undefined field_0xde;
        undefined field_0xdf;
        undefined field_0xe0;
        undefined field_0xe1;
        undefined field_0xe2;
        undefined field_0xe3;
        undefined field_0xe4;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        undefined field_0xe8;
        undefined field_0xe9;
        undefined field_0xea;
        undefined field_0xeb;
        char TotalPieces;
        undefined field_0xed;
        undefined field_0xee;
        undefined field_0xef;
        undefined field_0xf0;
        undefined field_0xf1;
        undefined field_0xf2;
        undefined field_0xf3;
        undefined field_0xf4;
        undefined field_0xf5;
        undefined field_0xf6;
        undefined field_0xf7;
        undefined field_0xf8;
        undefined field_0xf9;
        undefined field_0xfa;
        undefined field_0xfb;
        undefined field_0xfc;
        undefined field_0xfd;
        undefined field_0xfe;
        undefined field_0xff;
        undefined field_0x100;
        undefined field_0x101;
        undefined field_0x102;
        undefined field_0x103;
        undefined field_0x104;
        undefined field_0x105;
        undefined field_0x106;
        undefined field_0x107;
        undefined field_0x108;
        undefined field_0x109;
        undefined field_0x10a;
        undefined field_0x10b;
        undefined field_0x10c;
        undefined field_0x10d;
        undefined field_0x10e;
        undefined field_0x10f;
        undefined field_0x110;
        undefined field_0x111;
        undefined field_0x112;
        undefined field_0x113;
        undefined field_0x114;
        undefined field_0x115;
        undefined field_0x116;
        undefined field_0x117;
        undefined field_0x118;
        undefined field_0x119;
        undefined field_0x11a;
        undefined field_0x11b;
        undefined field_0x11c;
        undefined field_0x11d;
        undefined field_0x11e;
        undefined field_0x11f;
        undefined field_0x120;
        undefined field_0x121;
        undefined field_0x122;
        undefined field_0x123;
        undefined field_0x124;
        undefined field_0x125;
        undefined field_0x126;
        undefined field_0x127;
        undefined field_0x128;
        undefined field_0x129;
        undefined field_0x12a;
        undefined field_0x12b;
        undefined field_0x12c;
        undefined field_0x12d;
        undefined field_0x12e;
        undefined field_0x12f;
        undefined field_0x130;
        undefined field_0x131;
        undefined field_0x132;
        undefined field_0x133;
    };

    struct D2TxtLinkStrc {
        int nRecords;
        void *field_0x4;
        void *pUnknownPointer;
        struct D2TxtLinkNodeStrc *pTxtLinkNode;
    };

    struct D2SetItemsTxtEntry {
        int apropa;
        int apara;
        int amina;
        int amaxa;
        int apropb;
        int aparb;
        int aminb;
        int amaxb;
    };

    struct D2SkillDescTxt {
        short skilldesc;
        byte skillpage;
        byte skillrow;
        byte skillcolumn;
        byte ListRow;
        byte ListPool;
        byte iconcel;
        short strname;
        short strshort;
        short strlong;
        short stralt;
        short strmana;
        short descdam;
        short descatt;
        undefined field_0x16;
        undefined field_0x17;
        pointer ddamcalc1;
        pointer ddamcalc2;
        byte dmelem[3];
        undefined field_0x23;
        pointer dmmin[3];
        pointer dmmax[3];
        short descmissile[3];
        byte descline[6];
        byte dsc2line[4];
        byte dsc3line[7];
        undefined field_0x53;
        short desctexta[6];
        short dsc2texta[4];
        short dsc3texta[7];
        short desctextb[6];
        short dsc2textb[4];
        short dsc3textb[7];
        pointer desccalca[6];
        pointer dsc2calca[4];
        pointer dsc3calca[7];
        pointer desccalcb[6];
        pointer dsc2calcb[4];
        pointer dsc3calcb[7];
    };

    struct D2HitClassTxt {
        char code[4];
    };

    struct D2SetsTxtPStrc {
        int pcodea;
        pointer pparama;
        int pmina;
        int pmaxa;
        int pcodeb;
        pointer pparamb;
        int pminb;
        int pmaxb;
    };

    struct D2SetsTxtFStrc {
        int fcode;
        pointer fparam;
        int fmin;
        int fmax;
    };

    struct D2SetsTxt {
        short index;
        short name;
        short version;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        int nTxtSetItemsCount;
        struct D2SetsTxtPStrc field_0x10[4];
        struct D2SetsTxtFStrc field_0x90[8];
        struct D2SetItemsTxt *pTxtSetItems[6];
    };

    struct D2SoundsTxt {
        short Sound;
    };

    struct D2MonPropTxtEntry {
        int prop;
        int par;
        int min;
        int max;
    };

    struct D2CharItemStrc {
        int dwItemCode;
        char nBodyLoc;
        char nItemCount;
        undefined field_0x6;
        undefined field_0x7;
    };

    struct D2ColorsTxt {
        char code[4];
    };

    struct D2TxtLinkNodeStrc {
        char szText[32];
        int nLinkIndex;
        struct D2TxtLinkNodeStrc *pPrevious;
        struct D2TxtLinkNodeStrc *pNext;
    };

    struct D2EventsTxt {
        ushort event;
    };

    struct D2ParsedTreasureClassSub0x28Strc {
        int somethingClassic;
        int somethingExpansion;
        short nItemClassId;
        undefined field_0xa;
        undefined field_0xb;
        byte nFlags;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
    };

    struct D2MonSeqMonsterTbls {
        struct D2MonSeqTxt *pMonSeqTxt;
        int nCounter1;
        int nCounter2;
    };

    struct D2LevelDefsColor {
        char Intensity;
        char Red;
        char Green;
        char Blue;
    };

    struct D2MonUModTxt {
        short uniquemod;
        undefined field_0x2;
        undefined field_0x3;
        short version;
        char enabled;
        char xfer;
        char champion;
        char fpick;
        short exclude1;
        short exclude2;
        short cpick[3];
        short upick[3];
        undefined field_0x1a;
        undefined field_0x1b;
        int constants;
    };

    struct D2MonPropTxt {
        int Id;
        struct D2MonPropTxtEntry entry[3][6];
        char chance[3][6];
        undefined field_0x136;
        undefined field_0x137;
    };

    struct D2ParsedTreasureClassStrc {
        short field_0x0;
        short field_0x2;
        int count;
        int somethingClassic;
        int somethingExpansion;
        int field_0x10;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        int field_0x1a;
        int field_0x1e;
        int field_0x22;
        undefined field_0x26;
        undefined field_0x27;
        struct D2ParsedTreasureClassSub0x28Strc *field_0x28;
    };

    struct D2SkillsTxt {
        short skill;
        undefined field_0x2;
        undefined field_0x3;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        char charclass;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        char anim;
        char monanim;
        char seqtrans;
        char seqnum;
        char range;
        char SelectProc;
        char seqinput;
        undefined field_0x17;
        short itypea1;
        short itypea2;
        short itypea3;
        short itypeb1;
        short itypeb2;
        short itypeb3;
        short etypea1;
        short etypea2;
        short etypeb1;
        short etypeb2;
        short srvstfunc;
        short srvdofunc;
        short srvprgfunc[3];
        undefined field_0x36;
        undefined field_0x37;
        int prgcalc[3];
        char prgdam;
        undefined field_0x45;
        short srvmissile;
        short srvmissilea;
        short srvmissileb;
        short srvmissilec;
        short srvoverlay;
        int aurafilter;
        short aurastat[6];
        int auralencalc;
        int aurarangecalc;
        int aurastatcalc[6];
        short aurastate;
        short auratargetstate;
        short auraevent[3];
        short auraeventfunc[3];
        short auratgtevent;
        short auratgteventfunc;
        short passivestate;
        short passiveitype;
        short passivestat1[5];
        undefined field_0xa2;
        undefined field_0xa3;
        int passivecalc[5];
        short passiveevent;
        short passiveeventfunc;
        short summon;
        char pettype;
        char summode;
        int petmax;
        short sumskill[5];
        undefined field_0xce;
        undefined field_0xcf;
        int sumskcalc[5];
        short sumumod;
        short sumoverlay;
        short cltmissile;
        short cltmissilea;
        short cltmissileb;
        short cltmissilec;
        short cltmissiled;
        short cltstfunc;
        short cltdofunc;
        short cltprgfunc[3];
        short stsound;
        short stsoundclass;
        short dosound;
        short dosound_a;
        short dosound_b;
        short castoverlay;
        short tgtoverlay;
        short tgtsound;
        short prgoverlay;
        short prgsound;
        short cltoverlaya;
        short cltoverlayb;
        int cltcalc[3];
        char ItemTarget;
        undefined field_0x121;
        short ItemCastSound;
        short ItemCastOverlay;
        undefined field_0x126;
        undefined field_0x127;
        int perdelay;
        short maxlvl;
        short ResultFlags;
        int HitFlags;
        int HitClass;
        int calc[4];
        int Param[8];
        char weapsel;
        undefined field_0x169;
        short ItemEffect;
        short ItemCltEffect;
        undefined field_0x16e;
        undefined field_0x16f;
        int skpoints;
        short reqlevel;
        short reqstr;
        short reqdex;
        short reqint;
        short reqvit;
        short reqskill[3];
        short startmana;
        short minmana;
        short manashift;
        short mana;
        short lvlmana;
        char attackrank;
        char lineofsight;
        int delay;
        short skilldesc;
        undefined field_0x196;
        undefined field_0x197;
        int ToHit;
        int LevToHit;
        int ToHitCalc;
        char HitShift;
        char SrcDam;
        undefined field_0x1a6;
        undefined field_0x1a7;
        int MinDam;
        int MaxDam;
        int MinLevDam[5];
        int MaxLevDam[5];
        int DmgSymPerCalc;
        char EType;
        undefined field_0x1dd;
        undefined field_0x1de;
        undefined field_0x1df;
        int EMin;
        int EMax;
        int EMinLev[5];
        int EMaxLev[5];
        int EDmgSymPerCalc;
        int ELen;
        int ELevLen[3];
        int ELenSymPerCalc;
        char restrict;
        undefined field_0x229;
        short state[3];
        char aitype;
        undefined field_0x231;
        short aibonus;
        int cost_mult;
        int cost_add;
    };

    struct D2MissCalcTxt {
        char code[4];
    };

    struct D2PlrModeTxt {
        char code[4];
    };

    struct D2OverlayTxt {
        ushort overlay;
        char Filename[64];
        short version;
        int Frames;
        char PreDraw;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        int _1ofN;
        char Dir;
        char Open;
        char Beta;
        undefined field_0x53;
        int Xoffset;
        int Yoffset;
        int Height1;
        int Height2;
        int Height3;
        int Height4;
        int AnimRate;
        int InitRadius;
        int Radius;
        int LoopWaitTime;
        char Trans;
        char Red;
        char Green;
        char Blue;
        char NumDirections;
        char LocalBlood;
        undefined field_0x82;
        undefined field_0x83;
    };

    struct D2LevelDefsTxt {
        int QuestFlag;
        int QuestFlagEx;
        int Layer;
        int SizeX[3];
        int SizeY[3];
        int OffsetX;
        int OffsetY;
        int Depend;
        enum eD2DrlgType DrlgType;
        int LevelType;
        int SubType;
        int SubTheme;
        int SubWaypoint;
        int SubShrine;
        int Vis[8];
        int Warp[8];
        struct D2LevelDefsColor ColorInfo;
        int Portal;
        int Position;
        int SaveMonsters;
        int LOSDraw;
    };

    struct D2MonSeqTxt {
        short sequence;
        byte mode;
        byte frame;
        byte dir;
        byte event;
    };

    struct D2PlayerClassTxt {
        char code[4];
    };

    struct D2SkillCalcTxt {
        char code[4];
    };

    struct D2MonLvlTxt {
        int AC[3];
        int LAC[3];
        int TH[3];
        int LTH[3];
        int HP[3];
        int LHP[3];
        int DM[3];
        int LDM[3];
        int XP[3];
        int LXP[3];
    };

    struct D2CompCodeTxt {
        char code[4];
    };

    struct D2MonStatsTxt {
        ushort Id;
        short BaseId;
        short NextInClass;
        ushort NameStr;
        ushort DescStr;
        undefined field_0xa;
        undefined field_0xb;
        int isSpawn: 1;
        int isMelee: 1;
        int noRatio: 1;
        int opendoors: 1;
        int SetBoss: 1;
        int BossXfer: 1;
        int boss: 1;
        int primeevil: 1;
        int npc: 1;
        int interact: 1;
        int inTown: 1;
        int lUndead: 1;
        int hUndead: 1;
        int demon: 1;
        int flying: 1;
        int killable: 1;
        int switchai: 1;
        int nomultishot: 1;
        int neverCount: 1;
        int petIgnore: 1;
        int deathDmg: 1;
        int genericSpawn: 1;
        int zoo: 1;
        int placespawn: 1;
        int inventory: 1;
        int enabled: 1;
        int NoShldBlock: 1;
        int noaura: 1;
        int rangedtype: 1;
        char Code[4];
        short MonSound;
        short UMonSound;
        short MonStatsEx;
        short MonProp;
        short MonType;
        short AI;
        short spawn;
        char spawnx;
        char spawny;
        char spawnmode;
        undefined field_0x25;
        short minion1;
        short minion2;
        short nMonEquipId; /* Created by retype action */
        char PartyMin;
        char PartyMax;
        char Rarity;
        char MinGrp;
        char MaxGrp;
        char sparsePopulate;
        short Velocity;
        short Run;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        short MissA1;
        short MissA2;
        short MissS1;
        short MissS2;
        short MissS3;
        short MissS4;
        short MissC;
        short MissSQ;
        undefined field_0x4a;
        undefined field_0x4b;
        char Align;
        char TransLvl;
        char threat;
        char aidel;
        char aidelNM;
        char aidelHELL;
        char aidist;
        char aidistNM;
        char aidistHELL;
        undefined field_0x55;
        short aip1;
        short aip1NM;
        short aip1HELL;
        short aip2;
        short aip2NM;
        short aip2HELL;
        short aip3;
        short aip3NM;
        short aip3HELL;
        short aip4;
        short aip4NM;
        short aip4HELL;
        short aip5;
        short aip5NM;
        short aip5HELL;
        short aip6;
        short aip6NM;
        short aip6HELL;
        short aip7;
        short aip7NM;
        short aip7HELL;
        short aip8;
        short aip8NM;
        short aip8HELL;
        struct D2MonStatsTxtTC TreasureClass[3];
        char TCQuestId;
        char TCQuestCP;
        char Drain;
        char DrainNM;
        char DrainHELL;
        char ToBlock;
        char ToBlockNM;
        char ToBlockHELL;
        char Crit;
        undefined field_0xa7;
        short SkillDamage;
        short Level;
        short LevelNM;
        short LevelHELL;
        short MinHP;
        short MinHPNM;
        short MinHPHELL;
        short MaxHP;
        short MaxHPNM;
        short MaxHPHELL;
        short AC;
        short ACNM;
        short ACHELL;
        short A1TH;
        short A1THNM;
        short A1THHELL;
        short A2TH;
        short A2THNM;
        short A2THHELL;
        short S1TH;
        short S1THNM;
        short S1THHELL;
        short Exp;
        short ExpNM;
        short ExpHELL;
        short A1MinD;
        short A1MinDNM;
        short A1MinDHELL;
        short A1MaxD;
        short A1MaxDNM;
        short A1MaxDHELL;
        short A2MinD;
        short A2MinDNM;
        short A2MinDHELL;
        short A2MaxD;
        short A2MaxDNM;
        short A2MaxDHELL;
        short S1MinD;
        short S1MinDNM;
        short S1MinDHELL;
        short S1MaxD;
        short S1MaxDNM;
        short S1MaxDHELL;
        char El1Mode;
        char El2Mode;
        char El3Mode;
        char El1Type;
        char El2Type;
        char El3Type;
        char El1Pct;
        char El1PctNM;
        char El1PctHELL;
        char El2Pct;
        char El2PctNM;
        char El2PctHELL;
        char El3Pct;
        char El3PctNM;
        char El3PctHELL;
        undefined field_0x10d;
        short El1MinD;
        short El1MinDNM;
        short El1MinDHELL;
        short El2MinD;
        short El2MinDNM;
        short El2MinDHELL;
        short El3MinD;
        short El3MinDNM;
        short El3MinDHELL;
        short El1MaxD;
        short El1MaxDNM;
        short El1MaxDHELL;
        short El2MaxD;
        short El2MaxDNM;
        short El2MaxDHELL;
        short El3MaxD;
        short El3MaxDNM;
        short El3MaxDHELL;
        short El1Dur;
        short El1DurNM;
        short El1DurHELL;
        short El2Dur;
        short El2DurNM;
        short El2DurHELL;
        short El3Dur;
        short El3DurNM;
        short El3DurHELL;
        short ResDm;
        short ResDmNM;
        short ResDmHELL;
        short ResMa;
        short ResMaNM;
        short ResMaHELL;
        short ResFi;
        short ResFiNM;
        short ResFiHELL;
        short ResLi;
        short ResLiNM;
        short ResLiHELL;
        short ResCo;
        short ResCoNM;
        short ResCoHELL;
        short ResPo;
        short ResPoNM;
        short ResPoHELL;
        char ColdEffect;
        char ColdEffectNM;
        short ColdEffectHELL;
        uint SendSkills;
        short Skill1;
        short Skill2;
        short Skill3;
        short Skill4;
        short Skill5;
        short Skill6;
        short Skill7;
        short Skill8;
        char field_unknown_delayRelated[8]; /* Created by retype action */
        undefined field_0x188;
        undefined field_0x189;
        undefined field_0x18a;
        undefined field_0x18b;
        undefined field_0x18c;
        undefined field_0x18d;
        undefined field_0x18e;
        undefined field_0x18f;
        undefined field_0x190;
        undefined field_0x191;
        undefined field_0x192;
        undefined field_0x193;
        undefined field_0x194;
        undefined field_0x195;
        undefined field_0x196;
        undefined field_0x197;
        char Sk1lvl;
        char Sk2lvl;
        char Sk3lvl;
        char Sk4lvl;
        char Sk5lvl;
        char Sk6lvl;
        char Sk7lvl;
        char Sk8lvl;
        int DamageRegen;
        char SplEndDeath;
        char SplGetModeChart;
        char SplEndGeneric;
        char SplClientEnd;
    };

    struct D2SuperUniquesTxt {
        short Superunique;
        short Name;
        int Class;
        int hcIdx;
        int Mod[3];
        int MonSound;
        int MinGrp;
        int MaxGrp;
        char AutoPos;
        char EClass;
        char Stacks;
        char Replaceable;
        char Utrans[3];
        undefined field_0x2b;
        short TC[3];
        undefined field_0x32;
        undefined field_0x33;
    };

    struct D2AllStatesDataTbl {
        short nStateId;
    };

    struct D2MonPresetTxt {
        char Act;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
    };

    struct D2DifficultyLevelsTxt {
        int ResistPenalty;
        int DeathExpPenalty;
        int UberCodeOddsNormal;
        int UberCodeOddsGood;
        int MonsterSkillBonus;
        int MonsterFreezeDivisor;
        int MonsterColdDivisor;
        int AiCurseDivisor;
        int UltraCodeOddsNormal;
        int UltraCodeOddsGood;
        int LifeStealDivisor;
        int ManaStealDivisor;
        int UniqueDamageBonus;
        int ChampionDamageBonus;
        int HireableBossDamagePercent;
        int MonsterCEDamagePercent;
        int StaticFieldMin;
        int GambleRare;
        int GambleSet;
        int GambleUnique;
        int GambleUber;
        int GambleUltra;
    };

    struct D2ExperienceTxt {
        int Class[7];
        int ExpRatio;
    };

    struct D2SkillsHeaderTxt {
        ushort skill;
    };

    struct D2LvlPrestTxt {
        int Def;
        enum eD2LevelId LevelId;
        int Populate;
        int Logicals;
        int Outdoors;
        int Animate;
        int KillEdge;
        int FillBlanks;
        int Expansion;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        int SizeX;
        int SizeY;
        int AutoMap;
        int Scan;
        int Pops;
        int PopPad;
        int Files;
        std::string File[6];
        int Dt1Mask;
    };

    struct D2ElemTypesTxt {
        char code[4];
    };

    struct D2NpcTxt {
        int npc;
        int sell_mult;
        int buy_mult;
        int rep_mult;
        int questflag_A;
        int questflag_B;
        int questflag_C;
        int questsellmult_A;
        int questsellmult_B;
        int questsellmult_C;
        int questbuymult_A;
        int questbuymult_B;
        int questbuymult_C;
        int questrepmult_A;
        int questrepmult_B;
        int questrepmult_C;
        int max_buy[3];
    };

    struct D2PassiveSkillsPerClassStrc {
        short nSkillId;
    };

    struct D2StatesDataTbls {
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        undefined field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        undefined field_0x48;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        undefined field_0x50;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
        undefined field_0x54;
        undefined field_0x55;
        undefined field_0x56;
        undefined field_0x57;
        undefined field_0x58;
        undefined field_0x59;
        undefined field_0x5a;
        undefined field_0x5b;
        undefined field_0x5c;
        undefined field_0x5d;
        undefined field_0x5e;
        undefined field_0x5f;
        undefined field_0x60;
        undefined field_0x61;
        undefined field_0x62;
        undefined field_0x63;
        undefined field_0x64;
        undefined field_0x65;
        undefined field_0x66;
        undefined field_0x67;
        undefined field_0x68;
        undefined field_0x69;
        undefined field_0x6a;
        undefined field_0x6b;
        undefined field_0x6c;
        undefined field_0x6d;
        undefined field_0x6e;
        undefined field_0x6f;
        undefined field_0x70;
        undefined field_0x71;
        undefined field_0x72;
        undefined field_0x73;
        undefined field_0x74;
        undefined field_0x75;
        undefined field_0x76;
        undefined field_0x77;
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        undefined field_0x80;
        undefined field_0x81;
        undefined field_0x82;
        undefined field_0x83;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        undefined field_0x90;
        undefined field_0x91;
        undefined field_0x92;
        undefined field_0x93;
        undefined field_0x94;
        undefined field_0x95;
        undefined field_0x96;
        undefined field_0x97;
        undefined field_0x98;
        undefined field_0x99;
        undefined field_0x9a;
        undefined field_0x9b;
        undefined field_0x9c;
        undefined field_0x9d;
        undefined field_0x9e;
        undefined field_0x9f;
    };

    struct D2LevelsTxt {
        char Id;
        undefined field_0x1;
        char Pal;
        char Act;
        char Teleport;
        char Rain;
        char Mud;
        char NoPer;
        char IsInside;
        char DrawEdges;
        undefined field_0xa;
        undefined field_0xb;
        int WarpDist;
        short MonLvl[3];
        short MonLvlEx[3];
        int MonDen[3];
        char MonUMin[3];
        char MonUMax[3];
        char MonWndr;
        char MonSpcWalk;
        char Quest;
        char rangedspawn;
        char NumMon;
        char nValidMonCount; /* Created by retype action */
        char nValinNMonCount; /* Created by retype action */
        char nValidUMonCount; /* Created by retype action */
        short mon[25];
        short nmon[25];
        short umon[25];
        short cmon[4];
        short cpct[4];
        short camt[4];
        char Waypoint;
        char ObjGrp[8];
        char ObjPrb[8];
        char LevelName[40];
        char LevelWarp[40];
        char EntryFile[40];
        undefined field_0x16d;
        WCHAR wszLevelName[40];
        WCHAR wszLevelWarp[40];
        undefined field_0x20e;
        undefined field_0x20f;
        int Themes;
        int FloorFilter;
        int BlankScreen;
        char SoundEnv;
        undefined field_0x21d;
        undefined field_0x21e;
        undefined field_0x21f;
    };

    struct D2MonAiTxt {
        ushort AI;
    };

    struct D2PetTypeTxt {
        uint pet_type;
        int field_0x4;
        short group;
        short basemax;
        ushort name;
        char icontype;
        char baseicon[32];
        char micon1[32];
        char micon2[32];
        char micon3[32];
        char micon4[32];
        undefined field_0xaf;
        undefined field_0xb0;
        undefined field_0xb1;
        short mclass1;
        short mclass2;
        short mclass3;
        short mclass4;
        undefined field_0xba;
        undefined field_0xbb;
        int nSkillIndexCounter;
        short nSkillId[16];
    };

    struct D2MonSoundsTxt {
        short Id;
        undefined field_0x2;
        undefined field_0x3;
        int Attack1;
        int Att1Del;
        int Att1Prb;
        int Weapon1;
        int Wea1Del;
        int Wea1Vol;
        int Attack2;
        int Att2Del;
        int Att2Prb;
        int Weapon2;
        int Wea2Del;
        int Wea2Vol;
        int HitSound;
        int HitDelay;
        int DeathSound;
        int DeaDelay;
        int Skill[4];
        int Footstep;
        int FootstepLayer;
        int FsCnt;
        int FsOff;
        int FsPrb;
        int Neutral;
        int NeuTime;
        int Init;
        int Taunt;
        int Flee;
        char CvtMo1;
        char CvtTgt1;
        undefined field_0x7e;
        undefined field_0x7f;
        int CvtSk1;
        char CvtMo2;
        char CvtTgt2;
        undefined field_0x86;
        undefined field_0x87;
        int CvtSk2;
        char CvtMo3;
        char CvtTgt3;
        undefined field_0x8e;
        undefined field_0x8f;
        int CvtSk3;
    };

    struct D2CharStatsTxt {
        WCHAR wszClass[16];
        char szClass[16];
        char str;
        char dex;
        char int_enegery;
        char vit;
        char stamina;
        char hpadd;
        char PercentStr;
        char PercentInt;
        char PercentDex;
        char PercentVit;
        char ManaRegen;
        undefined field_0x3b;
        int ToHitFactor;
        char WalkVelocity;
        char RunVelocity;
        char RunDrain;
        char LifePerLevel;
        char StaminaPerLevel;
        char ManaPerLevel;
        char LifePerVitality;
        char StaminaPerVitality;
        char ManaPerMagic;
        char BlockFactor;
        undefined field_0x4a;
        undefined field_0x4b;
        char basewclass[4];
        char StatPerLevel;
        undefined field_0x51;
        ushort StrAllSkills;
        ushort StrSkillTab1;
        ushort StrSkillTab2;
        ushort StrSkillTab3;
        ushort StrClassOnly;
        struct D2CharItemStrc sItem[10];
        short StartSkill;
        short Skill[10];
        undefined field_0xc2;
        undefined field_0xc3;
    };

    struct D2MonPlaceTxt {
        ushort code;
    };

    struct D2MonModeTxtSmall {
        char code[4];
    };

    struct D2HireDescTxt {
        char code[4];
    };

    struct D2StorePageTxt {
        char code[4];
    };

    struct D2MonPresetTxtPlace {
        int Place: 1;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
    };

    struct D2SetItemsTxt {
        short nId;
        char index[32];
        short version;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        char item[4];
        short set;
        short setIndex;
        short lvl;
        short lvlreq;
        int rarity;
        int costmult;
        int costadd;
        char chrtransform;
        char invtransform;
        char flippyfile[32];
        char invfile[32];
        short dropsound;
        short usesound;
        char dropsfxframe;
        char addfunc;
        struct D2UniqueSetItemsTxtEntry sEntry[9];
        struct D2SetItemsTxtEntry sEntryEx[5];
    };

    struct D2SkillStrc {
        struct D2SkillsTxt *pRecord;
        struct D2SkillStrc *pNext;
        int nMode;
        int fFlags;
        int field_0x10;
        int field_0x14;
        int nPar1;
        int nPar2;
        int nPar3;
        int nPar4;
        int nLevel;
        int nLevelBonus;
        int nQuantity;
        int nOwnerGUID;
        int nCharges;
        int field_0x3c;
    };

    typedef unsigned char undefined;

    typedef unsigned long long GUID;
    typedef unsigned int ImageBaseOffset32;
    typedef unsigned char byte;
    typedef unsigned int dword;
    typedef long long longlong;
    typedef unsigned char uchar;
    typedef unsigned int uint;
    typedef unsigned int uint3;
    typedef unsigned long ulong;
    typedef unsigned long long ulonglong;
    typedef unsigned char undefined1;
    typedef unsigned short undefined2;
    typedef unsigned int undefined3;
    typedef unsigned int undefined4;
    typedef unsigned long long undefined5;
    typedef unsigned long long undefined6;
    typedef unsigned long long undefined8;
    typedef unsigned short ushort;
    typedef unsigned short word;
    typedef struct D2QServerStrc D2QServerStrc, *PD2QServerStrc;

    typedef struct D2QServerClientListStrc D2QServerClientListStrc, *PD2QServerClientListStrc;

    typedef int BOOL;

    typedef uint UINT_PTR;

    typedef UINT_PTR SOCKET;

    typedef ushort u_short;

    typedef void *HANDLE;

    typedef ulong DWORD;

    typedef struct D2QServerClientStrc D2QServerClientStrc, *PD2QServerClientStrc;


    typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

    typedef struct D2QServerClientPacketStrc D2QServerClientPacketStrc, *PD2QServerClientPacketStrc;

    typedef long LONG;

    typedef ulong ULONG_PTR;

    typedef uint size_t;

    typedef ushort WORD;

    struct D2QServerStrc {
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        struct D2QServerClientListStrc *pQServerClientList; /* Created by retype action */
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        undefined field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        undefined field_0x48;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        undefined field_0x50;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
        undefined field_0x54;
        undefined field_0x55;
        undefined field_0x56;
        undefined field_0x57;
        undefined field_0x58;
        undefined field_0x59;
        undefined field_0x5a;
        undefined field_0x5b;
        undefined field_0x5c;
        undefined field_0x5d;
        undefined field_0x5e;
        undefined field_0x5f;
        undefined field_0x60;
        undefined field_0x61;
        undefined field_0x62;
        undefined field_0x63;
        undefined field_0x64;
        undefined field_0x65;
        undefined field_0x66;
        undefined field_0x67;
        undefined field_0x68;
        undefined field_0x69;
        undefined field_0x6a;
        undefined field_0x6b;
        undefined field_0x6c;
        undefined field_0x6d;
        undefined field_0x6e;
        undefined field_0x6f;
        undefined field_0x70;
        undefined field_0x71;
        undefined field_0x72;
        undefined field_0x73;
        undefined field_0x74;
        undefined field_0x75;
        undefined field_0x76;
        undefined field_0x77;
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        undefined field_0x80;
        undefined field_0x81;
        undefined field_0x82;
        undefined field_0x83;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        undefined field_0x90;
        undefined field_0x91;
        undefined field_0x92;
        undefined field_0x93;
        undefined field_0x94;
        undefined field_0x95;
        undefined field_0x96;
        undefined field_0x97;
        undefined field_0x98;
        undefined field_0x99;
        undefined field_0x9a;
        undefined field_0x9b;
        undefined field_0x9c;
        undefined field_0x9d;
        undefined field_0x9e;
        undefined field_0x9f;
        undefined field_0xa0;
        undefined field_0xa1;
        undefined field_0xa2;
        undefined field_0xa3;
        undefined field_0xa4;
        undefined field_0xa5;
        undefined field_0xa6;
        undefined field_0xa7;
        undefined field_0xa8;
        undefined field_0xa9;
        undefined field_0xaa;
        undefined field_0xab;
        undefined field_0xac;
        undefined field_0xad;
        undefined field_0xae;
        undefined field_0xaf;
        undefined field_0xb0;
        undefined field_0xb1;
        undefined field_0xb2;
        undefined field_0xb3;
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        undefined field_0xb8;
        undefined field_0xb9;
        undefined field_0xba;
        undefined field_0xbb;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        undefined field_0xc4;
        undefined field_0xc5;
        undefined field_0xc6;
        undefined field_0xc7;
        undefined field_0xc8;
        undefined field_0xc9;
        undefined field_0xca;
        undefined field_0xcb;
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        undefined field_0xd0;
        undefined field_0xd1;
        undefined field_0xd2;
        undefined field_0xd3;
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        undefined field_0xd8;
        undefined field_0xd9;
        undefined field_0xda;
        undefined field_0xdb;
        undefined field_0xdc;
        undefined field_0xdd;
        undefined field_0xde;
        undefined field_0xdf;
        undefined field_0xe0;
        undefined field_0xe1;
        undefined field_0xe2;
        undefined field_0xe3;
        undefined field_0xe4;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        undefined field_0xe8;
        undefined field_0xe9;
        undefined field_0xea;
        undefined field_0xeb;
        undefined field_0xec;
        undefined field_0xed;
        undefined field_0xee;
        undefined field_0xef;
        undefined field_0xf0;
        undefined field_0xf1;
        undefined field_0xf2;
        undefined field_0xf3;
        undefined field_0xf4;
        undefined field_0xf5;
        undefined field_0xf6;
        undefined field_0xf7;
        undefined field_0xf8;
        undefined field_0xf9;
        undefined field_0xfa;
        undefined field_0xfb;
        undefined field_0xfc;
        undefined field_0xfd;
        undefined field_0xfe;
        undefined field_0xff;
        undefined field_0x100;
        undefined field_0x101;
        undefined field_0x102;
        undefined field_0x103;
        undefined field_0x104;
        undefined field_0x105;
        undefined field_0x106;
        undefined field_0x107;
        undefined field_0x108;
        undefined field_0x109;
        undefined field_0x10a;
        undefined field_0x10b;
        undefined field_0x10c;
        undefined field_0x10d;
        undefined field_0x10e;
        undefined field_0x10f;
        undefined field_0x110;
        undefined field_0x111;
        undefined field_0x112;
        undefined field_0x113;
        undefined field_0x114;
        undefined field_0x115;
        undefined field_0x116;
        undefined field_0x117;
        undefined field_0x118;
        undefined field_0x119;
        undefined field_0x11a;
        undefined field_0x11b;
        undefined field_0x11c;
        undefined field_0x11d;
        undefined field_0x11e;
        undefined field_0x11f;
        undefined field_0x120;
        undefined field_0x121;
        undefined field_0x122;
        undefined field_0x123;
        undefined field_0x124;
        undefined field_0x125;
        undefined field_0x126;
        undefined field_0x127;
        undefined field_0x128;
        undefined field_0x129;
        undefined field_0x12a;
        undefined field_0x12b;
        undefined field_0x12c;
        undefined field_0x12d;
        undefined field_0x12e;
        undefined field_0x12f;
        undefined field_0x130;
        undefined field_0x131;
        undefined field_0x132;
        undefined field_0x133;
        undefined field_0x134;
        undefined field_0x135;
        undefined field_0x136;
        undefined field_0x137;
        undefined field_0x138;
        undefined field_0x139;
        undefined field_0x13a;
        undefined field_0x13b;
        undefined field_0x13c;
        undefined field_0x13d;
        undefined field_0x13e;
        undefined field_0x13f;
        undefined field_0x140;
        undefined field_0x141;
        undefined field_0x142;
        undefined field_0x143;
        undefined field_0x144;
        undefined field_0x145;
        undefined field_0x146;
        undefined field_0x147;
        undefined field_0x148;
        undefined field_0x149;
        undefined field_0x14a;
        undefined field_0x14b;
        undefined field_0x14c;
        undefined field_0x14d;
        undefined field_0x14e;
        undefined field_0x14f;
        undefined field_0x150;
        undefined field_0x151;
        undefined field_0x152;
        undefined field_0x153;
        undefined field_0x154;
        undefined field_0x155;
        undefined field_0x156;
        undefined field_0x157;
        undefined field_0x158;
        undefined field_0x159;
        undefined field_0x15a;
        undefined field_0x15b;
        undefined field_0x15c;
        undefined field_0x15d;
        undefined field_0x15e;
        undefined field_0x15f;
        undefined field_0x160;
        undefined field_0x161;
        undefined field_0x162;
        undefined field_0x163;
        undefined field_0x164;
        undefined field_0x165;
        undefined field_0x166;
        undefined field_0x167;
        undefined field_0x168;
        undefined field_0x169;
        undefined field_0x16a;
        undefined field_0x16b;
        undefined field_0x16c;
        undefined field_0x16d;
        undefined field_0x16e;
        undefined field_0x16f;
        undefined field_0x170;
        undefined field_0x171;
        undefined field_0x172;
        undefined field_0x173;
        undefined field_0x174;
        undefined field_0x175;
        undefined field_0x176;
        undefined field_0x177;
        undefined field_0x178;
        undefined field_0x179;
        undefined field_0x17a;
        undefined field_0x17b;
        undefined field_0x17c;
        undefined field_0x17d;
        undefined field_0x17e;
        undefined field_0x17f;
        undefined field_0x180;
        undefined field_0x181;
        undefined field_0x182;
        undefined field_0x183;
        undefined field_0x184;
        undefined field_0x185;
        undefined field_0x186;
        undefined field_0x187;
        undefined field_0x188;
        undefined field_0x189;
        undefined field_0x18a;
        undefined field_0x18b;
        undefined field_0x18c;
        undefined field_0x18d;
        undefined field_0x18e;
        undefined field_0x18f;
        undefined field_0x190;
        undefined field_0x191;
        undefined field_0x192;
        undefined field_0x193;
        undefined field_0x194;
        undefined field_0x195;
        undefined field_0x196;
        undefined field_0x197;
        undefined field_0x198;
        undefined field_0x199;
        undefined field_0x19a;
        undefined field_0x19b;
        undefined field_0x19c;
        undefined field_0x19d;
        undefined field_0x19e;
        undefined field_0x19f;
        undefined field_0x1a0;
        undefined field_0x1a1;
        undefined field_0x1a2;
        undefined field_0x1a3;
        undefined field_0x1a4;
        undefined field_0x1a5;
        undefined field_0x1a6;
        undefined field_0x1a7;
        undefined field_0x1a8;
        undefined field_0x1a9;
        undefined field_0x1aa;
        undefined field_0x1ab;
        undefined field_0x1ac;
        undefined field_0x1ad;
        undefined field_0x1ae;
        undefined field_0x1af;
        undefined field_0x1b0;
        undefined field_0x1b1;
        undefined field_0x1b2;
        undefined field_0x1b3;
        undefined field_0x1b4;
        undefined field_0x1b5;
        undefined field_0x1b6;
        undefined field_0x1b7;
        undefined field_0x1b8;
        undefined field_0x1b9;
        undefined field_0x1ba;
        undefined field_0x1bb;
        undefined field_0x1bc;
        undefined field_0x1bd;
        undefined field_0x1be;
        undefined field_0x1bf;
        undefined field_0x1c0;
        undefined field_0x1c1;
        undefined field_0x1c2;
        undefined field_0x1c3;
        undefined field_0x1c4;
        undefined field_0x1c5;
        undefined field_0x1c6;
        undefined field_0x1c7;
        undefined field_0x1c8;
        undefined field_0x1c9;
        undefined field_0x1ca;
        undefined field_0x1cb;
        undefined field_0x1cc;
        undefined field_0x1cd;
        undefined field_0x1ce;
        undefined field_0x1cf;
        undefined field_0x1d0;
        undefined field_0x1d1;
        undefined field_0x1d2;
        undefined field_0x1d3;
        undefined field_0x1d4;
        undefined field_0x1d5;
        undefined field_0x1d6;
        undefined field_0x1d7;
        undefined field_0x1d8;
        undefined field_0x1d9;
        undefined field_0x1da;
        undefined field_0x1db;
        undefined field_0x1dc;
        undefined field_0x1dd;
        undefined field_0x1de;
        undefined field_0x1df;
        undefined field_0x1e0;
        undefined field_0x1e1;
        undefined field_0x1e2;
        undefined field_0x1e3;
        undefined field_0x1e4;
        undefined field_0x1e5;
        undefined field_0x1e6;
        undefined field_0x1e7;
        undefined field_0x1e8;
        undefined field_0x1e9;
        undefined field_0x1ea;
        undefined field_0x1eb;
        undefined field_0x1ec;
        undefined field_0x1ed;
        undefined field_0x1ee;
        undefined field_0x1ef;
        undefined field_0x1f0;
        undefined field_0x1f1;
        undefined field_0x1f2;
        undefined field_0x1f3;
        undefined field_0x1f4;
        undefined field_0x1f5;
        undefined field_0x1f6;
        undefined field_0x1f7;
        undefined field_0x1f8;
        undefined field_0x1f9;
        undefined field_0x1fa;
        undefined field_0x1fb;
        undefined field_0x1fc;
        undefined field_0x1fd;
        undefined field_0x1fe;
        undefined field_0x1ff;
        undefined field_0x200;
        undefined field_0x201;
        undefined field_0x202;
        undefined field_0x203;
        undefined field_0x204;
        undefined field_0x205;
        undefined field_0x206;
        undefined field_0x207;
        undefined field_0x208;
        undefined field_0x209;
        undefined field_0x20a;
        undefined field_0x20b;
        undefined field_0x20c;
        undefined field_0x20d;
        undefined field_0x20e;
        undefined field_0x20f;
        undefined field_0x210;
        undefined field_0x211;
        undefined field_0x212;
        undefined field_0x213;
        undefined field_0x214;
        undefined field_0x215;
        undefined field_0x216;
        undefined field_0x217;
        undefined field_0x218;
        undefined field_0x219;
        undefined field_0x21a;
        undefined field_0x21b;
        undefined field_0x21c;
        undefined field_0x21d;
        undefined field_0x21e;
        undefined field_0x21f;
        undefined field_0x220;
        undefined field_0x221;
        undefined field_0x222;
        undefined field_0x223;
        undefined field_0x224;
        undefined field_0x225;
        undefined field_0x226;
        undefined field_0x227;
        undefined field_0x228;
        undefined field_0x229;
        undefined field_0x22a;
        undefined field_0x22b;
        undefined field_0x22c;
        undefined field_0x22d;
        undefined field_0x22e;
        undefined field_0x22f;
        undefined field_0x230;
        undefined field_0x231;
        undefined field_0x232;
        undefined field_0x233;
        undefined field_0x234;
        undefined field_0x235;
        undefined field_0x236;
        undefined field_0x237;
        undefined field_0x238;
        undefined field_0x239;
        undefined field_0x23a;
        undefined field_0x23b;
        undefined field_0x23c;
        undefined field_0x23d;
        undefined field_0x23e;
        undefined field_0x23f;
        undefined field_0x240;
        undefined field_0x241;
        undefined field_0x242;
        undefined field_0x243;
        undefined field_0x244;
        undefined field_0x245;
        undefined field_0x246;
        undefined field_0x247;
        undefined field_0x248;
        undefined field_0x249;
        undefined field_0x24a;
        undefined field_0x24b;
        undefined field_0x24c;
        undefined field_0x24d;
        undefined field_0x24e;
        undefined field_0x24f;
        undefined field_0x250;
        undefined field_0x251;
        undefined field_0x252;
        undefined field_0x253;
        undefined field_0x254;
        undefined field_0x255;
        undefined field_0x256;
        undefined field_0x257;
        undefined field_0x258;
        undefined field_0x259;
        undefined field_0x25a;
        undefined field_0x25b;
        undefined field_0x25c;
        undefined field_0x25d;
        undefined field_0x25e;
        undefined field_0x25f;
        undefined field_0x260;
        undefined field_0x261;
        undefined field_0x262;
        undefined field_0x263;
        undefined field_0x264;
        undefined field_0x265;
        undefined field_0x266;
        undefined field_0x267;
        undefined field_0x268;
        undefined field_0x269;
        undefined field_0x26a;
        undefined field_0x26b;
        undefined field_0x26c;
        undefined field_0x26d;
        undefined field_0x26e;
        undefined field_0x26f;
        undefined field_0x270;
        undefined field_0x271;
        undefined field_0x272;
        undefined field_0x273;
        undefined field_0x274;
        undefined field_0x275;
        undefined field_0x276;
        undefined field_0x277;
        undefined field_0x278;
        undefined field_0x279;
        undefined field_0x27a;
        undefined field_0x27b;
        undefined field_0x27c;
        undefined field_0x27d;
        undefined field_0x27e;
        undefined field_0x27f;
        undefined field_0x280;
        undefined field_0x281;
        undefined field_0x282;
        undefined field_0x283;
        undefined field_0x284;
        undefined field_0x285;
        undefined field_0x286;
        undefined field_0x287;
        undefined field_0x288;
        undefined field_0x289;
        undefined field_0x28a;
        undefined field_0x28b;
        undefined field_0x28c;
        undefined field_0x28d;
        undefined field_0x28e;
        undefined field_0x28f;
        undefined field_0x290;
        undefined field_0x291;
        undefined field_0x292;
        undefined field_0x293;
        undefined field_0x294;
        undefined field_0x295;
        undefined field_0x296;
        undefined field_0x297;
        undefined field_0x298;
        undefined field_0x299;
        undefined field_0x29a;
        undefined field_0x29b;
        undefined field_0x29c;
        undefined field_0x29d;
        undefined field_0x29e;
        undefined field_0x29f;
        undefined field_0x2a0;
        undefined field_0x2a1;
        undefined field_0x2a2;
        undefined field_0x2a3;
        undefined field_0x2a4;
        undefined field_0x2a5;
        undefined field_0x2a6;
        undefined field_0x2a7;
        undefined field_0x2a8;
        undefined field_0x2a9;
        undefined field_0x2aa;
        undefined field_0x2ab;
        undefined field_0x2ac;
        undefined field_0x2ad;
        undefined field_0x2ae;
        undefined field_0x2af;
        undefined field_0x2b0;
        undefined field_0x2b1;
        undefined field_0x2b2;
        undefined field_0x2b3;
        undefined field_0x2b4;
        undefined field_0x2b5;
        undefined field_0x2b6;
        undefined field_0x2b7;
        undefined field_0x2b8;
        undefined field_0x2b9;
        undefined field_0x2ba;
        undefined field_0x2bb;
        undefined field_0x2bc;
        undefined field_0x2bd;
        undefined field_0x2be;
        undefined field_0x2bf;
        undefined field_0x2c0;
        undefined field_0x2c1;
        undefined field_0x2c2;
        undefined field_0x2c3;
        undefined field_0x2c4;
        undefined field_0x2c5;
        undefined field_0x2c6;
        undefined field_0x2c7;
        undefined field_0x2c8;
        undefined field_0x2c9;
        undefined field_0x2ca;
        undefined field_0x2cb;
        undefined field_0x2cc;
        undefined field_0x2cd;
        undefined field_0x2ce;
        undefined field_0x2cf;
        undefined field_0x2d0;
        undefined field_0x2d1;
        undefined field_0x2d2;
        undefined field_0x2d3;
        undefined field_0x2d4;
        undefined field_0x2d5;
        undefined field_0x2d6;
        undefined field_0x2d7;
        undefined field_0x2d8;
        undefined field_0x2d9;
        undefined field_0x2da;
        undefined field_0x2db;
        undefined field_0x2dc;
        undefined field_0x2dd;
        undefined field_0x2de;
        undefined field_0x2df;
        undefined field_0x2e0;
        undefined field_0x2e1;
        undefined field_0x2e2;
        undefined field_0x2e3;
        undefined field_0x2e4;
        undefined field_0x2e5;
        undefined field_0x2e6;
        undefined field_0x2e7;
        undefined field_0x2e8;
        undefined field_0x2e9;
        undefined field_0x2ea;
        undefined field_0x2eb;
        undefined field_0x2ec;
        undefined field_0x2ed;
        undefined field_0x2ee;
        undefined field_0x2ef;
        undefined field_0x2f0;
        undefined field_0x2f1;
        undefined field_0x2f2;
        undefined field_0x2f3;
        undefined field_0x2f4;
        undefined field_0x2f5;
        undefined field_0x2f6;
        undefined field_0x2f7;
        undefined field_0x2f8;
        undefined field_0x2f9;
        undefined field_0x2fa;
        undefined field_0x2fb;
        undefined field_0x2fc;
        undefined field_0x2fd;
        undefined field_0x2fe;
        undefined field_0x2ff;
        undefined field_0x300;
        undefined field_0x301;
        undefined field_0x302;
        undefined field_0x303;
        undefined field_0x304;
        undefined field_0x305;
        undefined field_0x306;
        undefined field_0x307;
        undefined field_0x308;
        undefined field_0x309;
        undefined field_0x30a;
        undefined field_0x30b;
        undefined field_0x30c;
        undefined field_0x30d;
        undefined field_0x30e;
        undefined field_0x30f;
        undefined field_0x310;
        undefined field_0x311;
        undefined field_0x312;
        undefined field_0x313;
        undefined field_0x314;
        undefined field_0x315;
        undefined field_0x316;
        undefined field_0x317;
        undefined field_0x318;
        undefined field_0x319;
        undefined field_0x31a;
        undefined field_0x31b;
        undefined field_0x31c;
        undefined field_0x31d;
        undefined field_0x31e;
        undefined field_0x31f;
        undefined field_0x320;
        undefined field_0x321;
        undefined field_0x322;
        undefined field_0x323;
        undefined field_0x324;
        undefined field_0x325;
        undefined field_0x326;
        undefined field_0x327;
        undefined field_0x328;
        undefined field_0x329;
        undefined field_0x32a;
        undefined field_0x32b;
        undefined field_0x32c;
        undefined field_0x32d;
        undefined field_0x32e;
        undefined field_0x32f;
        undefined field_0x330;
        undefined field_0x331;
        undefined field_0x332;
        undefined field_0x333;
        undefined field_0x334;
        undefined field_0x335;
        undefined field_0x336;
        undefined field_0x337;
        undefined field_0x338;
        undefined field_0x339;
        undefined field_0x33a;
        undefined field_0x33b;
        undefined field_0x33c;
        undefined field_0x33d;
        undefined field_0x33e;
        undefined field_0x33f;
        undefined field_0x340;
        undefined field_0x341;
        undefined field_0x342;
        undefined field_0x343;
        undefined field_0x344;
        undefined field_0x345;
        undefined field_0x346;
        undefined field_0x347;
        undefined field_0x348;
        undefined field_0x349;
        undefined field_0x34a;
        undefined field_0x34b;
        undefined field_0x34c;
        undefined field_0x34d;
        undefined field_0x34e;
        undefined field_0x34f;
        undefined field_0x350;
        undefined field_0x351;
        undefined field_0x352;
        undefined field_0x353;
        undefined field_0x354;
        undefined field_0x355;
        undefined field_0x356;
        undefined field_0x357;
        undefined field_0x358;
        undefined field_0x359;
        undefined field_0x35a;
        undefined field_0x35b;
        undefined field_0x35c;
        undefined field_0x35d;
        undefined field_0x35e;
        undefined field_0x35f;
        undefined field_0x360;
        undefined field_0x361;
        undefined field_0x362;
        undefined field_0x363;
        undefined field_0x364;
        undefined field_0x365;
        undefined field_0x366;
        undefined field_0x367;
        undefined field_0x368;
        undefined field_0x369;
        undefined field_0x36a;
        undefined field_0x36b;
        undefined field_0x36c;
        undefined field_0x36d;
        undefined field_0x36e;
        undefined field_0x36f;
        undefined field_0x370;
        undefined field_0x371;
        undefined field_0x372;
        undefined field_0x373;
        undefined field_0x374;
        undefined field_0x375;
        undefined field_0x376;
        undefined field_0x377;
        undefined field_0x378;
        undefined field_0x379;
        undefined field_0x37a;
        undefined field_0x37b;
        undefined field_0x37c;
        undefined field_0x37d;
        undefined field_0x37e;
        undefined field_0x37f;
        undefined field_0x380;
        undefined field_0x381;
        undefined field_0x382;
        undefined field_0x383;
        undefined field_0x384;
        undefined field_0x385;
        undefined field_0x386;
        undefined field_0x387;
        undefined field_0x388;
        undefined field_0x389;
        undefined field_0x38a;
        undefined field_0x38b;
        undefined field_0x38c;
        undefined field_0x38d;
        undefined field_0x38e;
        undefined field_0x38f;
        undefined field_0x390;
        undefined field_0x391;
        undefined field_0x392;
        undefined field_0x393;
        undefined field_0x394;
        undefined field_0x395;
        undefined field_0x396;
        undefined field_0x397;
        undefined field_0x398;
        undefined field_0x399;
        undefined field_0x39a;
        undefined field_0x39b;
        undefined field_0x39c;
        undefined field_0x39d;
        undefined field_0x39e;
        undefined field_0x39f;
        undefined field_0x3a0;
        undefined field_0x3a1;
        undefined field_0x3a2;
        undefined field_0x3a3;
        undefined field_0x3a4;
        undefined field_0x3a5;
        undefined field_0x3a6;
        undefined field_0x3a7;
        undefined field_0x3a8;
        undefined field_0x3a9;
        undefined field_0x3aa;
        undefined field_0x3ab;
        undefined field_0x3ac;
        undefined field_0x3ad;
        undefined field_0x3ae;
        undefined field_0x3af;
        undefined field_0x3b0;
        undefined field_0x3b1;
        undefined field_0x3b2;
        undefined field_0x3b3;
        undefined field_0x3b4;
        undefined field_0x3b5;
        undefined field_0x3b6;
        undefined field_0x3b7;
        undefined field_0x3b8;
        undefined field_0x3b9;
        undefined field_0x3ba;
        undefined field_0x3bb;
        undefined field_0x3bc;
        undefined field_0x3bd;
        undefined field_0x3be;
        undefined field_0x3bf;
        undefined field_0x3c0;
        undefined field_0x3c1;
        undefined field_0x3c2;
        undefined field_0x3c3;
        undefined field_0x3c4;
        undefined field_0x3c5;
        undefined field_0x3c6;
        undefined field_0x3c7;
        undefined field_0x3c8;
        undefined field_0x3c9;
        undefined field_0x3ca;
        undefined field_0x3cb;
        undefined field_0x3cc;
        undefined field_0x3cd;
        undefined field_0x3ce;
        undefined field_0x3cf;
        undefined field_0x3d0;
        undefined field_0x3d1;
        undefined field_0x3d2;
        undefined field_0x3d3;
        undefined field_0x3d4;
        undefined field_0x3d5;
        undefined field_0x3d6;
        undefined field_0x3d7;
        undefined field_0x3d8;
        undefined field_0x3d9;
        undefined field_0x3da;
        undefined field_0x3db;
        undefined field_0x3dc;
        undefined field_0x3dd;
        undefined field_0x3de;
        undefined field_0x3df;
        undefined field_0x3e0;
        undefined field_0x3e1;
        undefined field_0x3e2;
        undefined field_0x3e3;
        undefined field_0x3e4;
        undefined field_0x3e5;
        undefined field_0x3e6;
        undefined field_0x3e7;
        undefined field_0x3e8;
        undefined field_0x3e9;
        undefined field_0x3ea;
        undefined field_0x3eb;
        undefined field_0x3ec;
        undefined field_0x3ed;
        undefined field_0x3ee;
        undefined field_0x3ef;
        undefined field_0x3f0;
        undefined field_0x3f1;
        undefined field_0x3f2;
        undefined field_0x3f3;
        undefined field_0x3f4;
        undefined field_0x3f5;
        undefined field_0x3f6;
        undefined field_0x3f7;
        undefined field_0x3f8;
        undefined field_0x3f9;
        undefined field_0x3fa;
        undefined field_0x3fb;
        undefined field_0x3fc;
        undefined field_0x3fd;
        undefined field_0x3fe;
        undefined field_0x3ff;
        undefined field_0x400;
        undefined field_0x401;
        undefined field_0x402;
        undefined field_0x403;
        undefined field_0x404;
        undefined field_0x405;
        undefined field_0x406;
        undefined field_0x407;
        undefined field_0x408;
        undefined field_0x409;
        undefined field_0x40a;
        undefined field_0x40b;
        undefined field_0x40c;
        undefined field_0x40d;
        undefined field_0x40e;
        undefined field_0x40f;
        undefined field_0x410;
        undefined field_0x411;
        undefined field_0x412;
        undefined field_0x413;
        undefined field_0x414;
        undefined field_0x415;
        undefined field_0x416;
        undefined field_0x417;
        undefined field_0x418;
        undefined field_0x419;
        undefined field_0x41a;
        undefined field_0x41b;
        undefined field_0x41c;
        undefined field_0x41d;
        undefined field_0x41e;
        undefined field_0x41f;
        undefined field_0x420;
        undefined field_0x421;
        undefined field_0x422;
        undefined field_0x423;
        undefined field_0x424;
        undefined field_0x425;
        undefined field_0x426;
        undefined field_0x427;
        undefined field_0x428;
        undefined field_0x429;
        undefined field_0x42a;
        undefined field_0x42b;
        undefined field_0x42c;
        undefined field_0x42d;
        undefined field_0x42e;
        undefined field_0x42f;
        undefined field_0x430;
        undefined field_0x431;
        undefined field_0x432;
        undefined field_0x433;
        undefined field_0x434;
        undefined field_0x435;
        undefined field_0x436;
        undefined field_0x437;
        undefined field_0x438;
        undefined field_0x439;
        undefined field_0x43a;
        undefined field_0x43b;
        undefined field_0x43c;
        undefined field_0x43d;
        undefined field_0x43e;
        undefined field_0x43f;
        undefined field_0x440;
        undefined field_0x441;
        undefined field_0x442;
        undefined field_0x443;
        undefined field_0x444;
        undefined field_0x445;
        undefined field_0x446;
        undefined field_0x447;
        undefined field_0x448;
        undefined field_0x449;
        undefined field_0x44a;
        undefined field_0x44b;
        undefined field_0x44c;
        undefined field_0x44d;
        undefined field_0x44e;
        undefined field_0x44f;
        undefined field_0x450;
        undefined field_0x451;
        undefined field_0x452;
        undefined field_0x453;
        undefined field_0x454;
        undefined field_0x455;
        undefined field_0x456;
        undefined field_0x457;
        undefined field_0x458;
        undefined field_0x459;
        undefined field_0x45a;
        undefined field_0x45b;
        undefined field_0x45c;
        undefined field_0x45d;
        undefined field_0x45e;
        undefined field_0x45f;
        undefined field_0x460;
        undefined field_0x461;
        undefined field_0x462;
        undefined field_0x463;
        undefined field_0x464;
        undefined field_0x465;
        undefined field_0x466;
        undefined field_0x467;
        undefined field_0x468;
        undefined field_0x469;
        undefined field_0x46a;
        undefined field_0x46b;
        undefined field_0x46c;
        undefined field_0x46d;
        undefined field_0x46e;
        undefined field_0x46f;
        undefined field_0x470;
        undefined field_0x471;
        undefined field_0x472;
        undefined field_0x473;
        undefined field_0x474;
        undefined field_0x475;
        undefined field_0x476;
        undefined field_0x477;
        undefined field_0x478;
        undefined field_0x479;
        undefined field_0x47a;
        undefined field_0x47b;
        undefined field_0x47c;
        undefined field_0x47d;
        undefined field_0x47e;
        undefined field_0x47f;
        undefined field_0x480;
        undefined field_0x481;
        undefined field_0x482;
        undefined field_0x483;
        undefined field_0x484;
        undefined field_0x485;
        undefined field_0x486;
        undefined field_0x487;
        undefined field_0x488;
        undefined field_0x489;
        undefined field_0x48a;
        undefined field_0x48b;
        undefined field_0x48c;
        undefined field_0x48d;
        undefined field_0x48e;
        undefined field_0x48f;
        undefined field_0x490;
        undefined field_0x491;
        undefined field_0x492;
        undefined field_0x493;
        undefined field_0x494;
        undefined field_0x495;
        undefined field_0x496;
        undefined field_0x497;
        undefined field_0x498;
        undefined field_0x499;
        undefined field_0x49a;
        undefined field_0x49b;
        undefined field_0x49c;
        undefined field_0x49d;
        undefined field_0x49e;
        undefined field_0x49f;
        undefined field_0x4a0;
        undefined field_0x4a1;
        undefined field_0x4a2;
        undefined field_0x4a3;
        undefined field_0x4a4;
        undefined field_0x4a5;
        undefined field_0x4a6;
        undefined field_0x4a7;
        undefined field_0x4a8;
        undefined field_0x4a9;
        undefined field_0x4aa;
        undefined field_0x4ab;
        undefined field_0x4ac;
        undefined field_0x4ad;
        undefined field_0x4ae;
        undefined field_0x4af;
        undefined field_0x4b0;
        undefined field_0x4b1;
        undefined field_0x4b2;
        undefined field_0x4b3;
        undefined field_0x4b4;
        undefined field_0x4b5;
        undefined field_0x4b6;
        undefined field_0x4b7;
        undefined field_0x4b8;
        undefined field_0x4b9;
        undefined field_0x4ba;
        undefined field_0x4bb;
        undefined field_0x4bc;
        undefined field_0x4bd;
        undefined field_0x4be;
        undefined field_0x4bf;
        undefined field_0x4c0;
        undefined field_0x4c1;
        undefined field_0x4c2;
        undefined field_0x4c3;
        undefined field_0x4c4;
        undefined field_0x4c5;
        undefined field_0x4c6;
        undefined field_0x4c7;
        undefined field_0x4c8;
        undefined field_0x4c9;
        undefined field_0x4ca;
        undefined field_0x4cb;
        undefined field_0x4cc;
        undefined field_0x4cd;
        undefined field_0x4ce;
        undefined field_0x4cf;
        undefined field_0x4d0;
        undefined field_0x4d1;
        undefined field_0x4d2;
        undefined field_0x4d3;
        undefined field_0x4d4;
        undefined field_0x4d5;
        undefined field_0x4d6;
        undefined field_0x4d7;
        undefined field_0x4d8;
        undefined field_0x4d9;
        undefined field_0x4da;
        undefined field_0x4db;
        undefined field_0x4dc;
        undefined field_0x4dd;
        undefined field_0x4de;
        undefined field_0x4df;
        undefined field_0x4e0;
        undefined field_0x4e1;
        undefined field_0x4e2;
        undefined field_0x4e3;
        undefined field_0x4e4;
        undefined field_0x4e5;
        undefined field_0x4e6;
        undefined field_0x4e7;
        undefined field_0x4e8;
        undefined field_0x4e9;
        undefined field_0x4ea;
        undefined field_0x4eb;
        undefined field_0x4ec;
        undefined field_0x4ed;
        undefined field_0x4ee;
        undefined field_0x4ef;
        undefined field_0x4f0;
        undefined field_0x4f1;
        undefined field_0x4f2;
        undefined field_0x4f3;
        undefined field_0x4f4;
        undefined field_0x4f5;
        undefined field_0x4f6;
        undefined field_0x4f7;
        undefined field_0x4f8;
        undefined field_0x4f9;
        undefined field_0x4fa;
        undefined field_0x4fb;
        undefined field_0x4fc;
        undefined field_0x4fd;
        undefined field_0x4fe;
        undefined field_0x4ff;
        undefined field_0x500;
        undefined field_0x501;
        undefined field_0x502;
        undefined field_0x503;
        undefined field_0x504;
        undefined field_0x505;
        undefined field_0x506;
        undefined field_0x507;
        undefined field_0x508;
        undefined field_0x509;
        undefined field_0x50a;
        undefined field_0x50b;
        undefined field_0x50c;
        undefined field_0x50d;
        undefined field_0x50e;
        undefined field_0x50f;
        undefined field_0x510;
        undefined field_0x511;
        undefined field_0x512;
        undefined field_0x513;
        undefined field_0x514;
        undefined field_0x515;
        undefined field_0x516;
        undefined field_0x517;
        undefined field_0x518;
        undefined field_0x519;
        undefined field_0x51a;
        undefined field_0x51b;
        undefined field_0x51c;
        undefined field_0x51d;
        undefined field_0x51e;
        undefined field_0x51f;
        undefined field_0x520;
        undefined field_0x521;
        undefined field_0x522;
        undefined field_0x523;
        undefined field_0x524;
        undefined field_0x525;
        undefined field_0x526;
        undefined field_0x527;
        undefined field_0x528;
        undefined field_0x529;
        undefined field_0x52a;
        undefined field_0x52b;
        undefined field_0x52c;
        undefined field_0x52d;
        undefined field_0x52e;
        undefined field_0x52f;
        undefined field_0x530;
        undefined field_0x531;
        undefined field_0x532;
        undefined field_0x533;
        undefined field_0x534;
        undefined field_0x535;
        undefined field_0x536;
        undefined field_0x537;
        undefined field_0x538;
        undefined field_0x539;
        undefined field_0x53a;
        undefined field_0x53b;
        undefined field_0x53c;
        undefined field_0x53d;
        undefined field_0x53e;
        undefined field_0x53f;
        undefined field_0x540;
        undefined field_0x541;
        undefined field_0x542;
        undefined field_0x543;
        undefined field_0x544;
        undefined field_0x545;
        undefined field_0x546;
        undefined field_0x547;
        undefined field_0x548;
        undefined field_0x549;
        undefined field_0x54a;
        undefined field_0x54b;
        undefined field_0x54c;
        undefined field_0x54d;
        undefined field_0x54e;
        undefined field_0x54f;
        undefined field_0x550;
        undefined field_0x551;
        undefined field_0x552;
        undefined field_0x553;
        undefined field_0x554;
        undefined field_0x555;
        undefined field_0x556;
        undefined field_0x557;
        undefined field_0x558;
        undefined field_0x559;
        undefined field_0x55a;
        undefined field_0x55b;
        undefined field_0x55c;
        undefined field_0x55d;
        undefined field_0x55e;
        undefined field_0x55f;
        undefined field_0x560;
        undefined field_0x561;
        undefined field_0x562;
        undefined field_0x563;
        undefined field_0x564;
        undefined field_0x565;
        undefined field_0x566;
        undefined field_0x567;
        undefined field_0x568;
        undefined field_0x569;
        undefined field_0x56a;
        undefined field_0x56b;
        undefined field_0x56c;
        undefined field_0x56d;
        undefined field_0x56e;
        undefined field_0x56f;
        undefined field_0x570;
        undefined field_0x571;
        undefined field_0x572;
        undefined field_0x573;
        undefined field_0x574;
        undefined field_0x575;
        undefined field_0x576;
        undefined field_0x577;
        undefined field_0x578;
        undefined field_0x579;
        undefined field_0x57a;
        undefined field_0x57b;
        undefined field_0x57c;
        undefined field_0x57d;
        undefined field_0x57e;
        undefined field_0x57f;
        undefined field_0x580;
        undefined field_0x581;
        undefined field_0x582;
        undefined field_0x583;
        undefined field_0x584;
        undefined field_0x585;
        undefined field_0x586;
        undefined field_0x587;
        undefined field_0x588;
        undefined field_0x589;
        undefined field_0x58a;
        undefined field_0x58b;
        undefined field_0x58c;
        undefined field_0x58d;
        undefined field_0x58e;
        undefined field_0x58f;
        undefined field_0x590;
        undefined field_0x591;
        undefined field_0x592;
        undefined field_0x593;
        undefined field_0x594;
        undefined field_0x595;
        undefined field_0x596;
        undefined field_0x597;
        undefined field_0x598;
        undefined field_0x599;
        undefined field_0x59a;
        undefined field_0x59b;
        undefined field_0x59c;
        undefined field_0x59d;
        undefined field_0x59e;
        undefined field_0x59f;
        undefined field_0x5a0;
        undefined field_0x5a1;
        undefined field_0x5a2;
        undefined field_0x5a3;
        undefined field_0x5a4;
        undefined field_0x5a5;
        undefined field_0x5a6;
        undefined field_0x5a7;
        undefined field_0x5a8;
        undefined field_0x5a9;
        undefined field_0x5aa;
        undefined field_0x5ab;
        undefined field_0x5ac;
        undefined field_0x5ad;
        undefined field_0x5ae;
        undefined field_0x5af;
        undefined field_0x5b0;
        undefined field_0x5b1;
        undefined field_0x5b2;
        undefined field_0x5b3;
        undefined field_0x5b4;
        undefined field_0x5b5;
        undefined field_0x5b6;
        undefined field_0x5b7;
        undefined field_0x5b8;
        undefined field_0x5b9;
        undefined field_0x5ba;
        undefined field_0x5bb;
        undefined field_0x5bc;
        undefined field_0x5bd;
        undefined field_0x5be;
        undefined field_0x5bf;
        undefined field_0x5c0;
        undefined field_0x5c1;
        undefined field_0x5c2;
        undefined field_0x5c3;
        undefined field_0x5c4;
        undefined field_0x5c5;
        undefined field_0x5c6;
        undefined field_0x5c7;
        undefined field_0x5c8;
        undefined field_0x5c9;
        undefined field_0x5ca;
        undefined field_0x5cb;
        undefined field_0x5cc;
        undefined field_0x5cd;
        undefined field_0x5ce;
        undefined field_0x5cf;
        undefined field_0x5d0;
        undefined field_0x5d1;
        undefined field_0x5d2;
        undefined field_0x5d3;
        undefined field_0x5d4;
        undefined field_0x5d5;
        undefined field_0x5d6;
        undefined field_0x5d7;
        undefined field_0x5d8;
        undefined field_0x5d9;
        undefined field_0x5da;
        undefined field_0x5db;
        undefined field_0x5dc;
        undefined field_0x5dd;
        undefined field_0x5de;
        undefined field_0x5df;
        undefined field_0x5e0;
        undefined field_0x5e1;
        undefined field_0x5e2;
        undefined field_0x5e3;
        undefined field_0x5e4;
        undefined field_0x5e5;
        undefined field_0x5e6;
        undefined field_0x5e7;
        undefined field_0x5e8;
        undefined field_0x5e9;
        undefined field_0x5ea;
        undefined field_0x5eb;
        undefined field_0x5ec;
        undefined field_0x5ed;
        undefined field_0x5ee;
        undefined field_0x5ef;
        undefined field_0x5f0;
        undefined field_0x5f1;
        undefined field_0x5f2;
        undefined field_0x5f3;
        undefined field_0x5f4;
        undefined field_0x5f5;
        undefined field_0x5f6;
        undefined field_0x5f7;
        undefined field_0x5f8;
        undefined field_0x5f9;
        undefined field_0x5fa;
        undefined field_0x5fb;
        undefined field_0x5fc;
        undefined field_0x5fd;
        undefined field_0x5fe;
        undefined field_0x5ff;
        undefined field_0x600;
        undefined field_0x601;
        undefined field_0x602;
        undefined field_0x603;
        undefined field_0x604;
        undefined field_0x605;
        undefined field_0x606;
        undefined field_0x607;
        undefined field_0x608;
        undefined field_0x609;
        undefined field_0x60a;
        undefined field_0x60b;
        undefined field_0x60c;
        undefined field_0x60d;
        undefined field_0x60e;
        undefined field_0x60f;
        undefined field_0x610;
        undefined field_0x611;
        undefined field_0x612;
        undefined field_0x613;
        undefined field_0x614;
        undefined field_0x615;
        undefined field_0x616;
        undefined field_0x617;
        undefined field_0x618;
        undefined field_0x619;
        undefined field_0x61a;
        undefined field_0x61b;
        undefined field_0x61c;
        undefined field_0x61d;
        undefined field_0x61e;
        undefined field_0x61f;
        undefined field_0x620;
        undefined field_0x621;
        undefined field_0x622;
        undefined field_0x623;
        undefined field_0x624;
        undefined field_0x625;
        undefined field_0x626;
        undefined field_0x627;
        undefined field_0x628;
        undefined field_0x629;
        undefined field_0x62a;
        undefined field_0x62b;
        undefined field_0x62c;
        undefined field_0x62d;
        undefined field_0x62e;
        undefined field_0x62f;
        undefined field_0x630;
        undefined field_0x631;
        undefined field_0x632;
        undefined field_0x633;
        undefined field_0x634;
        undefined field_0x635;
        undefined field_0x636;
        undefined field_0x637;
        undefined field_0x638;
        undefined field_0x639;
        undefined field_0x63a;
        undefined field_0x63b;
        undefined field_0x63c;
        undefined field_0x63d;
        undefined field_0x63e;
        undefined field_0x63f;
        undefined field_0x640;
        undefined field_0x641;
        undefined field_0x642;
        undefined field_0x643;
        undefined field_0x644;
        undefined field_0x645;
        undefined field_0x646;
        undefined field_0x647;
        undefined field_0x648;
        undefined field_0x649;
        undefined field_0x64a;
        undefined field_0x64b;
        undefined field_0x64c;
        undefined field_0x64d;
        undefined field_0x64e;
        undefined field_0x64f;
        undefined field_0x650;
        undefined field_0x651;
        undefined field_0x652;
        undefined field_0x653;
        undefined field_0x654;
        undefined field_0x655;
        undefined field_0x656;
        undefined field_0x657;
        undefined field_0x658;
        undefined field_0x659;
        undefined field_0x65a;
        undefined field_0x65b;
        undefined field_0x65c;
        undefined field_0x65d;
        undefined field_0x65e;
        undefined field_0x65f;
        undefined field_0x660;
        undefined field_0x661;
        undefined field_0x662;
        undefined field_0x663;
        undefined field_0x664;
        undefined field_0x665;
        undefined field_0x666;
        undefined field_0x667;
        undefined field_0x668;
        undefined field_0x669;
        undefined field_0x66a;
        undefined field_0x66b;
        undefined field_0x66c;
        undefined field_0x66d;
        undefined field_0x66e;
        undefined field_0x66f;
        undefined field_0x670;
        undefined field_0x671;
        undefined field_0x672;
        undefined field_0x673;
        undefined field_0x674;
        undefined field_0x675;
        undefined field_0x676;
        undefined field_0x677;
        undefined field_0x678;
        undefined field_0x679;
        undefined field_0x67a;
        undefined field_0x67b;
        undefined field_0x67c;
        undefined field_0x67d;
        undefined field_0x67e;
        undefined field_0x67f;
        undefined field_0x680;
        undefined field_0x681;
        undefined field_0x682;
        undefined field_0x683;
        undefined field_0x684;
        undefined field_0x685;
        undefined field_0x686;
        undefined field_0x687;
        undefined field_0x688;
        undefined field_0x689;
        undefined field_0x68a;
        undefined field_0x68b;
        undefined field_0x68c;
        undefined field_0x68d;
        undefined field_0x68e;
        undefined field_0x68f;
        undefined field_0x690;
        undefined field_0x691;
        undefined field_0x692;
        undefined field_0x693;
        undefined field_0x694;
        undefined field_0x695;
        undefined field_0x696;
        undefined field_0x697;
        undefined field_0x698;
        undefined field_0x699;
        undefined field_0x69a;
        undefined field_0x69b;
        undefined field_0x69c;
        undefined field_0x69d;
        undefined field_0x69e;
        undefined field_0x69f;
        undefined field_0x6a0;
        undefined field_0x6a1;
        undefined field_0x6a2;
        undefined field_0x6a3;
        undefined field_0x6a4;
        undefined field_0x6a5;
        undefined field_0x6a6;
        undefined field_0x6a7;
        undefined field_0x6a8;
        undefined field_0x6a9;
        undefined field_0x6aa;
        undefined field_0x6ab;
        undefined field_0x6ac;
        undefined field_0x6ad;
        undefined field_0x6ae;
        undefined field_0x6af;
        undefined field_0x6b0;
        undefined field_0x6b1;
        undefined field_0x6b2;
        undefined field_0x6b3;
        undefined field_0x6b4;
        undefined field_0x6b5;
        undefined field_0x6b6;
        undefined field_0x6b7;
        undefined field_0x6b8;
        undefined field_0x6b9;
        undefined field_0x6ba;
        undefined field_0x6bb;
        undefined field_0x6bc;
        undefined field_0x6bd;
        undefined field_0x6be;
        undefined field_0x6bf;
        undefined field_0x6c0;
        undefined field_0x6c1;
        undefined field_0x6c2;
        undefined field_0x6c3;
        undefined field_0x6c4;
        undefined field_0x6c5;
        undefined field_0x6c6;
        undefined field_0x6c7;
        undefined field_0x6c8;
        undefined field_0x6c9;
        undefined field_0x6ca;
        undefined field_0x6cb;
        undefined field_0x6cc;
        undefined field_0x6cd;
        undefined field_0x6ce;
        undefined field_0x6cf;
        undefined field_0x6d0;
        undefined field_0x6d1;
        undefined field_0x6d2;
        undefined field_0x6d3;
        undefined field_0x6d4;
        undefined field_0x6d5;
        undefined field_0x6d6;
        undefined field_0x6d7;
        undefined field_0x6d8;
        undefined field_0x6d9;
        undefined field_0x6da;
        undefined field_0x6db;
        undefined field_0x6dc;
        undefined field_0x6dd;
        undefined field_0x6de;
        undefined field_0x6df;
        undefined field_0x6e0;
        undefined field_0x6e1;
        undefined field_0x6e2;
        undefined field_0x6e3;
        undefined field_0x6e4;
        undefined field_0x6e5;
        undefined field_0x6e6;
        undefined field_0x6e7;
        undefined field_0x6e8;
        undefined field_0x6e9;
        undefined field_0x6ea;
        undefined field_0x6eb;
        undefined field_0x6ec;
        undefined field_0x6ed;
        undefined field_0x6ee;
        undefined field_0x6ef;
        undefined field_0x6f0;
        undefined field_0x6f1;
        undefined field_0x6f2;
        undefined field_0x6f3;
        undefined field_0x6f4;
        undefined field_0x6f5;
        undefined field_0x6f6;
        undefined field_0x6f7;
        undefined field_0x6f8;
        undefined field_0x6f9;
        undefined field_0x6fa;
        undefined field_0x6fb;
        undefined field_0x6fc;
        undefined field_0x6fd;
        undefined field_0x6fe;
        undefined field_0x6ff;
        undefined field_0x700;
        undefined field_0x701;
        undefined field_0x702;
        undefined field_0x703;
        undefined field_0x704;
        undefined field_0x705;
        undefined field_0x706;
        undefined field_0x707;
        undefined field_0x708;
        undefined field_0x709;
        undefined field_0x70a;
        undefined field_0x70b;
        undefined field_0x70c;
        undefined field_0x70d;
        undefined field_0x70e;
        undefined field_0x70f;
        undefined field_0x710;
        undefined field_0x711;
        undefined field_0x712;
        undefined field_0x713;
        undefined field_0x714;
        undefined field_0x715;
        undefined field_0x716;
        undefined field_0x717;
        undefined field_0x718;
        undefined field_0x719;
        undefined field_0x71a;
        undefined field_0x71b;
        undefined field_0x71c;
        undefined field_0x71d;
        undefined field_0x71e;
        undefined field_0x71f;
        undefined field_0x720;
        undefined field_0x721;
        undefined field_0x722;
        undefined field_0x723;
        undefined field_0x724;
        undefined field_0x725;
        undefined field_0x726;
        undefined field_0x727;
        undefined field_0x728;
        undefined field_0x729;
        undefined field_0x72a;
        undefined field_0x72b;
        undefined field_0x72c;
        undefined field_0x72d;
        undefined field_0x72e;
        undefined field_0x72f;
        undefined field_0x730;
        undefined field_0x731;
        undefined field_0x732;
        undefined field_0x733;
        undefined field_0x734;
        undefined field_0x735;
        undefined field_0x736;
        undefined field_0x737;
        undefined field_0x738;
        undefined field_0x739;
        undefined field_0x73a;
        undefined field_0x73b;
        undefined field_0x73c;
        undefined field_0x73d;
        undefined field_0x73e;
        undefined field_0x73f;
        undefined field_0x740;
        undefined field_0x741;
        undefined field_0x742;
        undefined field_0x743;
        undefined field_0x744;
        undefined field_0x745;
        undefined field_0x746;
        undefined field_0x747;
        undefined field_0x748;
        undefined field_0x749;
        undefined field_0x74a;
        undefined field_0x74b;
        undefined field_0x74c;
        undefined field_0x74d;
        undefined field_0x74e;
        undefined field_0x74f;
        undefined field_0x750;
        undefined field_0x751;
        undefined field_0x752;
        undefined field_0x753;
        undefined field_0x754;
        undefined field_0x755;
        undefined field_0x756;
        undefined field_0x757;
        undefined field_0x758;
        undefined field_0x759;
        undefined field_0x75a;
        undefined field_0x75b;
        undefined field_0x75c;
        undefined field_0x75d;
        undefined field_0x75e;
        undefined field_0x75f;
        undefined field_0x760;
        undefined field_0x761;
        undefined field_0x762;
        undefined field_0x763;
        undefined field_0x764;
        undefined field_0x765;
        undefined field_0x766;
        undefined field_0x767;
        undefined field_0x768;
        undefined field_0x769;
        undefined field_0x76a;
        undefined field_0x76b;
        undefined field_0x76c;
        undefined field_0x76d;
        undefined field_0x76e;
        undefined field_0x76f;
        undefined field_0x770;
        undefined field_0x771;
        undefined field_0x772;
        undefined field_0x773;
        undefined field_0x774;
        undefined field_0x775;
        undefined field_0x776;
        undefined field_0x777;
        undefined field_0x778;
        undefined field_0x779;
        undefined field_0x77a;
        undefined field_0x77b;
        undefined field_0x77c;
        undefined field_0x77d;
        undefined field_0x77e;
        undefined field_0x77f;
        undefined field_0x780;
        undefined field_0x781;
        undefined field_0x782;
        undefined field_0x783;
        undefined field_0x784;
        undefined field_0x785;
        undefined field_0x786;
        undefined field_0x787;
        undefined field_0x788;
        undefined field_0x789;
        undefined field_0x78a;
        undefined field_0x78b;
        undefined field_0x78c;
        undefined field_0x78d;
        undefined field_0x78e;
        undefined field_0x78f;
        undefined field_0x790;
        undefined field_0x791;
        undefined field_0x792;
        undefined field_0x793;
        undefined field_0x794;
        undefined field_0x795;
        undefined field_0x796;
        undefined field_0x797;
        undefined field_0x798;
        undefined field_0x799;
        undefined field_0x79a;
        undefined field_0x79b;
        undefined field_0x79c;
        undefined field_0x79d;
        undefined field_0x79e;
        undefined field_0x79f;
        undefined field_0x7a0;
        undefined field_0x7a1;
        undefined field_0x7a2;
        undefined field_0x7a3;
        undefined field_0x7a4;
        undefined field_0x7a5;
        undefined field_0x7a6;
        undefined field_0x7a7;
        undefined field_0x7a8;
        undefined field_0x7a9;
        undefined field_0x7aa;
        undefined field_0x7ab;
        undefined field_0x7ac;
        undefined field_0x7ad;
        undefined field_0x7ae;
        undefined field_0x7af;
        undefined field_0x7b0;
        undefined field_0x7b1;
        undefined field_0x7b2;
        undefined field_0x7b3;
        undefined field_0x7b4;
        undefined field_0x7b5;
        undefined field_0x7b6;
        undefined field_0x7b7;
        undefined field_0x7b8;
        undefined field_0x7b9;
        undefined field_0x7ba;
        undefined field_0x7bb;
        undefined field_0x7bc;
        undefined field_0x7bd;
        undefined field_0x7be;
        undefined field_0x7bf;
        undefined field_0x7c0;
        undefined field_0x7c1;
        undefined field_0x7c2;
        undefined field_0x7c3;
        undefined field_0x7c4;
        undefined field_0x7c5;
        undefined field_0x7c6;
        undefined field_0x7c7;
        undefined field_0x7c8;
        undefined field_0x7c9;
        undefined field_0x7ca;
        undefined field_0x7cb;
        undefined field_0x7cc;
        undefined field_0x7cd;
        undefined field_0x7ce;
        undefined field_0x7cf;
        undefined field_0x7d0;
        undefined field_0x7d1;
        undefined field_0x7d2;
        undefined field_0x7d3;
        undefined field_0x7d4;
        undefined field_0x7d5;
        undefined field_0x7d6;
        undefined field_0x7d7;
        undefined field_0x7d8;
        undefined field_0x7d9;
        undefined field_0x7da;
        undefined field_0x7db;
        undefined field_0x7dc;
        undefined field_0x7dd;
        undefined field_0x7de;
        undefined field_0x7df;
        undefined field_0x7e0;
        undefined field_0x7e1;
        undefined field_0x7e2;
        undefined field_0x7e3;
        undefined field_0x7e4;
        undefined field_0x7e5;
        undefined field_0x7e6;
        undefined field_0x7e7;
        undefined field_0x7e8;
        undefined field_0x7e9;
        undefined field_0x7ea;
        undefined field_0x7eb;
        undefined field_0x7ec;
        undefined field_0x7ed;
        undefined field_0x7ee;
        undefined field_0x7ef;
        undefined field_0x7f0;
        undefined field_0x7f1;
        undefined field_0x7f2;
        undefined field_0x7f3;
        undefined field_0x7f4;
        undefined field_0x7f5;
        undefined field_0x7f6;
        undefined field_0x7f7;
        undefined field_0x7f8;
        undefined field_0x7f9;
        undefined field_0x7fa;
        undefined field_0x7fb;
        undefined field_0x7fc;
        undefined field_0x7fd;
        undefined field_0x7fe;
        undefined field_0x7ff;
        undefined field_0x800;
        undefined field_0x801;
        undefined field_0x802;
        undefined field_0x803;
        undefined field_0x804;
        undefined field_0x805;
        undefined field_0x806;
        undefined field_0x807;
        undefined field_0x808;
        undefined field_0x809;
        undefined field_0x80a;
        undefined field_0x80b;
        undefined field_0x80c;
        undefined field_0x80d;
        undefined field_0x80e;
        undefined field_0x80f;
        undefined field_0x810;
        undefined field_0x811;
        undefined field_0x812;
        undefined field_0x813;
        undefined field_0x814;
        undefined field_0x815;
        undefined field_0x816;
        undefined field_0x817;
        undefined field_0x818;
        undefined field_0x819;
        undefined field_0x81a;
        undefined field_0x81b;
        undefined field_0x81c;
        undefined field_0x81d;
        undefined field_0x81e;
        undefined field_0x81f;
        undefined field_0x820;
        undefined field_0x821;
        undefined field_0x822;
        undefined field_0x823;
        undefined field_0x824;
        undefined field_0x825;
        undefined field_0x826;
        undefined field_0x827;
        undefined field_0x828;
        undefined field_0x829;
        undefined field_0x82a;
        undefined field_0x82b;
        undefined field_0x82c;
        undefined field_0x82d;
        undefined field_0x82e;
        undefined field_0x82f;
        undefined field_0x830;
        undefined field_0x831;
        undefined field_0x832;
        undefined field_0x833;
        undefined field_0x834;
        undefined field_0x835;
        undefined field_0x836;
        undefined field_0x837;
        undefined field_0x838;
        undefined field_0x839;
        undefined field_0x83a;
        undefined field_0x83b;
        undefined field_0x83c;
        undefined field_0x83d;
        undefined field_0x83e;
        undefined field_0x83f;
        undefined field_0x840;
        undefined field_0x841;
        undefined field_0x842;
        undefined field_0x843;
        undefined field_0x844;
        undefined field_0x845;
        undefined field_0x846;
        undefined field_0x847;
        undefined field_0x848;
        undefined field_0x849;
        undefined field_0x84a;
        undefined field_0x84b;
        undefined field_0x84c;
        undefined field_0x84d;
        undefined field_0x84e;
        undefined field_0x84f;
        undefined field_0x850;
        undefined field_0x851;
        undefined field_0x852;
        undefined field_0x853;
        undefined field_0x854;
        undefined field_0x855;
        undefined field_0x856;
        undefined field_0x857;
        undefined field_0x858;
        undefined field_0x859;
        undefined field_0x85a;
        undefined field_0x85b;
        undefined field_0x85c;
        undefined field_0x85d;
        undefined field_0x85e;
        undefined field_0x85f;
        undefined field_0x860;
        undefined field_0x861;
        undefined field_0x862;
        undefined field_0x863;
        undefined field_0x864;
        undefined field_0x865;
        undefined field_0x866;
        undefined field_0x867;
        undefined field_0x868;
        undefined field_0x869;
        undefined field_0x86a;
        undefined field_0x86b;
        undefined field_0x86c;
        undefined field_0x86d;
        undefined field_0x86e;
        undefined field_0x86f;
        undefined field_0x870;
        undefined field_0x871;
        undefined field_0x872;
        undefined field_0x873;
        undefined field_0x874;
        undefined field_0x875;
        undefined field_0x876;
        undefined field_0x877;
        undefined field_0x878;
        undefined field_0x879;
        undefined field_0x87a;
        undefined field_0x87b;
        undefined field_0x87c;
        undefined field_0x87d;
        undefined field_0x87e;
        undefined field_0x87f;
        undefined field_0x880;
        undefined field_0x881;
        undefined field_0x882;
        undefined field_0x883;
        BOOL bTriedToInitSocket; /* Created by retype action */
        undefined field_0x888;
        undefined field_0x889;
        undefined field_0x88a;
        undefined field_0x88b;
        undefined field_0x88c;
        undefined field_0x88d;
        undefined field_0x88e;
        undefined field_0x88f;
        undefined field_0x890;
        undefined field_0x891;
        undefined field_0x892;
        undefined field_0x893;
        undefined field_0x894;
        undefined field_0x895;
        undefined field_0x896;
        undefined field_0x897;
        undefined field_0x898;
        undefined field_0x899;
        undefined field_0x89a;
        undefined field_0x89b;
        undefined field_0x89c;
        undefined field_0x89d;
        undefined field_0x89e;
        undefined field_0x89f;
        undefined field_0x8a0;
        undefined field_0x8a1;
        undefined field_0x8a2;
        undefined field_0x8a3;
        undefined field_0x8a4;
        undefined field_0x8a5;
        undefined field_0x8a6;
        undefined field_0x8a7;
        undefined field_0x8a8;
        undefined field_0x8a9;
        undefined field_0x8aa;
        undefined field_0x8ab;
        undefined field_0x8ac;
        undefined field_0x8ad;
        undefined field_0x8ae;
        undefined field_0x8af;
        undefined field_0x8b0;
        undefined field_0x8b1;
        undefined field_0x8b2;
        undefined field_0x8b3;
        undefined field_0x8b4;
        undefined field_0x8b5;
        undefined field_0x8b6;
        undefined field_0x8b7;
        undefined field_0x8b8;
        undefined field_0x8b9;
        undefined field_0x8ba;
        undefined field_0x8bb;
        undefined field_0x8bc;
        undefined field_0x8bd;
        undefined field_0x8be;
        undefined field_0x8bf;
        undefined field_0x8c0;
        undefined field_0x8c1;
        undefined field_0x8c2;
        undefined field_0x8c3;
        undefined field_0x8c4;
        undefined field_0x8c5;
        undefined field_0x8c6;
        undefined field_0x8c7;
        undefined field_0x8c8;
        undefined field_0x8c9;
        undefined field_0x8ca;
        undefined field_0x8cb;
        undefined field_0x8cc;
        undefined field_0x8cd;
        undefined field_0x8ce;
        undefined field_0x8cf;
        undefined field_0x8d0;
        undefined field_0x8d1;
        undefined field_0x8d2;
        undefined field_0x8d3;
        undefined field_0x8d4;
        undefined field_0x8d5;
        undefined field_0x8d6;
        undefined field_0x8d7;
        undefined field_0x8d8;
        undefined field_0x8d9;
        undefined field_0x8da;
        undefined field_0x8db;
        undefined field_0x8dc;
        undefined field_0x8dd;
        undefined field_0x8de;
        undefined field_0x8df;
        undefined field_0x8e0;
        undefined field_0x8e1;
        undefined field_0x8e2;
        undefined field_0x8e3;
        undefined field_0x8e4;
        undefined field_0x8e5;
        undefined field_0x8e6;
        undefined field_0x8e7;
        undefined field_0x8e8;
        undefined field_0x8e9;
        undefined field_0x8ea;
        undefined field_0x8eb;
        undefined field_0x8ec;
        undefined field_0x8ed;
        undefined field_0x8ee;
        undefined field_0x8ef;
        undefined field_0x8f0;
        undefined field_0x8f1;
        undefined field_0x8f2;
        undefined field_0x8f3;
        undefined field_0x8f4;
        undefined field_0x8f5;
        undefined field_0x8f6;
        undefined field_0x8f7;
        undefined field_0x8f8;
        undefined field_0x8f9;
        undefined field_0x8fa;
        undefined field_0x8fb;
        undefined field_0x8fc;
        undefined field_0x8fd;
        undefined field_0x8fe;
        undefined field_0x8ff;
        undefined field_0x900;
        undefined field_0x901;
        undefined field_0x902;
        undefined field_0x903;
        undefined field_0x904;
        undefined field_0x905;
        undefined field_0x906;
        undefined field_0x907;
        undefined field_0x908;
        undefined field_0x909;
        undefined field_0x90a;
        undefined field_0x90b;
        undefined field_0x90c;
        undefined field_0x90d;
        undefined field_0x90e;
        undefined field_0x90f;
        undefined field_0x910;
        undefined field_0x911;
        undefined field_0x912;
        undefined field_0x913;
        undefined field_0x914;
        undefined field_0x915;
        undefined field_0x916;
        undefined field_0x917;
        undefined field_0x918;
        undefined field_0x919;
        undefined field_0x91a;
        undefined field_0x91b;
        undefined field_0x91c;
        undefined field_0x91d;
        undefined field_0x91e;
        undefined field_0x91f;
        undefined field_0x920;
        undefined field_0x921;
        undefined field_0x922;
        undefined field_0x923;
        undefined field_0x924;
        undefined field_0x925;
        undefined field_0x926;
        undefined field_0x927;
        undefined field_0x928;
        undefined field_0x929;
        undefined field_0x92a;
        undefined field_0x92b;
        undefined field_0x92c;
        undefined field_0x92d;
        undefined field_0x92e;
        undefined field_0x92f;
        undefined field_0x930;
        undefined field_0x931;
        undefined field_0x932;
        undefined field_0x933;
        undefined field_0x934;
        undefined field_0x935;
        undefined field_0x936;
        undefined field_0x937;
        undefined field_0x938;
        undefined field_0x939;
        undefined field_0x93a;
        undefined field_0x93b;
        undefined field_0x93c;
        undefined field_0x93d;
        undefined field_0x93e;
        undefined field_0x93f;
        undefined field_0x940;
        undefined field_0x941;
        undefined field_0x942;
        undefined field_0x943;
        undefined field_0x944;
        undefined field_0x945;
        undefined field_0x946;
        undefined field_0x947;
        undefined field_0x948;
        undefined field_0x949;
        undefined field_0x94a;
        undefined field_0x94b;
        undefined field_0x94c;
        undefined field_0x94d;
        undefined field_0x94e;
        undefined field_0x94f;
        undefined field_0x950;
        undefined field_0x951;
        undefined field_0x952;
        undefined field_0x953;
        undefined field_0x954;
        undefined field_0x955;
        undefined field_0x956;
        undefined field_0x957;
        undefined field_0x958;
        undefined field_0x959;
        undefined field_0x95a;
        undefined field_0x95b;
        undefined field_0x95c;
        undefined field_0x95d;
        undefined field_0x95e;
        undefined field_0x95f;
        undefined field_0x960;
        undefined field_0x961;
        undefined field_0x962;
        undefined field_0x963;
        undefined field_0x964;
        undefined field_0x965;
        undefined field_0x966;
        undefined field_0x967;
        undefined field_0x968;
        undefined field_0x969;
        undefined field_0x96a;
        undefined field_0x96b;
        undefined field_0x96c;
        undefined field_0x96d;
        undefined field_0x96e;
        undefined field_0x96f;
        undefined field_0x970;
        undefined field_0x971;
        undefined field_0x972;
        undefined field_0x973;
        undefined field_0x974;
        undefined field_0x975;
        undefined field_0x976;
        undefined field_0x977;
        undefined field_0x978;
        undefined field_0x979;
        undefined field_0x97a;
        undefined field_0x97b;
        undefined field_0x97c;
        undefined field_0x97d;
        undefined field_0x97e;
        undefined field_0x97f;
        undefined field_0x980;
        undefined field_0x981;
        undefined field_0x982;
        undefined field_0x983;
        undefined field_0x984;
        undefined field_0x985;
        undefined field_0x986;
        undefined field_0x987;
        undefined field_0x988;
        undefined field_0x989;
        undefined field_0x98a;
        undefined field_0x98b;
        undefined field_0x98c;
        undefined field_0x98d;
        undefined field_0x98e;
        undefined field_0x98f;
        undefined field_0x990;
        undefined field_0x991;
        undefined field_0x992;
        undefined field_0x993;
        undefined field_0x994;
        undefined field_0x995;
        undefined field_0x996;
        undefined field_0x997;
        undefined field_0x998;
        undefined field_0x999;
        undefined field_0x99a;
        undefined field_0x99b;
        undefined field_0x99c;
        undefined field_0x99d;
        undefined field_0x99e;
        undefined field_0x99f;
        undefined field_0x9a0;
        undefined field_0x9a1;
        undefined field_0x9a2;
        undefined field_0x9a3;
        undefined field_0x9a4;
        undefined field_0x9a5;
        undefined field_0x9a6;
        undefined field_0x9a7;
        undefined field_0x9a8;
        undefined field_0x9a9;
        undefined field_0x9aa;
        undefined field_0x9ab;
        undefined field_0x9ac;
        undefined field_0x9ad;
        undefined field_0x9ae;
        undefined field_0x9af;
        undefined field_0x9b0;
        undefined field_0x9b1;
        undefined field_0x9b2;
        undefined field_0x9b3;
        undefined field_0x9b4;
        undefined field_0x9b5;
        undefined field_0x9b6;
        undefined field_0x9b7;
        undefined field_0x9b8;
        undefined field_0x9b9;
        undefined field_0x9ba;
        undefined field_0x9bb;
        undefined field_0x9bc;
        undefined field_0x9bd;
        undefined field_0x9be;
        undefined field_0x9bf;
        undefined field_0x9c0;
        undefined field_0x9c1;
        undefined field_0x9c2;
        undefined field_0x9c3;
        undefined field_0x9c4;
        undefined field_0x9c5;
        undefined field_0x9c6;
        undefined field_0x9c7;
        undefined field_0x9c8;
        undefined field_0x9c9;
        undefined field_0x9ca;
        undefined field_0x9cb;
        undefined field_0x9cc;
        undefined field_0x9cd;
        undefined field_0x9ce;
        undefined field_0x9cf;
        undefined field_0x9d0;
        undefined field_0x9d1;
        undefined field_0x9d2;
        undefined field_0x9d3;
        undefined field_0x9d4;
        undefined field_0x9d5;
        undefined field_0x9d6;
        undefined field_0x9d7;
        undefined field_0x9d8;
        undefined field_0x9d9;
        undefined field_0x9da;
        undefined field_0x9db;
        undefined field_0x9dc;
        undefined field_0x9dd;
        undefined field_0x9de;
        undefined field_0x9df;
        undefined field_0x9e0;
        undefined field_0x9e1;
        undefined field_0x9e2;
        undefined field_0x9e3;
        undefined field_0x9e4;
        undefined field_0x9e5;
        undefined field_0x9e6;
        undefined field_0x9e7;
        undefined field_0x9e8;
        undefined field_0x9e9;
        undefined field_0x9ea;
        undefined field_0x9eb;
        undefined field_0x9ec;
        undefined field_0x9ed;
        undefined field_0x9ee;
        undefined field_0x9ef;
        undefined field_0x9f0;
        undefined field_0x9f1;
        undefined field_0x9f2;
        undefined field_0x9f3;
        undefined field_0x9f4;
        undefined field_0x9f5;
        undefined field_0x9f6;
        undefined field_0x9f7;
        undefined field_0x9f8;
        undefined field_0x9f9;
        undefined field_0x9fa;
        undefined field_0x9fb;
        undefined field_0x9fc;
        undefined field_0x9fd;
        undefined field_0x9fe;
        undefined field_0x9ff;
        undefined field_0xa00;
        undefined field_0xa01;
        undefined field_0xa02;
        undefined field_0xa03;
        undefined field_0xa04;
        undefined field_0xa05;
        undefined field_0xa06;
        undefined field_0xa07;
        undefined field_0xa08;
        undefined field_0xa09;
        undefined field_0xa0a;
        undefined field_0xa0b;
        undefined field_0xa0c;
        undefined field_0xa0d;
        undefined field_0xa0e;
        undefined field_0xa0f;
        undefined field_0xa10;
        undefined field_0xa11;
        undefined field_0xa12;
        undefined field_0xa13;
        undefined field_0xa14;
        undefined field_0xa15;
        undefined field_0xa16;
        undefined field_0xa17;
        undefined field_0xa18;
        undefined field_0xa19;
        undefined field_0xa1a;
        undefined field_0xa1b;
        undefined field_0xa1c;
        undefined field_0xa1d;
        undefined field_0xa1e;
        undefined field_0xa1f;
        undefined field_0xa20;
        undefined field_0xa21;
        undefined field_0xa22;
        undefined field_0xa23;
        undefined field_0xa24;
        undefined field_0xa25;
        undefined field_0xa26;
        undefined field_0xa27;
        undefined field_0xa28;
        undefined field_0xa29;
        undefined field_0xa2a;
        undefined field_0xa2b;
        undefined field_0xa2c;
        undefined field_0xa2d;
        undefined field_0xa2e;
        undefined field_0xa2f;
        undefined field_0xa30;
        undefined field_0xa31;
        undefined field_0xa32;
        undefined field_0xa33;
        undefined field_0xa34;
        undefined field_0xa35;
        undefined field_0xa36;
        undefined field_0xa37;
        undefined field_0xa38;
        undefined field_0xa39;
        undefined field_0xa3a;
        undefined field_0xa3b;
        undefined field_0xa3c;
        undefined field_0xa3d;
        undefined field_0xa3e;
        undefined field_0xa3f;
        undefined field_0xa40;
        undefined field_0xa41;
        undefined field_0xa42;
        undefined field_0xa43;
        undefined field_0xa44;
        undefined field_0xa45;
        undefined field_0xa46;
        undefined field_0xa47;
        undefined field_0xa48;
        undefined field_0xa49;
        undefined field_0xa4a;
        undefined field_0xa4b;
        undefined field_0xa4c;
        undefined field_0xa4d;
        undefined field_0xa4e;
        undefined field_0xa4f;
        undefined field_0xa50;
        undefined field_0xa51;
        undefined field_0xa52;
        undefined field_0xa53;
        undefined field_0xa54;
        undefined field_0xa55;
        undefined field_0xa56;
        undefined field_0xa57;
        undefined field_0xa58;
        undefined field_0xa59;
        undefined field_0xa5a;
        undefined field_0xa5b;
        undefined field_0xa5c;
        undefined field_0xa5d;
        undefined field_0xa5e;
        undefined field_0xa5f;
        undefined field_0xa60;
        undefined field_0xa61;
        undefined field_0xa62;
        undefined field_0xa63;
        undefined field_0xa64;
        undefined field_0xa65;
        undefined field_0xa66;
        undefined field_0xa67;
        undefined field_0xa68;
        undefined field_0xa69;
        undefined field_0xa6a;
        undefined field_0xa6b;
        undefined field_0xa6c;
        undefined field_0xa6d;
        undefined field_0xa6e;
        undefined field_0xa6f;
        undefined field_0xa70;
        undefined field_0xa71;
        undefined field_0xa72;
        undefined field_0xa73;
        undefined field_0xa74;
        undefined field_0xa75;
        undefined field_0xa76;
        undefined field_0xa77;
        undefined field_0xa78;
        undefined field_0xa79;
        undefined field_0xa7a;
        undefined field_0xa7b;
        undefined field_0xa7c;
        undefined field_0xa7d;
        undefined field_0xa7e;
        undefined field_0xa7f;
        undefined field_0xa80;
        undefined field_0xa81;
        undefined field_0xa82;
        undefined field_0xa83;
        undefined field_0xa84;
        undefined field_0xa85;
        undefined field_0xa86;
        undefined field_0xa87;
        undefined field_0xa88;
        undefined field_0xa89;
        undefined field_0xa8a;
        undefined field_0xa8b;
        undefined field_0xa8c;
        undefined field_0xa8d;
        undefined field_0xa8e;
        undefined field_0xa8f;
        undefined field_0xa90;
        undefined field_0xa91;
        undefined field_0xa92;
        undefined field_0xa93;
        undefined field_0xa94;
        undefined field_0xa95;
        undefined field_0xa96;
        undefined field_0xa97;
        undefined field_0xa98;
        undefined field_0xa99;
        undefined field_0xa9a;
        undefined field_0xa9b;
        undefined field_0xa9c;
        undefined field_0xa9d;
        undefined field_0xa9e;
        undefined field_0xa9f;
        undefined field_0xaa0;
        undefined field_0xaa1;
        undefined field_0xaa2;
        undefined field_0xaa3;
        undefined field_0xaa4;
        undefined field_0xaa5;
        undefined field_0xaa6;
        undefined field_0xaa7;
        undefined field_0xaa8;
        undefined field_0xaa9;
        undefined field_0xaaa;
        undefined field_0xaab;
        undefined field_0xaac;
        undefined field_0xaad;
        undefined field_0xaae;
        undefined field_0xaaf;
        undefined field_0xab0;
        undefined field_0xab1;
        undefined field_0xab2;
        undefined field_0xab3;
        undefined field_0xab4;
        undefined field_0xab5;
        undefined field_0xab6;
        undefined field_0xab7;
        undefined field_0xab8;
        undefined field_0xab9;
        undefined field_0xaba;
        undefined field_0xabb;
        undefined field_0xabc;
        undefined field_0xabd;
        undefined field_0xabe;
        undefined field_0xabf;
        undefined field_0xac0;
        undefined field_0xac1;
        undefined field_0xac2;
        undefined field_0xac3;
        undefined field_0xac4;
        undefined field_0xac5;
        undefined field_0xac6;
        undefined field_0xac7;
        undefined field_0xac8;
        undefined field_0xac9;
        undefined field_0xaca;
        undefined field_0xacb;
        undefined field_0xacc;
        undefined field_0xacd;
        undefined field_0xace;
        undefined field_0xacf;
        undefined field_0xad0;
        undefined field_0xad1;
        undefined field_0xad2;
        undefined field_0xad3;
        undefined field_0xad4;
        undefined field_0xad5;
        undefined field_0xad6;
        undefined field_0xad7;
        undefined field_0xad8;
        undefined field_0xad9;
        undefined field_0xada;
        undefined field_0xadb;
        undefined field_0xadc;
        undefined field_0xadd;
        undefined field_0xade;
        undefined field_0xadf;
        undefined field_0xae0;
        undefined field_0xae1;
        undefined field_0xae2;
        undefined field_0xae3;
        undefined field_0xae4;
        undefined field_0xae5;
        undefined field_0xae6;
        undefined field_0xae7;
        undefined field_0xae8;
        undefined field_0xae9;
        undefined field_0xaea;
        undefined field_0xaeb;
        undefined field_0xaec;
        undefined field_0xaed;
        undefined field_0xaee;
        undefined field_0xaef;
        undefined field_0xaf0;
        undefined field_0xaf1;
        undefined field_0xaf2;
        undefined field_0xaf3;
        undefined field_0xaf4;
        undefined field_0xaf5;
        undefined field_0xaf6;
        undefined field_0xaf7;
        undefined field_0xaf8;
        undefined field_0xaf9;
        undefined field_0xafa;
        undefined field_0xafb;
        undefined field_0xafc;
        undefined field_0xafd;
        undefined field_0xafe;
        undefined field_0xaff;
        undefined field_0xb00;
        undefined field_0xb01;
        undefined field_0xb02;
        undefined field_0xb03;
        undefined field_0xb04;
        undefined field_0xb05;
        undefined field_0xb06;
        undefined field_0xb07;
        undefined field_0xb08;
        undefined field_0xb09;
        undefined field_0xb0a;
        undefined field_0xb0b;
        undefined field_0xb0c;
        undefined field_0xb0d;
        undefined field_0xb0e;
        undefined field_0xb0f;
        undefined field_0xb10;
        undefined field_0xb11;
        undefined field_0xb12;
        undefined field_0xb13;
        undefined field_0xb14;
        undefined field_0xb15;
        undefined field_0xb16;
        undefined field_0xb17;
        undefined field_0xb18;
        undefined field_0xb19;
        undefined field_0xb1a;
        undefined field_0xb1b;
        undefined field_0xb1c;
        undefined field_0xb1d;
        undefined field_0xb1e;
        undefined field_0xb1f;
        undefined field_0xb20;
        undefined field_0xb21;
        undefined field_0xb22;
        undefined field_0xb23;
        undefined field_0xb24;
        undefined field_0xb25;
        undefined field_0xb26;
        undefined field_0xb27;
        undefined field_0xb28;
        undefined field_0xb29;
        undefined field_0xb2a;
        undefined field_0xb2b;
        undefined field_0xb2c;
        undefined field_0xb2d;
        undefined field_0xb2e;
        undefined field_0xb2f;
        undefined field_0xb30;
        undefined field_0xb31;
        undefined field_0xb32;
        undefined field_0xb33;
        undefined field_0xb34;
        undefined field_0xb35;
        undefined field_0xb36;
        undefined field_0xb37;
        undefined field_0xb38;
        undefined field_0xb39;
        undefined field_0xb3a;
        undefined field_0xb3b;
        undefined field_0xb3c;
        undefined field_0xb3d;
        undefined field_0xb3e;
        undefined field_0xb3f;
        undefined field_0xb40;
        undefined field_0xb41;
        undefined field_0xb42;
        undefined field_0xb43;
        undefined field_0xb44;
        undefined field_0xb45;
        undefined field_0xb46;
        undefined field_0xb47;
        undefined field_0xb48;
        undefined field_0xb49;
        undefined field_0xb4a;
        undefined field_0xb4b;
        undefined field_0xb4c;
        undefined field_0xb4d;
        undefined field_0xb4e;
        undefined field_0xb4f;
        undefined field_0xb50;
        undefined field_0xb51;
        undefined field_0xb52;
        undefined field_0xb53;
        undefined field_0xb54;
        undefined field_0xb55;
        undefined field_0xb56;
        undefined field_0xb57;
        undefined field_0xb58;
        undefined field_0xb59;
        undefined field_0xb5a;
        undefined field_0xb5b;
        undefined field_0xb5c;
        undefined field_0xb5d;
        undefined field_0xb5e;
        undefined field_0xb5f;
        undefined field_0xb60;
        undefined field_0xb61;
        undefined field_0xb62;
        undefined field_0xb63;
        undefined field_0xb64;
        undefined field_0xb65;
        undefined field_0xb66;
        undefined field_0xb67;
        undefined field_0xb68;
        undefined field_0xb69;
        undefined field_0xb6a;
        undefined field_0xb6b;
        undefined field_0xb6c;
        undefined field_0xb6d;
        undefined field_0xb6e;
        undefined field_0xb6f;
        undefined field_0xb70;
        undefined field_0xb71;
        undefined field_0xb72;
        undefined field_0xb73;
        undefined field_0xb74;
        undefined field_0xb75;
        undefined field_0xb76;
        undefined field_0xb77;
        undefined field_0xb78;
        undefined field_0xb79;
        undefined field_0xb7a;
        undefined field_0xb7b;
        undefined field_0xb7c;
        undefined field_0xb7d;
        undefined field_0xb7e;
        undefined field_0xb7f;
        undefined field_0xb80;
        undefined field_0xb81;
        undefined field_0xb82;
        undefined field_0xb83;
        undefined field_0xb84;
        undefined field_0xb85;
        undefined field_0xb86;
        undefined field_0xb87;
        undefined field_0xb88;
        undefined field_0xb89;
        undefined field_0xb8a;
        undefined field_0xb8b;
        undefined field_0xb8c;
        undefined field_0xb8d;
        undefined field_0xb8e;
        undefined field_0xb8f;
        SOCKET Socket1;
        undefined field_0xb94;
        undefined field_0xb95;
        undefined field_0xb96;
        undefined field_0xb97;
        undefined field_0xb98;
        undefined field_0xb99;
        undefined field_0xb9a;
        undefined field_0xb9b;
        undefined field_0xb9c;
        undefined field_0xb9d;
        undefined field_0xb9e;
        undefined field_0xb9f;
        u_short Socket1Port; /* Created by retype action */
        undefined field_0xba2;
        undefined field_0xba3;
        undefined field_0xba4;
        undefined field_0xba5;
        undefined field_0xba6;
        undefined field_0xba7;
        undefined field_0xba8;
        undefined field_0xba9;
        undefined field_0xbaa;
        undefined field_0xbab;
        undefined field_0xbac;
        undefined field_0xbad;
        undefined field_0xbae;
        undefined field_0xbaf;
        undefined field_0xbb0;
        undefined field_0xbb1;
        undefined field_0xbb2;
        undefined field_0xbb3;
        undefined field_0xbb4;
        undefined field_0xbb5;
        undefined field_0xbb6;
        undefined field_0xbb7;
        undefined field_0xbb8;
        undefined field_0xbb9;
        undefined field_0xbba;
        undefined field_0xbbb;
        undefined field_0xbbc;
        undefined field_0xbbd;
        undefined field_0xbbe;
        undefined field_0xbbf;
        undefined field_0xbc0;
        undefined field_0xbc1;
        undefined field_0xbc2;
        undefined field_0xbc3;
        undefined field_0xbc4;
        undefined field_0xbc5;
        undefined field_0xbc6;
        undefined field_0xbc7;
        undefined field_0xbc8;
        undefined field_0xbc9;
        undefined field_0xbca;
        undefined field_0xbcb;
        undefined field_0xbcc;
        undefined field_0xbcd;
        undefined field_0xbce;
        undefined field_0xbcf;
        BOOL bUseQServerHack;
        HANDLE hEmptyEvent;
        HANDLE hThreadHandle; /* Created by retype action */
        undefined field_0xbdc;
        undefined field_0xbdd;
        undefined field_0xbde;
        undefined field_0xbdf;
        undefined field_0xbe0;
        undefined field_0xbe1;
        undefined field_0xbe2;
        undefined field_0xbe3;
        undefined field_0xbe4;
        undefined field_0xbe5;
        undefined field_0xbe6;
        undefined field_0xbe7;
        DWORD dwThreadId;
        undefined field_0xbec;
        undefined field_0xbed;
        undefined field_0xbee;
        undefined field_0xbef;
        undefined field_0xbf0;
        undefined field_0xbf1;
        undefined field_0xbf2;
        undefined field_0xbf3;
        undefined field_0xbf4;
        undefined field_0xbf5;
        undefined field_0xbf6;
        undefined field_0xbf7;
        undefined field_0xbf8;
        undefined field_0xbf9;
        undefined field_0xbfa;
        undefined field_0xbfb;
        undefined field_0xbfc;
        undefined field_0xbfd;
        undefined field_0xbfe;
        undefined field_0xbff;
        undefined field_0xc00;
        undefined field_0xc01;
        undefined field_0xc02;
        undefined field_0xc03;
        undefined field_0xc04;
        undefined field_0xc05;
        undefined field_0xc06;
        undefined field_0xc07;
        undefined field_0xc08;
        undefined field_0xc09;
        undefined field_0xc0a;
        undefined field_0xc0b;
        undefined field_0xc0c;
        undefined field_0xc0d;
        undefined field_0xc0e;
        undefined field_0xc0f;
        undefined field_0xc10;
        undefined field_0xc11;
        undefined field_0xc12;
        undefined field_0xc13;
        undefined field_0xc14;
        undefined field_0xc15;
        undefined field_0xc16;
        undefined field_0xc17;
        undefined field_0xc18;
        undefined field_0xc19;
        undefined field_0xc1a;
        undefined field_0xc1b;
        undefined field_0xc1c;
        undefined field_0xc1d;
        undefined field_0xc1e;
        undefined field_0xc1f;
        undefined field_0xc20;
        undefined field_0xc21;
        undefined field_0xc22;
        undefined field_0xc23;
        undefined field_0xc24;
        undefined field_0xc25;
        undefined field_0xc26;
        undefined field_0xc27;
        undefined field_0xc28;
        undefined field_0xc29;
        undefined field_0xc2a;
        undefined field_0xc2b;
        undefined field_0xc2c;
        undefined field_0xc2d;
        undefined field_0xc2e;
        undefined field_0xc2f;
        undefined field_0xc30;
        undefined field_0xc31;
        undefined field_0xc32;
        undefined field_0xc33;
        undefined field_0xc34;
        undefined field_0xc35;
        undefined field_0xc36;
        undefined field_0xc37;
        undefined field_0xc38;
        undefined field_0xc39;
        undefined field_0xc3a;
        undefined field_0xc3b;
        undefined field_0xc3c;
        undefined field_0xc3d;
        undefined field_0xc3e;
        undefined field_0xc3f;
        undefined field_0xc40;
        undefined field_0xc41;
        undefined field_0xc42;
        undefined field_0xc43;
        undefined field_0xc44;
        undefined field_0xc45;
        undefined field_0xc46;
        undefined field_0xc47;
        undefined field_0xc48;
        undefined field_0xc49;
        undefined field_0xc4a;
        undefined field_0xc4b;
    };

    struct D2QServerClientListStrc {
        struct D2QServerClientStrc *pQServerClient[16];
    };

    struct _RTL_CRITICAL_SECTION {
        PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
        LONG LockCount;
        LONG RecursionCount;
        HANDLE OwningThread;
        HANDLE LockSemaphore;
        ULONG_PTR SpinCount;
    };

    struct D2QServerClientStrc {
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        struct D2QServerClientStrc *ptNextClient; /* Created by retype action */
        int nInterlockedInrement; /* Created by retype action */
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        LPCRITICAL_SECTION ClientCriticalSection; /* Created by retype action */
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        undefined field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        undefined field_0x48;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        undefined field_0x50;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
        undefined field_0x54;
        undefined field_0x55;
        undefined field_0x56;
        undefined field_0x57;
        undefined field_0x58;
        undefined field_0x59;
        undefined field_0x5a;
        undefined field_0x5b;
        undefined field_0x5c;
        undefined field_0x5d;
        undefined field_0x5e;
        undefined field_0x5f;
        undefined field_0x60;
        undefined field_0x61;
        undefined field_0x62;
        undefined field_0x63;
        undefined field_0x64;
        undefined field_0x65;
        undefined field_0x66;
        undefined field_0x67;
        undefined field_0x68;
        undefined field_0x69;
        undefined field_0x6a;
        undefined field_0x6b;
        undefined field_0x6c;
        undefined field_0x6d;
        undefined field_0x6e;
        undefined field_0x6f;
        undefined field_0x70;
        undefined field_0x71;
        undefined field_0x72;
        undefined field_0x73;
        struct D2QServerClientPacketStrc *pQServerClientPacket; /* Created by retype action */
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        undefined field_0x80;
        undefined field_0x81;
        undefined field_0x82;
        undefined field_0x83;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        undefined field_0x90;
        undefined field_0x91;
        undefined field_0x92;
        undefined field_0x93;
        undefined field_0x94;
        undefined field_0x95;
        undefined field_0x96;
        undefined field_0x97;
        undefined field_0x98;
        undefined field_0x99;
        undefined field_0x9a;
        undefined field_0x9b;
        undefined field_0x9c;
        undefined field_0x9d;
        undefined field_0x9e;
        undefined field_0x9f;
        undefined field_0xa0;
        undefined field_0xa1;
        undefined field_0xa2;
        undefined field_0xa3;
        undefined field_0xa4;
        undefined field_0xa5;
        undefined field_0xa6;
        undefined field_0xa7;
        undefined field_0xa8;
        undefined field_0xa9;
        undefined field_0xaa;
        undefined field_0xab;
        undefined field_0xac;
        undefined field_0xad;
        undefined field_0xae;
        undefined field_0xaf;
        undefined field_0xb0;
        undefined field_0xb1;
        undefined field_0xb2;
        undefined field_0xb3;
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        undefined field_0xb8;
        undefined field_0xb9;
        undefined field_0xba;
        undefined field_0xbb;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        undefined field_0xc4;
        undefined field_0xc5;
        undefined field_0xc6;
        undefined field_0xc7;
        undefined field_0xc8;
        undefined field_0xc9;
        undefined field_0xca;
        undefined field_0xcb;
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        undefined field_0xd0;
        undefined field_0xd1;
        undefined field_0xd2;
        undefined field_0xd3;
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        undefined field_0xd8;
        undefined field_0xd9;
        undefined field_0xda;
        undefined field_0xdb;
        undefined field_0xdc;
        undefined field_0xdd;
        undefined field_0xde;
        undefined field_0xdf;
        undefined field_0xe0;
        undefined field_0xe1;
        undefined field_0xe2;
        undefined field_0xe3;
        undefined field_0xe4;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        undefined field_0xe8;
        undefined field_0xe9;
        undefined field_0xea;
        undefined field_0xeb;
        undefined field_0xec;
        undefined field_0xed;
        undefined field_0xee;
        undefined field_0xef;
        undefined field_0xf0;
        undefined field_0xf1;
        undefined field_0xf2;
        undefined field_0xf3;
        undefined field_0xf4;
        undefined field_0xf5;
        undefined field_0xf6;
        undefined field_0xf7;
        undefined field_0xf8;
        undefined field_0xf9;
        undefined field_0xfa;
        undefined field_0xfb;
        undefined field_0xfc;
        undefined field_0xfd;
        undefined field_0xfe;
        undefined field_0xff;
        undefined field_0x100;
        undefined field_0x101;
        undefined field_0x102;
        undefined field_0x103;
        undefined field_0x104;
        undefined field_0x105;
        undefined field_0x106;
        undefined field_0x107;
        undefined field_0x108;
        undefined field_0x109;
        undefined field_0x10a;
        undefined field_0x10b;
        undefined field_0x10c;
        undefined field_0x10d;
        undefined field_0x10e;
        undefined field_0x10f;
        undefined field_0x110;
        undefined field_0x111;
        undefined field_0x112;
        undefined field_0x113;
        undefined field_0x114;
        undefined field_0x115;
        undefined field_0x116;
        undefined field_0x117;
        undefined field_0x118;
        undefined field_0x119;
        undefined field_0x11a;
        undefined field_0x11b;
        undefined field_0x11c;
        undefined field_0x11d;
        undefined field_0x11e;
        undefined field_0x11f;
        undefined field_0x120;
        undefined field_0x121;
        undefined field_0x122;
        undefined field_0x123;
    };

    struct _LIST_ENTRY {
        struct _LIST_ENTRY *Flink;
        struct _LIST_ENTRY *Blink;
    };

    struct D2QServerClientPacketStrc {
        size_t nPacketSize;
        struct D2QServerClientPacketStrc *pQServerClientPacketNext;
        char pBytes;
    };

    struct _RTL_CRITICAL_SECTION_DEBUG {
        WORD Type;
        WORD CreatorBackTraceIndex;
        struct _RTL_CRITICAL_SECTION *CriticalSection;
        LIST_ENTRY ProcessLocksList;
        DWORD EntryCount;
        DWORD ContentionCount;
        DWORD Flags;
        WORD CreatorBackTraceIndexHigh;
        WORD SpareWORD;
    };


    typedef enum eD2GSConnectionType {
        CONNECTIONTYPE_SINGLEPLAYER = 1,
        CONNECTIONTYPE_SINGLEPLAYERUNCAPPED = 2,
        CONNECTIONTYPE_SERVER = 0
    } eD2GSConnectionType;

    typedef enum eD2GSGameType {
        GAMETYPE_BNET=3,
        GAMETYPE_BNET_BETA=2,
        GAMETYPE_BNET_INTERNAL=4,
        GAMETYPE_COUNT=10,
        GAMETYPE_SINGLEPLAYER_UNCAPPED=1,
        GAMETYPE_LAN_JOIN=9,
        GAMETYPE_LAN_HOST=8,
        GAMETYPE_OBNET_HOST=6,
        GAMETYPE_BNET_UNUSED=5,
        GAMETYPE_OBNET_JOIN=7,
        GAMETYPE_SINGLEPLAYER=0
    } eD2GSGameType;

    typedef enum eD2ClientAppMode {
        APPMODE_COUNT=7,
        APPMODE_ENTERGAME=2,
        APPMODE_EXITGAME=4,
        APPMODE_RENDER=6,
        APPMODE_SAVE=3,
        APPMODE_HOST=5,
        APPMODE_CONTINUE=1
    } eD2ClientAppMode;


    typedef struct D2GameStrc D2GameStrc, *PD2GameStrc;

    typedef struct D2DrlgRoomStrc D2DrlgRoomStrc, *PD2DrlgRoomStrc;

    typedef struct D2PacketListStrc D2PacketListStrc, *PD2PacketListStrc;

    typedef struct D2ClientHotKeyStrc D2ClientHotKeyStrc, *PD2ClientHotKeyStrc;

    typedef struct D2PlayerBasicsData D2PlayerBasicsData, *PD2PlayerBasicsData;

    typedef enum eD2UnitType {
        UNIT_ITEM=4,
        UNIT_MISSILE=3,
        UNIT_OBJECT=2,
        UNIT_WARP=5,
        UNIT_COUNT=6,
        UNIT_PLAYER=0,
        UNIT_MONSTER=1
    } eD2UnitType;

    typedef struct D2PoolManagerStrc D2PoolManagerStrc, *PD2PoolManagerStrc;

    typedef ulong DWORD;

    typedef union D2UnitDataUnion D2UnitDataUnion, *PD2UnitDataUnion;

    typedef struct D2DrlgActStrc D2DrlgActStrc, *PD2DrlgActStrc;

    typedef struct D2SeedStrc D2SeedStrc, *PD2SeedStrc;

    typedef union D2PathUnion D2PathUnion, *PD2PathUnion;

    typedef struct D2StatListExStrc D2StatListExStrc, *PD2StatListExStrc;

    typedef struct D2InventoryStrc D2InventoryStrc, *PD2InventoryStrc;

    typedef struct D2LightMapStrc D2LightMapStrc, *PD2LightMapStrc;

    typedef union D2UnitEvent D2UnitEvent, *PD2UnitEvent;

    typedef struct D2HoverTextStrc D2HoverTextStrc, *PD2HoverTextStrc;

    typedef struct D2SkillListStrc D2SkillListStrc, *PD2SkillListStrc;

    typedef enum eD2UnitFlagsC4 {
        UNITFLAG_SKILLEND=64
    } eD2UnitFlagsC4;

    typedef struct D2ServerCmdStrc D2ServerCmdStrc, *PD2ServerCmdStrc;

    typedef struct D2TimerStrc D2TimerStrc, *PD2TimerStrc;

    typedef struct D2SUnitMsgStrc D2SUnitMsgStrc, *PD2SUnitMsgStrc;

    typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

    typedef struct _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;


    typedef ushort WORD;

    typedef enum eD2HostGameType {
        SGAMETYPE_COUNT=4,
        SGAMETYPE_SINGLEPLAYER=3,
        SGAMETYPE_LAN_HOST=2,
        SGAMETYPE_OBNET_HOST=1,
        SGAMETYPE_BNET_HOST=0
    } eD2HostGameType;

    typedef int BOOL;

    typedef struct D2EventControlStrc D2EventControlStrc, *PD2EventControlStrc;

    typedef struct D2ServerUnitInactiveStrc D2ServerUnitInactiveStrc, *PD2ServerUnitInactiveStrc;

    typedef struct D2MonsterRegionStrc D2MonsterRegionStrc, *PD2MonsterRegionStrc;

    typedef struct D2QuestControlStrc D2QuestControlStrc, *PD2QuestControlStrc;

    typedef struct D2UnitNodeStrc D2UnitNodeStrc, *PD2UnitNodeStrc;

    typedef struct D2GameNpcControlStrc D2GameNpcControlStrc, *PD2GameNpcControlStrc;

    typedef uchar BYTE;

    typedef struct D2DrlgRoomExSub54Sub14Strc D2DrlgRoomExSub54Sub14Strc, *PD2DrlgRoomExSub54Sub14Strc;

    typedef struct D2DrlgRoomExStrc D2DrlgRoomExStrc, *PD2DrlgRoomExStrc;

    typedef struct D2CorpseStrc D2CorpseStrc, *PD2CorpseStrc;

    typedef struct D2DrlgRoomCollisionMap D2DrlgRoomCollisionMap, *PD2DrlgRoomCollisionMap;

    typedef struct D2DrlgRoomCoordsStrc D2DrlgRoomCoordsStrc, *PD2DrlgRoomCoordsStrc;

    typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;

    typedef RTL_CRITICAL_SECTION CRITICAL_SECTION;

    typedef struct D2PoolStrc D2PoolStrc, *PD2PoolStrc;

    typedef struct D2PoolBlockEntryStrc D2PoolBlockEntryStrc, *PD2PoolBlockEntryStrc;

    typedef struct D2UnitDataPlayerStrc D2UnitDataPlayerStrc, *PD2UnitDataPlayerStrc;

    typedef struct D2UnitDataMonsterStrc D2UnitDataMonsterStrc, *PD2UnitDataMonsterStrc;

    typedef struct D2UnitDataObjectStrc D2UnitDataObjectStrc, *PD2UnitDataObjectStrc;

    typedef struct D2UnitDataMissileStrc D2UnitDataMissileStrc, *PD2UnitDataMissileStrc;

    typedef struct D2UnitDataItemStrc D2UnitDataItemStrc, *PD2UnitDataItemStrc;


    typedef struct D2DrlgActEnvironmentStrc D2DrlgActEnvironmentStrc, *PD2DrlgActEnvironmentStrc;

    typedef struct D2DrlgActSub18Strc D2DrlgActSub18Strc, *PD2DrlgActSub18Strc;

    typedef struct D2DrlgActMiscStrc D2DrlgActMiscStrc, *PD2DrlgActMiscStrc;

    typedef struct D2StaticPathStrc D2StaticPathStrc, *PD2StaticPathStrc;

    typedef struct D2DynamicPathStrc D2DynamicPathStrc, *PD2DynamicPathStrc;

    typedef struct D2StatListStrc D2StatListStrc, *PD2StatListStrc;

    typedef struct D2StatInfoStrc D2StatInfoStrc, *PD2StatInfoStrc;

    typedef struct D2StateFlags D2StateFlags, *PD2StateFlags;

    typedef struct D2InventoryGridInfoStrc D2InventoryGridInfoStrc, *PD2InventoryGridInfoStrc;

    typedef struct D2CUnitEventStrc D2CUnitEventStrc, *PD2CUnitEventStrc;

    typedef struct D2SUnitEventStrc D2SUnitEventStrc, *PD2SUnitEventStrc;

    typedef enum eD2Skills {
        SKILL_Dopplezon=28,
        SKILL_DoubleThrow=140,
        SKILL_CatapultPlague=304,
        SKILL_ClawMastery=252,
        SKILL_ResistFire=100,
        SKILL_ShamanIce=348,
        SKILL_Might=98,
        SKILL_Hunger=242,
        SKILL_ImpInferno=282,
        SKILL_Jab=10,
        SKILL_MegademonInferno=319,
        SKILL_HeartofWolverine=236,
        SKILL_MonFireArrow=340,
        SKILL_mondeathsentry=312,
        SKILL_IncreasedStamina=141,
        SKILL_Shout=138,
        SKILL_NaturalResistance=153,
        SKILL_BloodGolem=85,
        SKILL_DeleriumChange=350,
        SKILL_FireBolt=36,
        SKILL_MonCurseCast=212,
        SKILL_HolyShock=118,
        SKILL_DoubleSwing=133,
        SKILL_Evade=29,
        SKILL_IceBolt=39,
        SKILL_Vigor=115,
        SKILL_PrimeBolt=186,
        SKILL_PowerStrike=14,
        SKILL_DiabPrison=199,
        SKILL_FistoftheHeavens=121,
        SKILL_WeaponBlock=263,
        SKILL_BladeShield=277,
        SKILL_BattleOrders=149,
        SKILL_CatapultMeteor=305,
        SKILL_Impregnate=300,
        SKILL_Bash=126,
        SKILL_Teleport2=292,
        SKILL_FireMastery=61,
        SKILL_Wearbear=228,
        SKILL_BoneSpirit=93,
        SKILL_OakSageAura=298,
        SKILL_Vengeance=111,
        SKILL_Terror=77,
        SKILL_LeftHandThrow=4,
        SKILL_QuickStrike=168,
        SKILL_BoneWall=78,
        SKILL_Dodge=13,
        SKILL_ColdMastery=65,
        SKILL_DimVision=71,
        SKILL_GargoyleTrap=172,
        SKILL_PlagueJavelin=25,
        SKILL_Raven=221,
        SKILL_ScrollofTownportal=219,
        SKILL_MonBlizzard=205,
        SKILL_MonFrozenArmor=209,
        SKILL_HolyShield=117,
        SKILL_BaalTeleport=329,
        SKILL_DiabRun=198,
        SKILL_MagicArrow=6,
        SKILL_Fend=30,
        SKILL_IronMaiden=76,
        SKILL_Stun=139,
        SKILL_VampireRaise=175,
        SKILL_BloodMana=310,
        SKILL_VineCycler=325,
        SKILL_InnerSight=8,
        SKILL_MephistoMissile=334,
        SKILL_ThunderStorm=57,
        SKILL_ShockField=256,
        SKILL_AxeMastery=128,
        SKILL_NihlathakCorpseExplosion=351,
        SKILL_BoltSentry=306,
        SKILL_LifeTap=82,
        SKILL_Hurricane=250,
        SKILL_UnHolyBolt=157,
        SKILL_FireTrauma=251,
        SKILL_MoltenBoulder=229,
        SKILL_BookofTownportal=220,
        SKILL_PrimePoisonNova=192,
        SKILL_Defiance=104,
        SKILL_PoisonExplosion=83,
        SKILL_Throw=2,
        SKILL_RaiseSkeletalMage=80,
        SKILL_DiabFire=195,
        SKILL_GuidedArrow=22,
        SKILL_ArcaneTower=204,
        SKILL_CatapultBlizzard=303,
        SKILL_FireClaws=239,
        SKILL_Warmth=37,
        SKILL_FireGolem=94,
        SKILL_ChainLightning=53,
        SKILL_Zeal=106,
        SKILL_ZakarumHeal=179,
        SKILL_Concentrate=144,
        SKILL_ImpFireMissileEx=356,
        SKILL_ImmolationArrow=27,
        SKILL_Taunt=137,
        SKILL_DiabCold=194,
        SKILL_ShamanFire=160,
        SKILL_SiegeBeastStomp=301,
        SKILL_FrostNova=44,
        SKILL_MephFrostNova=346,
        SKILL_ShadowWarrior=268,
        SKILL_BlessedHammer=112,
        SKILL_BaalNova=316,
        SKILL_MagottDown=162,
        SKILL_Teeth=67,
        SKILL_HydraMissile=337,
        SKILL_ClawsofThunder=269,
        SKILL_BoneArmor=68,
        SKILL_BearSmite=326,
        SKILL_Attack=0,
        SKILL_MonFrenzy=215,
        SKILL_PoleArmMastery=134,
        SKILL_Sanctuary=119,
        SKILL_OverseerWhip=295,
        SKILL_SummonSpiritWolf=227,
        SKILL_LeftHandSwing=5,
        SKILL_CobraStrike=265,
        SKILL_PrimeLightning=185,
        SKILL_Pierce=33,
        SKILL_EnergyShield=58,
        SKILL_Leap=132,
        SKILL_BaalTentacle=315,
        SKILL_MindBlast=273,
        SKILL_SkeletonRaise=158,
        SKILL_FeralRage=232,
        SKILL_MagottLay=163,
        SKILL_MonFreezingArrow=343,
        SKILL_BladesofIce=274,
        SKILL_Unsummon=3,
        SKILL_Mosquito=206,
        SKILL_Attract=86,
        SKILL_CycleofLife=231,
        SKILL_ScrollofIdentify=217,
        SKILL_LowerResist=91,
        SKILL_Fury=248,
        SKILL_Conviction=123,
        SKILL_CatapultSpikeBall=288,
        SKILL_FistsofFire=259,
        SKILL_IceArrow=21,
        SKILL_CatapultChargedBall=287,
        SKILL_MaggotEgg=159,
        SKILL_SerpentCharge=352,
        SKILL_InfernoSentry=272,
        SKILL_PoisonJavelin=15,
        SKILL_SwordMastery=127,
        SKILL_SelfResurrect=293,
        SKILL_ChargedBoltSentry=261,
        SKILL_HireableMissile=202,
        SKILL_Diablogeddon=349,
        SKILL_ChargedStrike=24,
        SKILL_AndrialSpray=164,
        SKILL_Blizzard=59,
        SKILL_Wearwolf=223,
        SKILL_MultipleShot=12,
        SKILL_Submerge=176,
        SKILL_ImpTeleport=330,
        SKILL_MonExplodingArrow=342,
        SKILL_WakeofFireSentry=262,
        SKILL_DragonClaw=260,
        SKILL_FireArrow=7,
        SKILL_BattleCry=146,
        SKILL_MissileSkill1=183,
        SKILL_Confuse=81,
        SKILL_ThrowingMastery=135,
        SKILL_DeathSentry=276,
        SKILL_Maul=233,
        SKILL_IceBlast=45,
        SKILL_SpiritofBarbs=246,
        SKILL_FreezingArrow=31,
        SKILL_LightningFury=35,
        SKILL_PlaguePoppy=222,
        SKILL_VampireHeal=174,
        SKILL_Conversion=116,
        SKILL_FetishInferno=178,
        SKILL_ChillingArmor=60,
        SKILL_Concentration=113,
        SKILL_CorpseCycler=307,
        SKILL_MonPowerStrike=344,
        SKILL_MinionSpawner=302,
        SKILL_ResistCold=105,
        SKILL_AndyPoisonBolt=201,
        SKILL_Inferno=41,
        SKILL_WarCry=154,
        SKILL_Enchant=52,
        SKILL_VampireMeteor=171,
        SKILL_ShadowMaster=279,
        SKILL_DefenseCurse=309,
        SKILL_Meditation=120,
        SKILL_BookofIdentify=218,
        SKILL_Salvation=125,
        SKILL_LeapAttack=143,
        SKILL_ImpBolt=322,
        SKILL_DragonTail=270,
        SKILL_ShapeShifting=224,
        SKILL_WakeOfDestructionSentry=281,
        SKILL_Smite=97,
        SKILL_MaceMastery=129,
        SKILL_PoisonNova=92,
        SKILL_HolyFreeze=114,
        SKILL_CryHelp=290,
        SKILL_DiabLight=193,
        SKILL_DragonFlight=275,
        SKILL_Redemption=124,
        SKILL_Firestorm=225,
        SKILL_HorrorArcticBlast=323,
        SKILL_PrimeBlaze=187,
        SKILL_Thorns=103,
        SKILL_GolemMastery=79,
        SKILL_deathsentryltng=324,
        SKILL_PoisonBallTrap=200,
        SKILL_StaticField=42,
        SKILL_FingerMageSpider=196,
        SKILL_TrapNova=353,
        SKILL_Vines=241,
        SKILL_Bestow=182,
        SKILL_SkeletonMastery=69,
        SKILL_SpiderLay=173,
        SKILL_ChargedBolt=38,
        SKILL_MagottUp=161,
        SKILL_RoyalStrike=280,
        SKILL_VampireMissile=333,
        SKILL_Rabies=238,
        SKILL_Blaze=46,
        SKILL_CloakofShadows=264,
        SKILL_PrimeIceNova=190,
        SKILL_ImpFireMissile=299,
        SKILL_Teleport=54,
        SKILL_VampireFireball=169,
        SKILL_SummonFenris=237,
        SKILL_FireHit=156,
        SKILL_ZakarumLightning=332,
        SKILL_Cleansing=109,
        SKILL_FetishAura=177,
        SKILL_ImpFireball=283,
        SKILL_BaalCloneTeleport=331,
        SKILL_CriticalStrike=9,
        SKILL_Weaken=72,
        SKILL_CountessFirewall=321,
        SKILL_IronGolem=90,
        SKILL_MonBoneArmor=210,
        SKILL_Resurrect=181,
        SKILL_fenrisrage=314,
        SKILL_MonBoneSpirit=211,
        SKILL_RaiseSkeleton=70,
        SKILL_WolverineAura=297,
        SKILL_DragonTalon=255,
        SKILL_LightningSentry=271,
        SKILL_Venom=278,
        SKILL_BloodLordFrenzy=328,
        SKILL_PrimeFirewall=188,
        SKILL_Fanaticism=122,
        SKILL_FrozenOrb=64,
        SKILL_Frenzy=147,
        SKILL_Berserk=152,
        SKILL_DoomKnightMissile=335,
        SKILL_BladeFury=266,
        SKILL_HellMeteor=213,
        SKILL_Quickness=258,
        SKILL_Whirlwind=151,
        SKILL_BoneSpear=84,
        SKILL_sentrylightning=313,
        SKILL_SlowMissiles=17,
        SKILL_TigerStrike=254,
        SKILL_CursedBallTrapLeft=208,
        SKILL_Telekinesis=43,
        SKILL_IncreasedSpeed=148,
        SKILL_BattleCommand=155,
        SKILL_QueenDeath=216,
        SKILL_MonIceSpear=347,
        SKILL_DeathMaul=308,
        SKILL_FireBall=47,
        SKILL_GrimWard=150,
        SKILL_ResistLightning=110,
        SKILL_ClayGolem=75,
        SKILL_VampireFirewall=170,
        SKILL_Volcano=244,
        SKILL_PsychicHammer=253,
        SKILL_Avoid=18,
        SKILL_SummonGrizzly=247,
        SKILL_DesertTurret=203,
        SKILL_CycloneArmor=235,
        SKILL_UnHolyBoltEx=354,
        SKILL_SummonResist=89,
        SKILL_Hydra=62,
        SKILL_SwarmMove=166,
        SKILL_Valkyrie=32,
        SKILL_FindPotion=131,
        SKILL_Revive=95,
        SKILL_Fade=267,
        SKILL_BaalTaunt=284,
        SKILL_Strafe=26,
        SKILL_Decrepify=87,
        SKILL_Lightning=49,
        SKILL_BlessedAim=108,
        SKILL_BaalMonsterSpawn=286,
        SKILL_LightningBolt=20,
        SKILL_Resurrect2=327,
        SKILL_NecromageMissile=338,
        SKILL_VineAttack=294,
        SKILL_ArcticBlast=230,
        SKILL_LightningMastery=63,
        SKILL_RogueMissile=336,
        SKILL_ShamanFireEx=355,
        SKILL_ColdArrow=11,
        SKILL_GlacialSpike=55,
        SKILL_HolyBolt=101,
        SKILL_IronSkin=145,
        SKILL_SuccubusBolt=345,
        SKILL_LightningStrike=34,
        SKILL_BaalInferno=317,
        SKILL_Nest=167,
        SKILL_FindItem=142,
        SKILL_Eruption=234,
        SKILL_Charge=107,
        SKILL_FireWall=51,
        SKILL_MonColdArrow=341,
        SKILL_SpearMastery=136,
        SKILL_FrozenArmor=40,
        SKILL_Prayer=99,
        SKILL_SuckBlood=289,
        SKILL_ExplodingArrow=16,
        SKILL_PrimePoisonball=191,
        SKILL_Kick=1,
        SKILL_PoisonDagger=73,
        SKILL_Penetrate=23,
        SKILL_BaalColdMissiles=318,
        SKILL_HolyFire=102,
        SKILL_MonBow=339,
        SKILL_Meteor=56,
        SKILL_ShockWave=243,
        SKILL_Impale=19,
        SKILL_BonePrison=88,
        SKILL_HealingVortex=291,
        SKILL_Armageddon=249,
        SKILL_CorpseExplosion=74,
        SKILL_Nova=48,
        SKILL_DiabWall=197,
        SKILL_Twister=240,
        SKILL_Jump=165,
        SKILL_Sacrifice=96,
        SKILL_ShiverArmor=50,
        SKILL_BarbsAura=296,
        SKILL_EvilHutSpawner=320,
        SKILL_MonTeleport=184,
        SKILL_Emerge=180,
        SKILL_Howl=130,
        SKILL_PrimeSpike=189,
        SKILL_moninfernosentry=311,
        SKILL_BaalCorpseExplode=285,
        SKILL_BladeSentinel=257,
        SKILL_RegurgitatorEat=214,
        SKILL_CursedBallTrapRight=207,
        SKILL_Tornado=245,
        SKILL_AmplifyDamage=66,
        SKILL_OakSage=226
    } eD2Skills;

    typedef struct D2SkillStrc D2SkillStrc, *PD2SkillStrc;

    typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

    typedef struct _RTL_CRITICAL_SECTION_DEBUG * PRTL_CRITICAL_SECTION_DEBUG;

    typedef long LONG;

    typedef void * HANDLE;

    typedef ulong ULONG_PTR;

    typedef struct D2EventStrc D2EventStrc, *PD2EventStrc;

    typedef struct D2MonsterRegionFieldStrc D2MonsterRegionFieldStrc, *PD2MonsterRegionFieldStrc;

    typedef struct D2QuestDataStrc D2QuestDataStrc, *PD2QuestDataStrc;

    typedef struct D2BitBufferStrc D2BitBufferStrc, *PD2BitBufferStrc;

    typedef struct D2QuestTimerStrc D2QuestTimerStrc, *PD2QuestTimerStrc;

    typedef struct D2GameNpcArrayStrc D2GameNpcArrayStrc, *PD2GameNpcArrayStrc;

    typedef struct D2DrlgRoomExSub54Sub14RoomTileStrc D2DrlgRoomExSub54Sub14RoomTileStrc, *PD2DrlgRoomExSub54Sub14RoomTileStrc;

    typedef struct D2DrlgRoomExSub00Strc D2DrlgRoomExSub00Strc, *PD2DrlgRoomExSub00Strc;

    typedef union D2DrlgRoomExDataUnion D2DrlgRoomExDataUnion, *PD2DrlgRoomExDataUnion;

    typedef struct D2DrlgCoordsStrc D2DrlgCoordsStrc, *PD2DrlgCoordsStrc;

    typedef struct D2DrlgRoomExSub4CRoomTileStrc D2DrlgRoomExSub4CRoomTileStrc, *PD2DrlgRoomExSub4CRoomTileStrc;

    typedef struct D2DrlgRoomExSub54RoomTileStrc D2DrlgRoomExSub54RoomTileStrc, *PD2DrlgRoomExSub54RoomTileStrc;

    typedef struct D2DrlgLevelStrc D2DrlgLevelStrc, *PD2DrlgLevelStrc;

    typedef struct D2PresetUnitStrc D2PresetUnitStrc, *PD2PresetUnitStrc;

    typedef struct D2DrlgRoomExSub64LogicStrc D2DrlgRoomExSub64LogicStrc, *PD2DrlgRoomExSub64LogicStrc;

    typedef struct tagPOINT tagPOINT, *PtagPOINT;

    typedef struct D2PoolBlockStrc D2PoolBlockStrc, *PD2PoolBlockStrc;

    typedef struct D2PlayerWaypointsStrc D2PlayerWaypointsStrc, *PD2PlayerWaypointsStrc;

    typedef struct D2UnitDataPlayerArenaStrc D2UnitDataPlayerArenaStrc, *PD2UnitDataPlayerArenaStrc;

    typedef struct D2UnitDataPlayerPetsStrc D2UnitDataPlayerPetsStrc, *PD2UnitDataPlayerPetsStrc;

    typedef struct D2UnitDataPlayerInteractedNPCStrc D2UnitDataPlayerInteractedNPCStrc, *PD2UnitDataPlayerInteractedNPCStrc;

    typedef struct D2PartyDataStrc D2PartyDataStrc, *PD2PartyDataStrc;

    typedef struct D2MonsterDataComponents D2MonsterDataComponents, *PD2MonsterDataComponents;

    typedef enum D2MonsterDataMonType {
        MONTYPE_POSSESSED=32,
        MONTYPE_OTHER=1,
        MONTYPE_MINION=16,
        MONTYPE_GHOSTLY=64,
        MONTYPE_SUPERUNIQUE=2,
        MONTYPE_CHAMPION=4,
        MONTYPE_MULTISHOT=128,
        MONTYPE_UNIQUE=8
    } D2MonsterDataMonType;

    typedef struct D2MonsterAiGeneralStrc D2MonsterAiGeneralStrc, *PD2MonsterAiGeneralStrc;

    typedef struct D2AiParamStrc D2AiParamStrc, *PD2AiParamStrc;

    typedef struct D2MonsterModeStrc D2MonsterModeStrc, *PD2MonsterModeStrc;

    typedef struct D2MonsterAiStrc D2MonsterAiStrc, *PD2MonsterAiStrc;

    typedef struct D2ObjectsTxt D2ObjectsTxt, *PD2ObjectsTxt;

    typedef struct D2ShrinesTxt D2ShrinesTxt, *PD2ShrinesTxt;

    typedef struct D2CoordsShort D2CoordsShort, *PD2CoordsShort;

    typedef enum eD2ItemQuality {
        QUALITY_SUPERIOR=3,
        QUALITY_TAMPERED=9,
        QUALITY_NORMAL=2,
        QUALITY_UNIQUE=7,
        QUALITY_MAGIC=4,
        QUALITY_SET=5,
        QUALITY_LOW=1,
        QUALITY_RARE=6,
        QUALITY_CRAFTED=8,
        QUALITY_INVALID=0
    } eD2ItemQuality;

    typedef enum eD2ItemCmd {
        ITEMCMD_CURSOR_PICKUP_ITEM=64,
        ITEMCMD_BODYLOC_SWAP_ITEMS=2097152,
        ITEMCMD_INVENTORY_ADD_ITEM=128,
        ITEMCMD_BODYLOC_TAKE_ITEM=16,
        ITEMCMD_BELT_EXCHANGE_ITEM=4096,
        ITEMCMD_INVENTORY_MOVE_ITEM_TO_BODYLOC=32768,
        ITEMCMD_INVENTORY_PUT_ITEM=2,
        ITEMCMD_CURSOR_SET_ITEM=1048576,
        ITEMCMD_DELETE=1,
        ITEMCMD_BODYLOC_EXCHANGE_ITEM=32,
        ITEMCMD_BODYLOC_EXCHANGE_OPPOSITE_ITEM=65536,
        ITEMCMD_INVENTORY_TAKE_ITEM=4,
        ITEMCMD_BODYLOC_ADD_ITEM=512,
        ITEMCMD_80000=524288,
        ITEMCMD_BELT_ADD_ITEM=8192,
        ITEMCMD_CURSOR_STACK_ITEM=256,
        ITEMCMD_BELT_TAKE_ITEM=2048,
        ITEMCMD_INVENTORY_EXCHANGE_ITEM=262144,
        ITEMCMD_20000=131072,
        ITEMCMD_INVENTORY_SET_ITEM=16384,
        ITEMCMD_BELT_PUT_ITEM=1024,
        ITEMCMD_BODYLOC_PUT_ITEM=8
    } eD2ItemCmd;

    typedef enum eD2ItemFlag {
        ITEMFLAG_CRUDE=33554432,
        ITEMFLAG_ADDED=64,
        ITEMFLAG_SERVER=524288,
        ITEMFLAG_STAFFMODS=268435456,
        ITEMFLAG_SAVED=8388608,
        ITEMFLAG_CURSED=536870912,
        ITEMFLAG_TAKEN=128,
        ITEMFLAG_MONSTER=4096,
        ITEMFLAG_CURSOR=4,
        ITEMFLAG_REMOVED=32,
        ITEMFLAG_PLAYERNAME=16777216,
        ITEMFLAG_TAGGED=-2147483648,
        ITEMFLAG_ETHEREAL=4194304,
        ITEMFLAG_100000=1048576,
        ITEMFLAG_IDENTIFIED=16,
        ITEMFLAG_RELOAD=1,
        ITEMFLAG_IGNORE=8,
        ITEMFLAG_MAGICAL=134217728,
        ITEMFLAG_RESTRICT=262144,
        ITEMFLAG_DROW=1073741824,
        ITEMFLAG_COMPACT=2097152,
        ITEMFLAG_SOCKETED=2048,
        ITEMFLAG_DISABLED=16384,
        ITEMFLAG_RUNEWORD=67108864,
        ITEMFLAG_BEGINNER=131072,
        ITEMFLAG_HARDCORE=32768,
        ITEMFLAG_BROKEN=256,
        ITEMFLAG_BODYPART=65536,
        ITEMFLAG_SORTED=1024,
        ITEMFLAG_RESTORED=512,
        ITEMFLAG_BOUGHT=2,
        ITEMFLAG_NEW=8192
    } eD2ItemFlag;

    typedef enum eD2BodyLoc {
        BODYLOC_L_ARM=5,
        BODYLOC_TORSO=3,
        BODYLOC_HEAD=1,
        BODYLOC_NECK=2,
        BODYLOC_SWAPPED_R_ARM=11,
        BODYLOC_BELT=8,
        BODYLOC_FEET=9,
        BODYLOC_GLOVES=10,
        BODYLOC_L_RING=7,
        BODYLOC_R_ARM=4,
        BODYLOC_R_RING=6,
        NUM_BODYLOCS=13,
        BODYLOC_SWAPPED_L_ARM=12,
        BODYLOC_NONE=0
    } eD2BodyLoc;

    typedef enum INVENTORY_PAGE_PLAYER {
        INVENTORY_PAGE_PLAYER_HORADRIC_CUBE=3,
        INVENTORY_PAGE_PLAYER_TRADE_GIVE=2,
        INVENTORY_PAGE_PLAYER_STASH=4,
        INVENTORY_PAGE_PLAYER_INVENTORY=0,
        NUM_PLAYER_INVENTORY_PAGES=5,
        INVENTORY_PAGE_NONE=255,
        INVENTORY_PAGE_PLAYER_TRADE_RECEIVE=1
    } INVENTORY_PAGE_PLAYER;

    typedef enum eD2InventoryGrid {
        INVENTORY_GRID_BELT=1,
        NUM_INVENTORY_GRIDS=3,
        INVENTORY_GRID_BODYLOC=0,
        INVENTORY_GRID_INVENTORY=2
    } eD2InventoryGrid;

    typedef enum eD2InventoryGridType {
        INVENTORY_GRID_TYPE_INVENTORY=1,
        INVENTORY_GRID_TYPE_BELT=2,
        INVENTORY_GRID_TYPE_NONE=0,
        INVENTORY_GRID_TYPE_SWAPPED=4,
        INVENTORY_GRID_TYPE_BODYLOC=3,
        NUM_INVENTORY_GRID_TYPES=5
    } eD2InventoryGridType;

    typedef struct D2DrlgActWarpsInfoStrc D2DrlgActWarpsInfoStrc, *PD2DrlgActWarpsInfoStrc;

    typedef struct D2DrlgActMiscSubA0Strc D2DrlgActMiscSubA0Strc, *PD2DrlgActMiscSubA0Strc;

    typedef enum eD2StatListFlags {
        STATLIST_Extended=2147483648
    } eD2StatListFlags;

    typedef enum eD2States {
        STATE_convicted=29,
        STATE_battlecommand=51,
        STATE_passive_resistcold=182,
        STATE_weaken=19,
        STATE_prayer=34,
        STATE_skilldelay=121,
        STATE_summonresist=160,
        STATE_fetishaura=25,
        STATE_concentration=42,
        STATE_uberminion=184,
        STATE_shrine_skill=134,
        STATE_staminapot=180,
        STATE_corpse_noselect=118,
        STATE_innersight=17,
        STATE_maul=117,
        STATE_shrine_combat=129,
        STATE_holyshield=101,
        STATE_penetrate=67,
        STATE_red=91,
        STATE_taunt=27,
        STATE_avoid=66,
        STATE_shrine_resist_poison=133,
        STATE_inferno=12,
        STATE_recycled=154,
        STATE_pierce=69,
        STATE_shrine_armor=128,
        STATE_thunderstorm=38,
        STATE_blood_mana=114,
        STATE_energyshield=30,
        STATE_spiderlay=22,
        STATE_alignment=105,
        STATE_blessedaim=40,
        STATE_invis=146,
        STATE_resistmagic=6,
        STATE_lowerresist=61,
        STATE_resistcold=4,
        STATE_cloak_of_shadows=153,
        STATE_cloaked=156,
        STATE_justhit=86,
        STATE_stunned=21,
        STATE_dopplezon=63,
        STATE_blaze=13,
        STATE_decrepify=60,
        STATE_healthpot=100,
        STATE_terror=56,
        STATE_axemastery=75,
        STATE_swordmastery=74,
        STATE_warmth=70,
        STATE_fullsetgeneric=175,
        STATE_freeze=1,
        STATE_blue=90,
        STATE_wolf=139,
        STATE_openwounds=62,
        STATE_progressive_steal=123,
        STATE_feralrage=120,
        STATE_oaksage=149,
        STATE_thorns=36,
        STATE_lifetap=58,
        STATE_lightningbolt=39,
        STATE_hurricane=144,
        STATE_manapot=106,
        STATE_holywind=43,
        STATE_amplifydamage=9,
        STATE_frozenarmor=10,
        STATE_shrine_resist_fire=131,
        STATE_frenzy=94,
        STATE_thawing=179,
        STATE_corpse_nodraw=104,
        STATE_increasedstamina=80,
        STATE_shiverarmor=88,
        STATE_just_portaled=102,
        STATE_slowmissiles=87,
        STATE_shatter=107,
        STATE_barbs=147,
        STATE_defiance=37,
        STATE_runeword=171,
        STATE_whirlwind=174,
        STATE_meditation=48,
        STATE_death_delay=92,
        STATE_holywindcold=44,
        STATE_none=0,
        STATE_shrine_stamina=136,
        STATE_evade=68,
        STATE_corpseexp=173,
        STATE_debugcontrol=164,
        STATE_increasedspeed=82,
        STATE_cleansing=45,
        STATE_skel_mastery=97,
        STATE_stamina=41,
        STATE_golem_mastery=111,
        STATE_dragonflight=116,
        STATE_shrine_experience=137,
        STATE_attract=57,
        STATE_conversion=53,
        STATE_quickness=157,
        STATE_venomclaws=31,
        STATE_shrine_resist_cold=132,
        STATE_sourceunit=98,
        STATE_resistlight=5,
        STATE_shrine_mana_regen=135,
        STATE_wolverinecontrol=162,
        STATE_clawmastery=152,
        STATE_redemption=50,
        STATE_macemastery=76,
        STATE_vine_beast=150,
        STATE_enchant=16,
        STATE_might=33,
        STATE_pregnant=110,
        STATE_defense_curse=113,
        STATE_progressive_lightning=127,
        STATE_fanaticism=49,
        STATE_rabies=112,
        STATE_shadowwarrior=119,
        STATE_ironskin=81,
        STATE_weaponblock=155,
        STATE_barbscontrol=163,
        STATE_bladeshield=158,
        STATE_berserk=95,
        STATE_preventheal=52,
        STATE_monfrenzy=103,
        STATE_bonearmor=14,
        STATE_skill_move=18,
        STATE_passive_resistltng=183,
        STATE_battlecry=89,
        STATE_concentrate=15,
        STATE_fade=159,
        STATE_slowed=24,
        STATE_passive_resistfire=181,
        STATE_sanctuary=47,
        STATE_wolverine=148,
        STATE_battleorders=32,
        STATE_confuse=59,
        STATE_holyfire=35,
        STATE_progressive_cold=126,
        STATE_fingermagecurse=84,
        STATE_changeclass=142,
        STATE_lightningmastery=72,
        STATE_shout=26,
        STATE_criticalstrike=64,
        STATE_delerium=177,
        STATE_nomanaregen=85,
        STATE_shrine_resist_lightning=130,
        STATE_valkyrie=93,
        STATE_itemset3=167,
        STATE_antidote=178,
        STATE_itemset4=168,
        STATE_conversion_save=109,
        STATE_itemset1=165,
        STATE_itemset2=166,
        STATE_itemset5=169,
        STATE_revive=96,
        STATE_itemset6=170,
        STATE_burning=115,
        STATE_uninterruptable=54,
        STATE_chillingarmor=20,
        STATE_cold=11,
        STATE_conviction=28,
        STATE_progressive_damage=122,
        STATE_armageddon=145,
        STATE_bloodlust=141,
        STATE_progressive_fire=125,
        STATE_sync_warped=108,
        STATE_fenris_rage=138,
        STATE_playerbody=7,
        STATE_firemastery=71,
        STATE_poison=2,
        STATE_oaksagecontrol=161,
        STATE_resistfire=3,
        STATE_bear=140,
        STATE_ironmaiden=55,
        STATE_throwingmastery=78,
        STATE_dodge=65,
        STATE_naturalresistance=83,
        STATE_progressive_other=124,
        STATE_attached=143,
        STATE_holyshock=46,
        STATE_polearmmastery=77,
        STATE_redeemed=99,
        STATE_spearmastery=79,
        STATE_dimvision=23,
        STATE_cyclonearmor=151,
        STATE_monsterset=176,
        STATE_restinpeace=172,
        STATE_coldmastery=73,
        STATE_resistall=8
    } eD2States;


/* WARNING! conflicting data type names: /Diablo2/UNIT/STATLIST/D2StatInfoStrc - /Diablo2/UNIT/D2StatInfoStrc */

    typedef struct D2InventoryGridStrc D2InventoryGridStrc, *PD2InventoryGridStrc;

    typedef struct D2SkillsTxt D2SkillsTxt, *PD2SkillsTxt;

    typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

    typedef struct _LIST_ENTRY LIST_ENTRY;

    typedef struct D2EventEntryStrc D2EventEntryStrc, *PD2EventEntryStrc;

    typedef struct D2QuestGUIDStrc D2QuestGUIDStrc, *PD2QuestGUIDStrc;

    typedef struct D2QuestDataCallbacksStrc D2QuestDataCallbacksStrc, *PD2QuestDataCallbacksStrc;

    typedef struct D2QuestArgStrc D2QuestArgStrc, *PD2QuestArgStrc;

    typedef struct D2NPCMessageTableStrc D2NPCMessageTableStrc, *PD2NPCMessageTableStrc;

    typedef enum eD2Quests {
        QUEST_ForgottenTower=5,
        QUEST_LamEsensTome=17,
        QUEST_SistersBurialGrounds=2,
        QUEST_TheGoldenBird=20,
        QUEST_TheArcaneSanctuary=12,
        QUEST_Respec=41,
        QUEST_TerrorsEnd=26,
        QUEST_KhalimsWill=18,
        QUEST_RescueOnMountArreat=36,
        QUEST_RiteOfPassage=39,
        QUEST_HellsForge=27,
        QUEST_TheFallenAngel=25,
        QUEST_BladeOfTheOldReligion=19,
        QUEST_SiegeOnHaggorath=35,
        QUEST_PrisonOfIce=37,
        QUEST_AbleGoToAct5=28,
        QUEST_AbleGoToAct4=23,
        QUEST_AbleGoToAct3=15,
        QUEST_AbleGoToAct2=7,
        QUEST_DenOfEvil=1,
        QUEST_TheSevenTombs=14,
        QUEST_SpokeToWarriv=0,
        QUEST_TheTaintedSun=11,
        QUEST_TheGuardian=22,
        QUEST_TheBlackenedTemple=21,
        QUEST_ToolsOfTheTrade=3,
        QUEST_SpokeToTyrael=24,
        QUEST_TheSearchForCain=4,
        QUEST_TheSummoner=13,
        QUEST_SpokeToHratli=16,
        QUEST_RadamentsLair=9,
        QUEST_BetrayalOfHaggorath=38,
        QUEST_EveOfDestruction=40,
        QUEST_SpokeToJerhyn=8,
        QUEST_SistersToTheSlaughter=6,
        QUEST_TheHoradricStaff=10
    } eD2Quests;

    typedef struct D2GameNpcStrc D2GameNpcStrc, *PD2GameNpcStrc;

    typedef struct D2DrlgRoomExDataOutRoom D2DrlgRoomExDataOutRoom, *PD2DrlgRoomExDataOutRoom;

    typedef struct D2DrlgRoomExDataPreset D2DrlgRoomExDataPreset, *PD2DrlgRoomExDataPreset;

    typedef union D2DrlgLevelDataUnion D2DrlgLevelDataUnion, *PD2DrlgLevelDataUnion;

    typedef struct D2DrlgLevelSub1B0Strc D2DrlgLevelSub1B0Strc, *PD2DrlgLevelSub1B0Strc;

    typedef struct D2DrlgRoomExSub64Sub30LogicStrc D2DrlgRoomExSub64Sub30LogicStrc, *PD2DrlgRoomExSub64Sub30LogicStrc;

    typedef struct D2PetStrc D2PetStrc, *PD2PetStrc;

    typedef struct D2MonStatsTxt D2MonStatsTxt, *PD2MonStatsTxt;

    typedef struct D2MonStats2Txt D2MonStats2Txt, *PD2MonStats2Txt;

    typedef struct D2MonsterAiCmdStrc D2MonsterAiCmdStrc, *PD2MonsterAiCmdStrc;

    typedef struct D2MonsterDataMinionList D2MonsterDataMinionList, *PD2MonsterDataMinionList;

    typedef wchar_t WCHAR;

    typedef union uD2QuestArgStrcUnion uD2QuestArgStrcUnion, *PuD2QuestArgStrcUnion;

    typedef struct D2NPCMessageStrc D2NPCMessageStrc, *PD2NPCMessageStrc;

    typedef struct D2DrlgRoomExDataPresetWorldCoordinatesBurialGrounds D2DrlgRoomExDataPresetWorldCoordinatesBurialGrounds, *PD2DrlgRoomExDataPresetWorldCoordinatesBurialGrounds;

    typedef struct D2LvlMazeTxt D2LvlMazeTxt, *PD2LvlMazeTxt;

    typedef struct D2DrlgLevelDataPresetArea D2DrlgLevelDataPresetArea, *PD2DrlgLevelDataPresetArea;

    typedef struct D2DrlgLevelDataWildernessLevel D2DrlgLevelDataWildernessLevel, *PD2DrlgLevelDataWildernessLevel;

    typedef struct D2LvlPrestTxt D2LvlPrestTxt, *PD2LvlPrestTxt;

    typedef struct D2MonStatsTxtTC D2MonStatsTxtTC, *PD2MonStatsTxtTC;

    typedef struct D2QuestArgStrcUnion1 D2QuestArgStrcUnion1, *PD2QuestArgStrcUnion1;

    typedef struct D2QuestArgStrcUnion2 D2QuestArgStrcUnion2, *PD2QuestArgStrcUnion2;

    typedef struct D2QuestArgStrcUnion3 D2QuestArgStrcUnion3, *PD2QuestArgStrcUnion3;

    struct D2QuestArgStrcUnion3 {
        int nOldLevel;
        int nNewLevel;
    };

    struct D2DrlgCoordsStrc {
        int nRealOffsetX;
        int nRealOffsetY;
        int nSizeX;
        int nSizeY;
    };

    struct D2QuestArgStrcUnion1 {
        pointer pTextControl;
        int field_0x4;
    };

    struct D2UnitNodeStrc {
        struct D2UnitStrc * pUnit;
        int field_0x4;
        struct D2UnitNodeStrc * pPrev; /* Created by retype action */
        struct D2UnitNodeStrc * pNext; /* Created by retype action */
    };

    struct D2QuestArgStrcUnion2 {
        short nNPCNo;
        undefined field_0x2;
        undefined field_0x3;
        short nMessageIndex;
        undefined field_0x6;
        undefined field_0x7;
    };

    struct D2DrlgActSub18Strc {
        int field_0x0;
        int field_0x4;
        int field_0x8;
        int field_0xc;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        uint dwFlags;
        int field_0x18;
        undefined4 field_0x1c;
        struct D2DrlgActSub18Strc * pNext; /* Created by retype action */
        undefined4 field_0x24;
        byte field_0x28;
        byte field_0x29;
        byte field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
    };

    struct D2UnitDataItemStrc {
        enum eD2ItemQuality eD2ItemQuality;
        struct D2SeedStrc sSeed;
        int nPlayerGUID;
        int nModSeed;
        enum eD2ItemCmd eD2ItemCmd;
        enum eD2ItemFlag eD2ItemFlag;
        int field_0x1c;
        int field_0x20;
        int nActionStamp;
        int nFileIndex;
        int nItemLevel;
        short wItemVersion;
        short wRarePrefix;
        short wRareSuffix;
        short wAutoMagic;
        short wMagicPrefix[3];
        short wMagicSuffix[3];
        enum eD2BodyLoc eBodyLoc;
        enum INVENTORY_PAGE_PLAYER ePage;
        undefined1 eExchangePage;
        undefined1 ePreviousPage;
        byte nEarLevel;
        bool bVariant;
        char szPlayerName[16];
        short wRuneWordIndex;
        struct D2InventoryStrc * pInventory;
        struct D2UnitStrc * pPrevItem;
        struct D2UnitStrc * pNextItem;
        enum eD2InventoryGrid eD2InventoryGrid;
        enum eD2InventoryGridType eD2InventoryGridType;
        undefined field_0x6a;
        undefined field_0x6b;
        struct D2UnitStrc * pPrevItemInPage;
        struct D2UnitStrc * pNextItemInPage;
    };

    struct D2MonsterRegionFieldStrc {
        short spawn;
        byte field_0x2;
        undefined field_0x3;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
    };

    struct D2DrlgRoomExSub4CRoomTileStrc { /* field 0x4C of D2DrlgRoomExStrc */
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        struct D2DrlgRoomExSub4CRoomTileStrc * pRoomTileNext;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
    };

    struct D2MonsterAiCmdStrc {
        struct D2MonsterAiCmdStrc * pNext;
        struct D2MonsterAiCmdStrc * pPrev;
        int nCmdArg[5];
    };

    struct D2ServerCmdStrc {
        int nBufferArraySize;
        int nUsedBuffersCount;
        undefined4 field_0x8;
        char * aBuffers;
    };

    struct D2ServerUnitInactiveStrc {
        undefined4 field_0x0;
        struct D2DrlgRoomCoordsStrc * field_0x4;
        undefined4 field_0x8;
        undefined4 field_0xc;
        undefined4 field_0x10;
        struct D2ServerUnitInactiveStrc * pNext;
    };

    struct D2UnitDataPlayerInteractedNPCStrc {
        struct D2BitBufferStrc * pIntro;
        struct D2BitBufferStrc * pIntro2;
        struct D2BitBufferStrc * pIntro3;
    };

    struct D2UnitDataObjectStrc {
        struct D2ObjectsTxt * pTxtObjectsLine;
        byte nShrineId;
        byte field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        struct D2ShrinesTxt * pTxtShrinesLine;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
    };

    struct D2PacketListStrc {
        int size;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        undefined field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        undefined field_0x48;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        undefined field_0x50;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
    };

    struct D2StatInfoStrc {
        short wSubIndex;
        short wStatIndex;
        int nStatValue;
    };

    struct D2DrlgRoomCoordsStrc {
        int dwXStart;
        int dwYStart;
        int dwXSize;
        int dwYSize;
        short wTileX;
        short field_0x12;
        short wTileY;
        short field_0x16;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
    };

    struct D2ShrinesTxt {
        byte Code;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        int Arg[2];
        int DurationInFrames;
        byte ResetTimeInMinutes;
        byte rarity;
        char ViewName[32];
        char niftyphrase[128];
        char effectclass;
        undefined field_0xb3;
        int LevelMin;
    };

    struct D2DrlgLevelDataPresetArea {
        struct D2DrlgLevelSub1B0Strc * pDrlgLevelSub1B0Strc;
        int nMapVersion;
    };

    struct D2MonsterDataMinionList {
        int nMinionGUID;
        struct D2MonsterDataMinionList * pNext;
    };


    struct D2DrlgRoomExDataPresetWorldCoordinatesBurialGrounds {
        POINT PointsList[6]; /* My guess is thats a list of points where BloodRaven is moving to */
    };

    struct D2InventoryGridStrc {
        struct D2UnitStrc * pItem[13];
    };

    struct D2EventControlStrc {
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        undefined field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        undefined field_0x48;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        undefined field_0x50;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
        undefined field_0x54;
        undefined field_0x55;
        undefined field_0x56;
        undefined field_0x57;
        undefined field_0x58;
        undefined field_0x59;
        undefined field_0x5a;
        undefined field_0x5b;
        undefined field_0x5c;
        undefined field_0x5d;
        undefined field_0x5e;
        undefined field_0x5f;
        undefined field_0x60;
        undefined field_0x61;
        undefined field_0x62;
        undefined field_0x63;
        undefined field_0x64;
        undefined field_0x65;
        undefined field_0x66;
        undefined field_0x67;
        undefined field_0x68;
        undefined field_0x69;
        undefined field_0x6a;
        undefined field_0x6b;
        undefined field_0x6c;
        undefined field_0x6d;
        undefined field_0x6e;
        undefined field_0x6f;
        undefined field_0x70;
        undefined field_0x71;
        undefined field_0x72;
        undefined field_0x73;
        undefined field_0x74;
        undefined field_0x75;
        undefined field_0x76;
        undefined field_0x77;
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        undefined field_0x80;
        undefined field_0x81;
        undefined field_0x82;
        undefined field_0x83;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        undefined field_0x90;
        undefined field_0x91;
        undefined field_0x92;
        undefined field_0x93;
        undefined field_0x94;
        undefined field_0x95;
        undefined field_0x96;
        undefined field_0x97;
        undefined field_0x98;
        undefined field_0x99;
        undefined field_0x9a;
        undefined field_0x9b;
        undefined field_0x9c;
        undefined field_0x9d;
        undefined field_0x9e;
        undefined field_0x9f;
        undefined field_0xa0;
        undefined field_0xa1;
        undefined field_0xa2;
        undefined field_0xa3;
        undefined field_0xa4;
        undefined field_0xa5;
        undefined field_0xa6;
        undefined field_0xa7;
        undefined field_0xa8;
        undefined field_0xa9;
        undefined field_0xaa;
        undefined field_0xab;
        undefined field_0xac;
        undefined field_0xad;
        undefined field_0xae;
        undefined field_0xaf;
        undefined field_0xb0;
        undefined field_0xb1;
        undefined field_0xb2;
        undefined field_0xb3;
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        undefined field_0xb8;
        undefined field_0xb9;
        undefined field_0xba;
        undefined field_0xbb;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        undefined field_0xc4;
        undefined field_0xc5;
        undefined field_0xc6;
        undefined field_0xc7;
        undefined field_0xc8;
        undefined field_0xc9;
        undefined field_0xca;
        undefined field_0xcb;
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        undefined field_0xd0;
        undefined field_0xd1;
        undefined field_0xd2;
        undefined field_0xd3;
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        undefined field_0xd8;
        undefined field_0xd9;
        undefined field_0xda;
        undefined field_0xdb;
        undefined field_0xdc;
        undefined field_0xdd;
        undefined field_0xde;
        undefined field_0xdf;
        undefined field_0xe0;
        undefined field_0xe1;
        undefined field_0xe2;
        undefined field_0xe3;
        undefined field_0xe4;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        undefined field_0xe8;
        undefined field_0xe9;
        undefined field_0xea;
        undefined field_0xeb;
        undefined field_0xec;
        undefined field_0xed;
        undefined field_0xee;
        undefined field_0xef;
        undefined field_0xf0;
        undefined field_0xf1;
        undefined field_0xf2;
        undefined field_0xf3;
        undefined field_0xf4;
        undefined field_0xf5;
        undefined field_0xf6;
        undefined field_0xf7;
        undefined field_0xf8;
        undefined field_0xf9;
        undefined field_0xfa;
        undefined field_0xfb;
        undefined field_0xfc;
        undefined field_0xfd;
        undefined field_0xfe;
        undefined field_0xff;
        undefined field_0x100;
        undefined field_0x101;
        undefined field_0x102;
        undefined field_0x103;
        undefined field_0x104;
        undefined field_0x105;
        undefined field_0x106;
        undefined field_0x107;
        undefined field_0x108;
        undefined field_0x109;
        undefined field_0x10a;
        undefined field_0x10b;
        undefined field_0x10c;
        undefined field_0x10d;
        undefined field_0x10e;
        undefined field_0x10f;
        undefined field_0x110;
        undefined field_0x111;
        undefined field_0x112;
        undefined field_0x113;
        undefined field_0x114;
        undefined field_0x115;
        undefined field_0x116;
        undefined field_0x117;
        undefined field_0x118;
        undefined field_0x119;
        undefined field_0x11a;
        undefined field_0x11b;
        undefined field_0x11c;
        undefined field_0x11d;
        undefined field_0x11e;
        undefined field_0x11f;
        undefined field_0x120;
        undefined field_0x121;
        undefined field_0x122;
        undefined field_0x123;
        undefined field_0x124;
        undefined field_0x125;
        undefined field_0x126;
        undefined field_0x127;
        undefined field_0x128;
        undefined field_0x129;
        undefined field_0x12a;
        undefined field_0x12b;
        undefined field_0x12c;
        undefined field_0x12d;
        undefined field_0x12e;
        undefined field_0x12f;
        undefined field_0x130;
        undefined field_0x131;
        undefined field_0x132;
        undefined field_0x133;
        undefined field_0x134;
        undefined field_0x135;
        undefined field_0x136;
        undefined field_0x137;
        undefined field_0x138;
        undefined field_0x139;
        undefined field_0x13a;
        undefined field_0x13b;
        undefined field_0x13c;
        undefined field_0x13d;
        undefined field_0x13e;
        undefined field_0x13f;
        undefined field_0x140;
        undefined field_0x141;
        undefined field_0x142;
        undefined field_0x143;
        undefined field_0x144;
        undefined field_0x145;
        undefined field_0x146;
        undefined field_0x147;
        undefined field_0x148;
        undefined field_0x149;
        undefined field_0x14a;
        undefined field_0x14b;
        undefined field_0x14c;
        undefined field_0x14d;
        undefined field_0x14e;
        undefined field_0x14f;
        undefined field_0x150;
        undefined field_0x151;
        undefined field_0x152;
        undefined field_0x153;
        undefined field_0x154;
        undefined field_0x155;
        undefined field_0x156;
        undefined field_0x157;
        undefined field_0x158;
        undefined field_0x159;
        undefined field_0x15a;
        undefined field_0x15b;
        undefined field_0x15c;
        undefined field_0x15d;
        undefined field_0x15e;
        undefined field_0x15f;
        undefined field_0x160;
        undefined field_0x161;
        undefined field_0x162;
        undefined field_0x163;
        undefined field_0x164;
        undefined field_0x165;
        undefined field_0x166;
        undefined field_0x167;
        undefined field_0x168;
        undefined field_0x169;
        undefined field_0x16a;
        undefined field_0x16b;
        undefined field_0x16c;
        undefined field_0x16d;
        undefined field_0x16e;
        undefined field_0x16f;
        undefined field_0x170;
        undefined field_0x171;
        undefined field_0x172;
        undefined field_0x173;
        undefined field_0x174;
        undefined field_0x175;
        undefined field_0x176;
        undefined field_0x177;
        undefined field_0x178;
        undefined field_0x179;
        undefined field_0x17a;
        undefined field_0x17b;
        undefined field_0x17c;
        undefined field_0x17d;
        undefined field_0x17e;
        undefined field_0x17f;
        undefined field_0x180;
        undefined field_0x181;
        undefined field_0x182;
        undefined field_0x183;
        undefined field_0x184;
        undefined field_0x185;
        undefined field_0x186;
        undefined field_0x187;
        undefined field_0x188;
        undefined field_0x189;
        undefined field_0x18a;
        undefined field_0x18b;
        undefined field_0x18c;
        undefined field_0x18d;
        undefined field_0x18e;
        undefined field_0x18f;
        undefined field_0x190;
        undefined field_0x191;
        undefined field_0x192;
        undefined field_0x193;
        undefined field_0x194;
        undefined field_0x195;
        undefined field_0x196;
        undefined field_0x197;
        undefined field_0x198;
        undefined field_0x199;
        undefined field_0x19a;
        undefined field_0x19b;
        undefined field_0x19c;
        undefined field_0x19d;
        undefined field_0x19e;
        undefined field_0x19f;
        undefined field_0x1a0;
        undefined field_0x1a1;
        undefined field_0x1a2;
        undefined field_0x1a3;
        undefined field_0x1a4;
        undefined field_0x1a5;
        undefined field_0x1a6;
        undefined field_0x1a7;
        undefined field_0x1a8;
        undefined field_0x1a9;
        undefined field_0x1aa;
        undefined field_0x1ab;
        undefined field_0x1ac;
        undefined field_0x1ad;
        undefined field_0x1ae;
        undefined field_0x1af;
        undefined field_0x1b0;
        undefined field_0x1b1;
        undefined field_0x1b2;
        undefined field_0x1b3;
        undefined field_0x1b4;
        undefined field_0x1b5;
        undefined field_0x1b6;
        undefined field_0x1b7;
        undefined field_0x1b8;
        undefined field_0x1b9;
        undefined field_0x1ba;
        undefined field_0x1bb;
        undefined field_0x1bc;
        undefined field_0x1bd;
        undefined field_0x1be;
        undefined field_0x1bf;
        undefined field_0x1c0;
        undefined field_0x1c1;
        undefined field_0x1c2;
        undefined field_0x1c3;
        undefined field_0x1c4;
        undefined field_0x1c5;
        undefined field_0x1c6;
        undefined field_0x1c7;
        undefined field_0x1c8;
        undefined field_0x1c9;
        undefined field_0x1ca;
        undefined field_0x1cb;
        undefined field_0x1cc;
        undefined field_0x1cd;
        undefined field_0x1ce;
        undefined field_0x1cf;
        undefined field_0x1d0;
        undefined field_0x1d1;
        undefined field_0x1d2;
        undefined field_0x1d3;
        undefined field_0x1d4;
        undefined field_0x1d5;
        undefined field_0x1d6;
        undefined field_0x1d7;
        undefined field_0x1d8;
        undefined field_0x1d9;
        undefined field_0x1da;
        undefined field_0x1db;
        undefined field_0x1dc;
        undefined field_0x1dd;
        undefined field_0x1de;
        undefined field_0x1df;
        undefined field_0x1e0;
        undefined field_0x1e1;
        undefined field_0x1e2;
        undefined field_0x1e3;
        undefined field_0x1e4;
        undefined field_0x1e5;
        undefined field_0x1e6;
        undefined field_0x1e7;
        undefined field_0x1e8;
        undefined field_0x1e9;
        undefined field_0x1ea;
        undefined field_0x1eb;
        undefined field_0x1ec;
        undefined field_0x1ed;
        undefined field_0x1ee;
        undefined field_0x1ef;
        undefined field_0x1f0;
        undefined field_0x1f1;
        undefined field_0x1f2;
        undefined field_0x1f3;
        undefined field_0x1f4;
        undefined field_0x1f5;
        undefined field_0x1f6;
        undefined field_0x1f7;
        undefined field_0x1f8;
        undefined field_0x1f9;
        undefined field_0x1fa;
        undefined field_0x1fb;
        undefined field_0x1fc;
        undefined field_0x1fd;
        undefined field_0x1fe;
        undefined field_0x1ff;
        undefined field_0x200;
        undefined field_0x201;
        undefined field_0x202;
        undefined field_0x203;
        undefined field_0x204;
        undefined field_0x205;
        undefined field_0x206;
        undefined field_0x207;
        undefined field_0x208;
        undefined field_0x209;
        undefined field_0x20a;
        undefined field_0x20b;
        undefined field_0x20c;
        undefined field_0x20d;
        undefined field_0x20e;
        undefined field_0x20f;
        undefined field_0x210;
        undefined field_0x211;
        undefined field_0x212;
        undefined field_0x213;
        undefined field_0x214;
        undefined field_0x215;
        undefined field_0x216;
        undefined field_0x217;
        undefined field_0x218;
        undefined field_0x219;
        undefined field_0x21a;
        undefined field_0x21b;
        undefined field_0x21c;
        undefined field_0x21d;
        undefined field_0x21e;
        undefined field_0x21f;
        undefined field_0x220;
        undefined field_0x221;
        undefined field_0x222;
        undefined field_0x223;
        undefined field_0x224;
        undefined field_0x225;
        undefined field_0x226;
        undefined field_0x227;
        undefined field_0x228;
        undefined field_0x229;
        undefined field_0x22a;
        undefined field_0x22b;
        undefined field_0x22c;
        undefined field_0x22d;
        undefined field_0x22e;
        undefined field_0x22f;
        undefined field_0x230;
        undefined field_0x231;
        undefined field_0x232;
        undefined field_0x233;
        undefined field_0x234;
        undefined field_0x235;
        undefined field_0x236;
        undefined field_0x237;
        undefined field_0x238;
        undefined field_0x239;
        undefined field_0x23a;
        undefined field_0x23b;
        undefined field_0x23c;
        undefined field_0x23d;
        undefined field_0x23e;
        undefined field_0x23f;
        undefined field_0x240;
        undefined field_0x241;
        undefined field_0x242;
        undefined field_0x243;
        undefined field_0x244;
        undefined field_0x245;
        undefined field_0x246;
        undefined field_0x247;
        undefined field_0x248;
        undefined field_0x249;
        undefined field_0x24a;
        undefined field_0x24b;
        undefined field_0x24c;
        undefined field_0x24d;
        undefined field_0x24e;
        undefined field_0x24f;
        undefined field_0x250;
        undefined field_0x251;
        undefined field_0x252;
        undefined field_0x253;
        undefined field_0x254;
        undefined field_0x255;
        undefined field_0x256;
        undefined field_0x257;
        undefined field_0x258;
        undefined field_0x259;
        undefined field_0x25a;
        undefined field_0x25b;
        undefined field_0x25c;
        undefined field_0x25d;
        undefined field_0x25e;
        undefined field_0x25f;
        undefined field_0x260;
        undefined field_0x261;
        undefined field_0x262;
        undefined field_0x263;
        undefined field_0x264;
        undefined field_0x265;
        undefined field_0x266;
        undefined field_0x267;
        undefined field_0x268;
        undefined field_0x269;
        undefined field_0x26a;
        undefined field_0x26b;
        undefined field_0x26c;
        undefined field_0x26d;
        undefined field_0x26e;
        undefined field_0x26f;
        undefined field_0x270;
        undefined field_0x271;
        undefined field_0x272;
        undefined field_0x273;
        undefined field_0x274;
        undefined field_0x275;
        undefined field_0x276;
        undefined field_0x277;
        undefined field_0x278;
        undefined field_0x279;
        undefined field_0x27a;
        undefined field_0x27b;
        undefined field_0x27c;
        undefined field_0x27d;
        undefined field_0x27e;
        undefined field_0x27f;
        undefined field_0x280;
        undefined field_0x281;
        undefined field_0x282;
        undefined field_0x283;
        undefined field_0x284;
        undefined field_0x285;
        undefined field_0x286;
        undefined field_0x287;
        undefined field_0x288;
        undefined field_0x289;
        undefined field_0x28a;
        undefined field_0x28b;
        undefined field_0x28c;
        undefined field_0x28d;
        undefined field_0x28e;
        undefined field_0x28f;
        undefined field_0x290;
        undefined field_0x291;
        undefined field_0x292;
        undefined field_0x293;
        undefined field_0x294;
        undefined field_0x295;
        undefined field_0x296;
        undefined field_0x297;
        undefined field_0x298;
        undefined field_0x299;
        undefined field_0x29a;
        undefined field_0x29b;
        undefined field_0x29c;
        undefined field_0x29d;
        undefined field_0x29e;
        undefined field_0x29f;
        undefined field_0x2a0;
        undefined field_0x2a1;
        undefined field_0x2a2;
        undefined field_0x2a3;
        undefined field_0x2a4;
        undefined field_0x2a5;
        undefined field_0x2a6;
        undefined field_0x2a7;
        undefined field_0x2a8;
        undefined field_0x2a9;
        undefined field_0x2aa;
        undefined field_0x2ab;
        undefined field_0x2ac;
        undefined field_0x2ad;
        undefined field_0x2ae;
        undefined field_0x2af;
        undefined field_0x2b0;
        undefined field_0x2b1;
        undefined field_0x2b2;
        undefined field_0x2b3;
        undefined field_0x2b4;
        undefined field_0x2b5;
        undefined field_0x2b6;
        undefined field_0x2b7;
        undefined field_0x2b8;
        undefined field_0x2b9;
        undefined field_0x2ba;
        undefined field_0x2bb;
        undefined field_0x2bc;
        undefined field_0x2bd;
        undefined field_0x2be;
        undefined field_0x2bf;
        undefined field_0x2c0;
        undefined field_0x2c1;
        undefined field_0x2c2;
        undefined field_0x2c3;
        undefined field_0x2c4;
        undefined field_0x2c5;
        undefined field_0x2c6;
        undefined field_0x2c7;
        undefined field_0x2c8;
        undefined field_0x2c9;
        undefined field_0x2ca;
        undefined field_0x2cb;
        undefined field_0x2cc;
        undefined field_0x2cd;
        undefined field_0x2ce;
        undefined field_0x2cf;
        undefined field_0x2d0;
        undefined field_0x2d1;
        undefined field_0x2d2;
        undefined field_0x2d3;
        undefined field_0x2d4;
        undefined field_0x2d5;
        undefined field_0x2d6;
        undefined field_0x2d7;
        undefined field_0x2d8;
        undefined field_0x2d9;
        undefined field_0x2da;
        undefined field_0x2db;
        undefined field_0x2dc;
        undefined field_0x2dd;
        undefined field_0x2de;
        undefined field_0x2df;
        undefined field_0x2e0;
        undefined field_0x2e1;
        undefined field_0x2e2;
        undefined field_0x2e3;
        undefined field_0x2e4;
        undefined field_0x2e5;
        undefined field_0x2e6;
        undefined field_0x2e7;
        undefined field_0x2e8;
        undefined field_0x2e9;
        undefined field_0x2ea;
        undefined field_0x2eb;
        undefined field_0x2ec;
        undefined field_0x2ed;
        undefined field_0x2ee;
        undefined field_0x2ef;
        undefined field_0x2f0;
        undefined field_0x2f1;
        undefined field_0x2f2;
        undefined field_0x2f3;
        undefined field_0x2f4;
        undefined field_0x2f5;
        undefined field_0x2f6;
        undefined field_0x2f7;
        undefined field_0x2f8;
        undefined field_0x2f9;
        undefined field_0x2fa;
        undefined field_0x2fb;
        undefined field_0x2fc;
        undefined field_0x2fd;
        undefined field_0x2fe;
        undefined field_0x2ff;
        undefined field_0x300;
        undefined field_0x301;
        undefined field_0x302;
        undefined field_0x303;
        undefined field_0x304;
        undefined field_0x305;
        undefined field_0x306;
        undefined field_0x307;
        undefined field_0x308;
        undefined field_0x309;
        undefined field_0x30a;
        undefined field_0x30b;
        undefined field_0x30c;
        undefined field_0x30d;
        undefined field_0x30e;
        undefined field_0x30f;
        undefined field_0x310;
        undefined field_0x311;
        undefined field_0x312;
        undefined field_0x313;
        undefined field_0x314;
        undefined field_0x315;
        undefined field_0x316;
        undefined field_0x317;
        undefined field_0x318;
        undefined field_0x319;
        undefined field_0x31a;
        undefined field_0x31b;
        undefined field_0x31c;
        undefined field_0x31d;
        undefined field_0x31e;
        undefined field_0x31f;
        undefined field_0x320;
        undefined field_0x321;
        undefined field_0x322;
        undefined field_0x323;
        undefined field_0x324;
        undefined field_0x325;
        undefined field_0x326;
        undefined field_0x327;
        undefined field_0x328;
        undefined field_0x329;
        undefined field_0x32a;
        undefined field_0x32b;
        undefined field_0x32c;
        undefined field_0x32d;
        undefined field_0x32e;
        undefined field_0x32f;
        undefined field_0x330;
        undefined field_0x331;
        undefined field_0x332;
        undefined field_0x333;
        undefined field_0x334;
        undefined field_0x335;
        undefined field_0x336;
        undefined field_0x337;
        undefined field_0x338;
        undefined field_0x339;
        undefined field_0x33a;
        undefined field_0x33b;
        undefined field_0x33c;
        undefined field_0x33d;
        undefined field_0x33e;
        undefined field_0x33f;
        undefined field_0x340;
        undefined field_0x341;
        undefined field_0x342;
        undefined field_0x343;
        undefined field_0x344;
        undefined field_0x345;
        undefined field_0x346;
        undefined field_0x347;
        undefined field_0x348;
        undefined field_0x349;
        undefined field_0x34a;
        undefined field_0x34b;
        undefined field_0x34c;
        undefined field_0x34d;
        undefined field_0x34e;
        undefined field_0x34f;
        undefined field_0x350;
        undefined field_0x351;
        undefined field_0x352;
        undefined field_0x353;
        undefined field_0x354;
        undefined field_0x355;
        undefined field_0x356;
        undefined field_0x357;
        undefined field_0x358;
        undefined field_0x359;
        undefined field_0x35a;
        undefined field_0x35b;
        undefined field_0x35c;
        undefined field_0x35d;
        undefined field_0x35e;
        undefined field_0x35f;
        undefined field_0x360;
        undefined field_0x361;
        undefined field_0x362;
        undefined field_0x363;
        undefined field_0x364;
        undefined field_0x365;
        undefined field_0x366;
        undefined field_0x367;
        undefined field_0x368;
        undefined field_0x369;
        undefined field_0x36a;
        undefined field_0x36b;
        undefined field_0x36c;
        undefined field_0x36d;
        undefined field_0x36e;
        undefined field_0x36f;
        undefined field_0x370;
        undefined field_0x371;
        undefined field_0x372;
        undefined field_0x373;
        undefined field_0x374;
        undefined field_0x375;
        undefined field_0x376;
        undefined field_0x377;
        undefined field_0x378;
        undefined field_0x379;
        undefined field_0x37a;
        undefined field_0x37b;
        undefined field_0x37c;
        undefined field_0x37d;
        undefined field_0x37e;
        undefined field_0x37f;
        undefined field_0x380;
        undefined field_0x381;
        undefined field_0x382;
        undefined field_0x383;
        undefined field_0x384;
        undefined field_0x385;
        undefined field_0x386;
        undefined field_0x387;
        undefined field_0x388;
        undefined field_0x389;
        undefined field_0x38a;
        undefined field_0x38b;
        undefined field_0x38c;
        undefined field_0x38d;
        undefined field_0x38e;
        undefined field_0x38f;
        undefined field_0x390;
        undefined field_0x391;
        undefined field_0x392;
        undefined field_0x393;
        undefined field_0x394;
        undefined field_0x395;
        undefined field_0x396;
        undefined field_0x397;
        undefined field_0x398;
        undefined field_0x399;
        undefined field_0x39a;
        undefined field_0x39b;
        undefined field_0x39c;
        undefined field_0x39d;
        undefined field_0x39e;
        undefined field_0x39f;
        undefined field_0x3a0;
        undefined field_0x3a1;
        undefined field_0x3a2;
        undefined field_0x3a3;
        undefined field_0x3a4;
        undefined field_0x3a5;
        undefined field_0x3a6;
        undefined field_0x3a7;
        undefined field_0x3a8;
        undefined field_0x3a9;
        undefined field_0x3aa;
        undefined field_0x3ab;
        undefined field_0x3ac;
        undefined field_0x3ad;
        undefined field_0x3ae;
        undefined field_0x3af;
        undefined field_0x3b0;
        undefined field_0x3b1;
        undefined field_0x3b2;
        undefined field_0x3b3;
        undefined field_0x3b4;
        undefined field_0x3b5;
        undefined field_0x3b6;
        undefined field_0x3b7;
        undefined field_0x3b8;
        undefined field_0x3b9;
        undefined field_0x3ba;
        undefined field_0x3bb;
        undefined field_0x3bc;
        undefined field_0x3bd;
        undefined field_0x3be;
        undefined field_0x3bf;
        undefined field_0x3c0;
        undefined field_0x3c1;
        undefined field_0x3c2;
        undefined field_0x3c3;
        undefined field_0x3c4;
        undefined field_0x3c5;
        undefined field_0x3c6;
        undefined field_0x3c7;
        undefined field_0x3c8;
        undefined field_0x3c9;
        undefined field_0x3ca;
        undefined field_0x3cb;
        undefined field_0x3cc;
        undefined field_0x3cd;
        undefined field_0x3ce;
        undefined field_0x3cf;
        undefined field_0x3d0;
        undefined field_0x3d1;
        undefined field_0x3d2;
        undefined field_0x3d3;
        undefined field_0x3d4;
        undefined field_0x3d5;
        undefined field_0x3d6;
        undefined field_0x3d7;
        undefined field_0x3d8;
        undefined field_0x3d9;
        undefined field_0x3da;
        undefined field_0x3db;
        undefined field_0x3dc;
        undefined field_0x3dd;
        undefined field_0x3de;
        undefined field_0x3df;
        undefined field_0x3e0;
        undefined field_0x3e1;
        undefined field_0x3e2;
        undefined field_0x3e3;
        undefined field_0x3e4;
        undefined field_0x3e5;
        undefined field_0x3e6;
        undefined field_0x3e7;
        undefined field_0x3e8;
        undefined field_0x3e9;
        undefined field_0x3ea;
        undefined field_0x3eb;
        undefined field_0x3ec;
        undefined field_0x3ed;
        undefined field_0x3ee;
        undefined field_0x3ef;
        undefined field_0x3f0;
        undefined field_0x3f1;
        undefined field_0x3f2;
        undefined field_0x3f3;
        undefined field_0x3f4;
        undefined field_0x3f5;
        undefined field_0x3f6;
        undefined field_0x3f7;
        undefined field_0x3f8;
        undefined field_0x3f9;
        undefined field_0x3fa;
        undefined field_0x3fb;
        undefined field_0x3fc;
        undefined field_0x3fd;
        undefined field_0x3fe;
        undefined field_0x3ff;
        undefined field_0x400;
        undefined field_0x401;
        undefined field_0x402;
        undefined field_0x403;
        undefined field_0x404;
        undefined field_0x405;
        undefined field_0x406;
        undefined field_0x407;
        undefined field_0x408;
        undefined field_0x409;
        undefined field_0x40a;
        undefined field_0x40b;
        undefined field_0x40c;
        undefined field_0x40d;
        undefined field_0x40e;
        undefined field_0x40f;
        undefined field_0x410;
        undefined field_0x411;
        undefined field_0x412;
        undefined field_0x413;
        undefined field_0x414;
        undefined field_0x415;
        undefined field_0x416;
        undefined field_0x417;
        undefined field_0x418;
        undefined field_0x419;
        undefined field_0x41a;
        undefined field_0x41b;
        undefined field_0x41c;
        undefined field_0x41d;
        undefined field_0x41e;
        undefined field_0x41f;
        undefined field_0x420;
        undefined field_0x421;
        undefined field_0x422;
        undefined field_0x423;
        undefined field_0x424;
        undefined field_0x425;
        undefined field_0x426;
        undefined field_0x427;
        undefined field_0x428;
        undefined field_0x429;
        undefined field_0x42a;
        undefined field_0x42b;
        undefined field_0x42c;
        undefined field_0x42d;
        undefined field_0x42e;
        undefined field_0x42f;
        undefined field_0x430;
        undefined field_0x431;
        undefined field_0x432;
        undefined field_0x433;
        undefined field_0x434;
        undefined field_0x435;
        undefined field_0x436;
        undefined field_0x437;
        undefined field_0x438;
        undefined field_0x439;
        undefined field_0x43a;
        undefined field_0x43b;
        undefined field_0x43c;
        undefined field_0x43d;
        undefined field_0x43e;
        undefined field_0x43f;
        undefined field_0x440;
        undefined field_0x441;
        undefined field_0x442;
        undefined field_0x443;
        undefined field_0x444;
        undefined field_0x445;
        undefined field_0x446;
        undefined field_0x447;
        undefined field_0x448;
        undefined field_0x449;
        undefined field_0x44a;
        undefined field_0x44b;
        undefined field_0x44c;
        undefined field_0x44d;
        undefined field_0x44e;
        undefined field_0x44f;
        undefined field_0x450;
        undefined field_0x451;
        undefined field_0x452;
        undefined field_0x453;
        undefined field_0x454;
        undefined field_0x455;
        undefined field_0x456;
        undefined field_0x457;
        undefined field_0x458;
        undefined field_0x459;
        undefined field_0x45a;
        undefined field_0x45b;
        undefined field_0x45c;
        undefined field_0x45d;
        undefined field_0x45e;
        undefined field_0x45f;
        undefined field_0x460;
        undefined field_0x461;
        undefined field_0x462;
        undefined field_0x463;
        undefined field_0x464;
        undefined field_0x465;
        undefined field_0x466;
        undefined field_0x467;
        undefined field_0x468;
        undefined field_0x469;
        undefined field_0x46a;
        undefined field_0x46b;
        undefined field_0x46c;
        undefined field_0x46d;
        undefined field_0x46e;
        undefined field_0x46f;
        undefined field_0x470;
        undefined field_0x471;
        undefined field_0x472;
        undefined field_0x473;
        undefined field_0x474;
        undefined field_0x475;
        undefined field_0x476;
        undefined field_0x477;
        undefined field_0x478;
        undefined field_0x479;
        undefined field_0x47a;
        undefined field_0x47b;
        undefined field_0x47c;
        undefined field_0x47d;
        undefined field_0x47e;
        undefined field_0x47f;
        undefined field_0x480;
        undefined field_0x481;
        undefined field_0x482;
        undefined field_0x483;
        undefined field_0x484;
        undefined field_0x485;
        undefined field_0x486;
        undefined field_0x487;
        undefined field_0x488;
        undefined field_0x489;
        undefined field_0x48a;
        undefined field_0x48b;
        undefined field_0x48c;
        undefined field_0x48d;
        undefined field_0x48e;
        undefined field_0x48f;
        undefined field_0x490;
        undefined field_0x491;
        undefined field_0x492;
        undefined field_0x493;
        undefined field_0x494;
        undefined field_0x495;
        undefined field_0x496;
        undefined field_0x497;
        undefined field_0x498;
        undefined field_0x499;
        undefined field_0x49a;
        undefined field_0x49b;
        undefined field_0x49c;
        undefined field_0x49d;
        undefined field_0x49e;
        undefined field_0x49f;
        undefined field_0x4a0;
        undefined field_0x4a1;
        undefined field_0x4a2;
        undefined field_0x4a3;
        undefined field_0x4a4;
        undefined field_0x4a5;
        undefined field_0x4a6;
        undefined field_0x4a7;
        undefined field_0x4a8;
        undefined field_0x4a9;
        undefined field_0x4aa;
        undefined field_0x4ab;
        undefined field_0x4ac;
        undefined field_0x4ad;
        undefined field_0x4ae;
        undefined field_0x4af;
        undefined field_0x4b0;
        undefined field_0x4b1;
        undefined field_0x4b2;
        undefined field_0x4b3;
        undefined field_0x4b4;
        undefined field_0x4b5;
        undefined field_0x4b6;
        undefined field_0x4b7;
        undefined field_0x4b8;
        undefined field_0x4b9;
        undefined field_0x4ba;
        undefined field_0x4bb;
        undefined field_0x4bc;
        undefined field_0x4bd;
        undefined field_0x4be;
        undefined field_0x4bf;
        undefined field_0x4c0;
        undefined field_0x4c1;
        undefined field_0x4c2;
        undefined field_0x4c3;
        undefined field_0x4c4;
        undefined field_0x4c5;
        undefined field_0x4c6;
        undefined field_0x4c7;
        undefined field_0x4c8;
        undefined field_0x4c9;
        undefined field_0x4ca;
        undefined field_0x4cb;
        undefined field_0x4cc;
        undefined field_0x4cd;
        undefined field_0x4ce;
        undefined field_0x4cf;
        undefined field_0x4d0;
        undefined field_0x4d1;
        undefined field_0x4d2;
        undefined field_0x4d3;
        undefined field_0x4d4;
        undefined field_0x4d5;
        undefined field_0x4d6;
        undefined field_0x4d7;
        undefined field_0x4d8;
        undefined field_0x4d9;
        undefined field_0x4da;
        undefined field_0x4db;
        undefined field_0x4dc;
        undefined field_0x4dd;
        undefined field_0x4de;
        undefined field_0x4df;
        undefined field_0x4e0;
        undefined field_0x4e1;
        undefined field_0x4e2;
        undefined field_0x4e3;
        undefined field_0x4e4;
        undefined field_0x4e5;
        undefined field_0x4e6;
        undefined field_0x4e7;
        undefined field_0x4e8;
        undefined field_0x4e9;
        undefined field_0x4ea;
        undefined field_0x4eb;
        undefined field_0x4ec;
        undefined field_0x4ed;
        undefined field_0x4ee;
        undefined field_0x4ef;
        undefined field_0x4f0;
        undefined field_0x4f1;
        undefined field_0x4f2;
        undefined field_0x4f3;
        undefined field_0x4f4;
        undefined field_0x4f5;
        undefined field_0x4f6;
        undefined field_0x4f7;
        undefined field_0x4f8;
        undefined field_0x4f9;
        undefined field_0x4fa;
        undefined field_0x4fb;
        undefined field_0x4fc;
        undefined field_0x4fd;
        undefined field_0x4fe;
        undefined field_0x4ff;
        undefined field_0x500;
        undefined field_0x501;
        undefined field_0x502;
        undefined field_0x503;
        undefined field_0x504;
        undefined field_0x505;
        undefined field_0x506;
        undefined field_0x507;
        undefined field_0x508;
        undefined field_0x509;
        undefined field_0x50a;
        undefined field_0x50b;
        undefined field_0x50c;
        undefined field_0x50d;
        undefined field_0x50e;
        undefined field_0x50f;
        undefined field_0x510;
        undefined field_0x511;
        undefined field_0x512;
        undefined field_0x513;
        undefined field_0x514;
        undefined field_0x515;
        undefined field_0x516;
        undefined field_0x517;
        undefined field_0x518;
        undefined field_0x519;
        undefined field_0x51a;
        undefined field_0x51b;
        undefined field_0x51c;
        undefined field_0x51d;
        undefined field_0x51e;
        undefined field_0x51f;
        undefined field_0x520;
        undefined field_0x521;
        undefined field_0x522;
        undefined field_0x523;
        undefined field_0x524;
        undefined field_0x525;
        undefined field_0x526;
        undefined field_0x527;
        undefined field_0x528;
        undefined field_0x529;
        undefined field_0x52a;
        undefined field_0x52b;
        undefined field_0x52c;
        undefined field_0x52d;
        undefined field_0x52e;
        undefined field_0x52f;
        undefined field_0x530;
        undefined field_0x531;
        undefined field_0x532;
        undefined field_0x533;
        undefined field_0x534;
        undefined field_0x535;
        undefined field_0x536;
        undefined field_0x537;
        undefined field_0x538;
        undefined field_0x539;
        undefined field_0x53a;
        undefined field_0x53b;
        undefined field_0x53c;
        undefined field_0x53d;
        undefined field_0x53e;
        undefined field_0x53f;
        undefined field_0x540;
        undefined field_0x541;
        undefined field_0x542;
        undefined field_0x543;
        undefined field_0x544;
        undefined field_0x545;
        undefined field_0x546;
        undefined field_0x547;
        undefined field_0x548;
        undefined field_0x549;
        undefined field_0x54a;
        undefined field_0x54b;
        undefined field_0x54c;
        undefined field_0x54d;
        undefined field_0x54e;
        undefined field_0x54f;
        undefined field_0x550;
        undefined field_0x551;
        undefined field_0x552;
        undefined field_0x553;
        undefined field_0x554;
        undefined field_0x555;
        undefined field_0x556;
        undefined field_0x557;
        undefined field_0x558;
        undefined field_0x559;
        undefined field_0x55a;
        undefined field_0x55b;
        undefined field_0x55c;
        undefined field_0x55d;
        undefined field_0x55e;
        undefined field_0x55f;
        undefined field_0x560;
        undefined field_0x561;
        undefined field_0x562;
        undefined field_0x563;
        undefined field_0x564;
        undefined field_0x565;
        undefined field_0x566;
        undefined field_0x567;
        undefined field_0x568;
        undefined field_0x569;
        undefined field_0x56a;
        undefined field_0x56b;
        undefined field_0x56c;
        undefined field_0x56d;
        undefined field_0x56e;
        undefined field_0x56f;
        undefined field_0x570;
        undefined field_0x571;
        undefined field_0x572;
        undefined field_0x573;
        undefined field_0x574;
        undefined field_0x575;
        undefined field_0x576;
        undefined field_0x577;
        undefined field_0x578;
        undefined field_0x579;
        undefined field_0x57a;
        undefined field_0x57b;
        undefined field_0x57c;
        undefined field_0x57d;
        undefined field_0x57e;
        undefined field_0x57f;
        undefined field_0x580;
        undefined field_0x581;
        undefined field_0x582;
        undefined field_0x583;
        undefined field_0x584;
        undefined field_0x585;
        undefined field_0x586;
        undefined field_0x587;
        undefined field_0x588;
        undefined field_0x589;
        undefined field_0x58a;
        undefined field_0x58b;
        undefined field_0x58c;
        undefined field_0x58d;
        undefined field_0x58e;
        undefined field_0x58f;
        undefined field_0x590;
        undefined field_0x591;
        undefined field_0x592;
        undefined field_0x593;
        undefined field_0x594;
        undefined field_0x595;
        undefined field_0x596;
        undefined field_0x597;
        undefined field_0x598;
        undefined field_0x599;
        undefined field_0x59a;
        undefined field_0x59b;
        undefined field_0x59c;
        undefined field_0x59d;
        undefined field_0x59e;
        undefined field_0x59f;
        undefined field_0x5a0;
        undefined field_0x5a1;
        undefined field_0x5a2;
        undefined field_0x5a3;
        undefined field_0x5a4;
        undefined field_0x5a5;
        undefined field_0x5a6;
        undefined field_0x5a7;
        undefined field_0x5a8;
        undefined field_0x5a9;
        undefined field_0x5aa;
        undefined field_0x5ab;
        undefined field_0x5ac;
        undefined field_0x5ad;
        undefined field_0x5ae;
        undefined field_0x5af;
        undefined field_0x5b0;
        undefined field_0x5b1;
        undefined field_0x5b2;
        undefined field_0x5b3;
        undefined field_0x5b4;
        undefined field_0x5b5;
        undefined field_0x5b6;
        undefined field_0x5b7;
        undefined field_0x5b8;
        undefined field_0x5b9;
        undefined field_0x5ba;
        undefined field_0x5bb;
        undefined field_0x5bc;
        undefined field_0x5bd;
        undefined field_0x5be;
        undefined field_0x5bf;
        undefined field_0x5c0;
        undefined field_0x5c1;
        undefined field_0x5c2;
        undefined field_0x5c3;
        undefined field_0x5c4;
        undefined field_0x5c5;
        undefined field_0x5c6;
        undefined field_0x5c7;
        undefined field_0x5c8;
        undefined field_0x5c9;
        undefined field_0x5ca;
        undefined field_0x5cb;
        undefined field_0x5cc;
        undefined field_0x5cd;
        undefined field_0x5ce;
        undefined field_0x5cf;
        undefined field_0x5d0;
        undefined field_0x5d1;
        undefined field_0x5d2;
        undefined field_0x5d3;
        undefined field_0x5d4;
        undefined field_0x5d5;
        undefined field_0x5d6;
        undefined field_0x5d7;
        undefined field_0x5d8;
        undefined field_0x5d9;
        undefined field_0x5da;
        undefined field_0x5db;
        undefined field_0x5dc;
        undefined field_0x5dd;
        undefined field_0x5de;
        undefined field_0x5df;
        undefined field_0x5e0;
        undefined field_0x5e1;
        undefined field_0x5e2;
        undefined field_0x5e3;
        undefined field_0x5e4;
        undefined field_0x5e5;
        undefined field_0x5e6;
        undefined field_0x5e7;
        undefined field_0x5e8;
        undefined field_0x5e9;
        undefined field_0x5ea;
        undefined field_0x5eb;
        undefined field_0x5ec;
        undefined field_0x5ed;
        undefined field_0x5ee;
        undefined field_0x5ef;
        undefined field_0x5f0;
        undefined field_0x5f1;
        undefined field_0x5f2;
        undefined field_0x5f3;
        undefined field_0x5f4;
        undefined field_0x5f5;
        undefined field_0x5f6;
        undefined field_0x5f7;
        undefined field_0x5f8;
        undefined field_0x5f9;
        undefined field_0x5fa;
        undefined field_0x5fb;
        undefined field_0x5fc;
        undefined field_0x5fd;
        undefined field_0x5fe;
        undefined field_0x5ff;
        undefined field_0x600;
        undefined field_0x601;
        undefined field_0x602;
        undefined field_0x603;
        undefined field_0x604;
        undefined field_0x605;
        undefined field_0x606;
        undefined field_0x607;
        undefined field_0x608;
        undefined field_0x609;
        undefined field_0x60a;
        undefined field_0x60b;
        undefined field_0x60c;
        undefined field_0x60d;
        undefined field_0x60e;
        undefined field_0x60f;
        undefined field_0x610;
        undefined field_0x611;
        undefined field_0x612;
        undefined field_0x613;
        undefined field_0x614;
        undefined field_0x615;
        undefined field_0x616;
        undefined field_0x617;
        undefined field_0x618;
        undefined field_0x619;
        undefined field_0x61a;
        undefined field_0x61b;
        undefined field_0x61c;
        undefined field_0x61d;
        undefined field_0x61e;
        undefined field_0x61f;
        undefined field_0x620;
        undefined field_0x621;
        undefined field_0x622;
        undefined field_0x623;
        undefined field_0x624;
        undefined field_0x625;
        undefined field_0x626;
        undefined field_0x627;
        undefined field_0x628;
        undefined field_0x629;
        undefined field_0x62a;
        undefined field_0x62b;
        undefined field_0x62c;
        undefined field_0x62d;
        undefined field_0x62e;
        undefined field_0x62f;
        undefined field_0x630;
        undefined field_0x631;
        undefined field_0x632;
        undefined field_0x633;
        undefined field_0x634;
        undefined field_0x635;
        undefined field_0x636;
        undefined field_0x637;
        undefined field_0x638;
        undefined field_0x639;
        undefined field_0x63a;
        undefined field_0x63b;
        undefined field_0x63c;
        undefined field_0x63d;
        undefined field_0x63e;
        undefined field_0x63f;
        undefined field_0x640;
        undefined field_0x641;
        undefined field_0x642;
        undefined field_0x643;
        undefined field_0x644;
        undefined field_0x645;
        undefined field_0x646;
        undefined field_0x647;
        undefined field_0x648;
        undefined field_0x649;
        undefined field_0x64a;
        undefined field_0x64b;
        undefined field_0x64c;
        undefined field_0x64d;
        undefined field_0x64e;
        undefined field_0x64f;
        undefined field_0x650;
        undefined field_0x651;
        undefined field_0x652;
        undefined field_0x653;
        undefined field_0x654;
        undefined field_0x655;
        undefined field_0x656;
        undefined field_0x657;
        undefined field_0x658;
        undefined field_0x659;
        undefined field_0x65a;
        undefined field_0x65b;
        undefined field_0x65c;
        undefined field_0x65d;
        undefined field_0x65e;
        undefined field_0x65f;
        undefined field_0x660;
        undefined field_0x661;
        undefined field_0x662;
        undefined field_0x663;
        undefined field_0x664;
        undefined field_0x665;
        undefined field_0x666;
        undefined field_0x667;
        undefined field_0x668;
        undefined field_0x669;
        undefined field_0x66a;
        undefined field_0x66b;
        undefined field_0x66c;
        undefined field_0x66d;
        undefined field_0x66e;
        undefined field_0x66f;
        undefined field_0x670;
        undefined field_0x671;
        undefined field_0x672;
        undefined field_0x673;
        undefined field_0x674;
        undefined field_0x675;
        undefined field_0x676;
        undefined field_0x677;
        undefined field_0x678;
        undefined field_0x679;
        undefined field_0x67a;
        undefined field_0x67b;
        undefined field_0x67c;
        undefined field_0x67d;
        undefined field_0x67e;
        undefined field_0x67f;
        undefined field_0x680;
        undefined field_0x681;
        undefined field_0x682;
        undefined field_0x683;
        undefined field_0x684;
        undefined field_0x685;
        undefined field_0x686;
        undefined field_0x687;
        undefined field_0x688;
        undefined field_0x689;
        undefined field_0x68a;
        undefined field_0x68b;
        undefined field_0x68c;
        undefined field_0x68d;
        undefined field_0x68e;
        undefined field_0x68f;
        undefined field_0x690;
        undefined field_0x691;
        undefined field_0x692;
        undefined field_0x693;
        undefined field_0x694;
        undefined field_0x695;
        undefined field_0x696;
        undefined field_0x697;
        undefined field_0x698;
        undefined field_0x699;
        undefined field_0x69a;
        undefined field_0x69b;
        undefined field_0x69c;
        undefined field_0x69d;
        undefined field_0x69e;
        undefined field_0x69f;
        undefined field_0x6a0;
        undefined field_0x6a1;
        undefined field_0x6a2;
        undefined field_0x6a3;
        undefined field_0x6a4;
        undefined field_0x6a5;
        undefined field_0x6a6;
        undefined field_0x6a7;
        undefined field_0x6a8;
        undefined field_0x6a9;
        undefined field_0x6aa;
        undefined field_0x6ab;
        undefined field_0x6ac;
        undefined field_0x6ad;
        undefined field_0x6ae;
        undefined field_0x6af;
        undefined field_0x6b0;
        undefined field_0x6b1;
        undefined field_0x6b2;
        undefined field_0x6b3;
        undefined field_0x6b4;
        undefined field_0x6b5;
        undefined field_0x6b6;
        undefined field_0x6b7;
        undefined field_0x6b8;
        undefined field_0x6b9;
        undefined field_0x6ba;
        undefined field_0x6bb;
        undefined field_0x6bc;
        undefined field_0x6bd;
        undefined field_0x6be;
        undefined field_0x6bf;
        undefined field_0x6c0;
        undefined field_0x6c1;
        undefined field_0x6c2;
        undefined field_0x6c3;
        undefined field_0x6c4;
        undefined field_0x6c5;
        undefined field_0x6c6;
        undefined field_0x6c7;
        undefined field_0x6c8;
        undefined field_0x6c9;
        undefined field_0x6ca;
        undefined field_0x6cb;
        undefined field_0x6cc;
        undefined field_0x6cd;
        undefined field_0x6ce;
        undefined field_0x6cf;
        undefined field_0x6d0;
        undefined field_0x6d1;
        undefined field_0x6d2;
        undefined field_0x6d3;
        undefined field_0x6d4;
        undefined field_0x6d5;
        undefined field_0x6d6;
        undefined field_0x6d7;
        undefined field_0x6d8;
        undefined field_0x6d9;
        undefined field_0x6da;
        undefined field_0x6db;
        undefined field_0x6dc;
        undefined field_0x6dd;
        undefined field_0x6de;
        undefined field_0x6df;
        undefined field_0x6e0;
        undefined field_0x6e1;
        undefined field_0x6e2;
        undefined field_0x6e3;
        undefined field_0x6e4;
        undefined field_0x6e5;
        undefined field_0x6e6;
        undefined field_0x6e7;
        undefined field_0x6e8;
        undefined field_0x6e9;
        undefined field_0x6ea;
        undefined field_0x6eb;
        undefined field_0x6ec;
        undefined field_0x6ed;
        undefined field_0x6ee;
        undefined field_0x6ef;
        undefined field_0x6f0;
        undefined field_0x6f1;
        undefined field_0x6f2;
        undefined field_0x6f3;
        undefined field_0x6f4;
        undefined field_0x6f5;
        undefined field_0x6f6;
        undefined field_0x6f7;
        undefined field_0x6f8;
        undefined field_0x6f9;
        undefined field_0x6fa;
        undefined field_0x6fb;
        undefined field_0x6fc;
        undefined field_0x6fd;
        undefined field_0x6fe;
        undefined field_0x6ff;
        undefined field_0x700;
        undefined field_0x701;
        undefined field_0x702;
        undefined field_0x703;
        undefined field_0x704;
        undefined field_0x705;
        undefined field_0x706;
        undefined field_0x707;
        undefined field_0x708;
        undefined field_0x709;
        undefined field_0x70a;
        undefined field_0x70b;
        undefined field_0x70c;
        undefined field_0x70d;
        undefined field_0x70e;
        undefined field_0x70f;
        undefined field_0x710;
        undefined field_0x711;
        undefined field_0x712;
        undefined field_0x713;
        undefined field_0x714;
        undefined field_0x715;
        undefined field_0x716;
        undefined field_0x717;
        undefined field_0x718;
        undefined field_0x719;
        undefined field_0x71a;
        undefined field_0x71b;
        undefined field_0x71c;
        undefined field_0x71d;
        undefined field_0x71e;
        undefined field_0x71f;
        undefined field_0x720;
        undefined field_0x721;
        undefined field_0x722;
        undefined field_0x723;
        undefined field_0x724;
        undefined field_0x725;
        undefined field_0x726;
        undefined field_0x727;
        undefined field_0x728;
        undefined field_0x729;
        undefined field_0x72a;
        undefined field_0x72b;
        undefined field_0x72c;
        undefined field_0x72d;
        undefined field_0x72e;
        undefined field_0x72f;
        undefined field_0x730;
        undefined field_0x731;
        undefined field_0x732;
        undefined field_0x733;
        undefined field_0x734;
        undefined field_0x735;
        undefined field_0x736;
        undefined field_0x737;
        undefined field_0x738;
        undefined field_0x739;
        undefined field_0x73a;
        undefined field_0x73b;
        undefined field_0x73c;
        undefined field_0x73d;
        undefined field_0x73e;
        undefined field_0x73f;
        undefined field_0x740;
        undefined field_0x741;
        undefined field_0x742;
        undefined field_0x743;
        undefined field_0x744;
        undefined field_0x745;
        undefined field_0x746;
        undefined field_0x747;
        undefined field_0x748;
        undefined field_0x749;
        undefined field_0x74a;
        undefined field_0x74b;
        undefined field_0x74c;
        undefined field_0x74d;
        undefined field_0x74e;
        undefined field_0x74f;
        undefined field_0x750;
        undefined field_0x751;
        undefined field_0x752;
        undefined field_0x753;
        undefined field_0x754;
        undefined field_0x755;
        undefined field_0x756;
        undefined field_0x757;
        undefined field_0x758;
        undefined field_0x759;
        undefined field_0x75a;
        undefined field_0x75b;
        undefined field_0x75c;
        undefined field_0x75d;
        undefined field_0x75e;
        undefined field_0x75f;
        undefined field_0x760;
        undefined field_0x761;
        undefined field_0x762;
        undefined field_0x763;
        undefined field_0x764;
        undefined field_0x765;
        undefined field_0x766;
        undefined field_0x767;
        undefined field_0x768;
        undefined field_0x769;
        undefined field_0x76a;
        undefined field_0x76b;
        undefined field_0x76c;
        undefined field_0x76d;
        undefined field_0x76e;
        undefined field_0x76f;
        undefined field_0x770;
        undefined field_0x771;
        undefined field_0x772;
        undefined field_0x773;
        undefined field_0x774;
        undefined field_0x775;
        undefined field_0x776;
        undefined field_0x777;
        undefined field_0x778;
        undefined field_0x779;
        undefined field_0x77a;
        undefined field_0x77b;
        undefined field_0x77c;
        undefined field_0x77d;
        undefined field_0x77e;
        undefined field_0x77f;
        undefined field_0x780;
        undefined field_0x781;
        undefined field_0x782;
        undefined field_0x783;
        undefined field_0x784;
        undefined field_0x785;
        undefined field_0x786;
        undefined field_0x787;
        undefined field_0x788;
        undefined field_0x789;
        undefined field_0x78a;
        undefined field_0x78b;
        undefined field_0x78c;
        undefined field_0x78d;
        undefined field_0x78e;
        undefined field_0x78f;
        undefined field_0x790;
        undefined field_0x791;
        undefined field_0x792;
        undefined field_0x793;
        undefined field_0x794;
        undefined field_0x795;
        undefined field_0x796;
        undefined field_0x797;
        undefined field_0x798;
        undefined field_0x799;
        undefined field_0x79a;
        undefined field_0x79b;
        undefined field_0x79c;
        undefined field_0x79d;
        undefined field_0x79e;
        undefined field_0x79f;
        undefined field_0x7a0;
        undefined field_0x7a1;
        undefined field_0x7a2;
        undefined field_0x7a3;
        undefined field_0x7a4;
        undefined field_0x7a5;
        undefined field_0x7a6;
        undefined field_0x7a7;
        undefined field_0x7a8;
        undefined field_0x7a9;
        undefined field_0x7aa;
        undefined field_0x7ab;
        undefined field_0x7ac;
        undefined field_0x7ad;
        undefined field_0x7ae;
        undefined field_0x7af;
        undefined field_0x7b0;
        undefined field_0x7b1;
        undefined field_0x7b2;
        undefined field_0x7b3;
        undefined field_0x7b4;
        undefined field_0x7b5;
        undefined field_0x7b6;
        undefined field_0x7b7;
        undefined field_0x7b8;
        undefined field_0x7b9;
        undefined field_0x7ba;
        undefined field_0x7bb;
        undefined field_0x7bc;
        undefined field_0x7bd;
        undefined field_0x7be;
        undefined field_0x7bf;
        undefined field_0x7c0;
        undefined field_0x7c1;
        undefined field_0x7c2;
        undefined field_0x7c3;
        undefined field_0x7c4;
        undefined field_0x7c5;
        undefined field_0x7c6;
        undefined field_0x7c7;
        undefined field_0x7c8;
        undefined field_0x7c9;
        undefined field_0x7ca;
        undefined field_0x7cb;
        undefined field_0x7cc;
        undefined field_0x7cd;
        undefined field_0x7ce;
        undefined field_0x7cf;
        undefined field_0x7d0;
        undefined field_0x7d1;
        undefined field_0x7d2;
        undefined field_0x7d3;
        undefined field_0x7d4;
        undefined field_0x7d5;
        undefined field_0x7d6;
        undefined field_0x7d7;
        undefined field_0x7d8;
        undefined field_0x7d9;
        undefined field_0x7da;
        undefined field_0x7db;
        undefined field_0x7dc;
        undefined field_0x7dd;
        undefined field_0x7de;
        undefined field_0x7df;
        undefined field_0x7e0;
        undefined field_0x7e1;
        undefined field_0x7e2;
        undefined field_0x7e3;
        undefined field_0x7e4;
        undefined field_0x7e5;
        undefined field_0x7e6;
        undefined field_0x7e7;
        undefined field_0x7e8;
        undefined field_0x7e9;
        undefined field_0x7ea;
        undefined field_0x7eb;
        undefined field_0x7ec;
        undefined field_0x7ed;
        undefined field_0x7ee;
        undefined field_0x7ef;
        undefined field_0x7f0;
        undefined field_0x7f1;
        undefined field_0x7f2;
        undefined field_0x7f3;
        undefined field_0x7f4;
        undefined field_0x7f5;
        undefined field_0x7f6;
        undefined field_0x7f7;
        undefined field_0x7f8;
        undefined field_0x7f9;
        undefined field_0x7fa;
        undefined field_0x7fb;
        undefined field_0x7fc;
        undefined field_0x7fd;
        undefined field_0x7fe;
        undefined field_0x7ff;
        undefined field_0x800;
        undefined field_0x801;
        undefined field_0x802;
        undefined field_0x803;
        undefined field_0x804;
        undefined field_0x805;
        undefined field_0x806;
        undefined field_0x807;
        undefined field_0x808;
        undefined field_0x809;
        undefined field_0x80a;
        undefined field_0x80b;
        undefined field_0x80c;
        undefined field_0x80d;
        undefined field_0x80e;
        undefined field_0x80f;
        undefined field_0x810;
        undefined field_0x811;
        undefined field_0x812;
        undefined field_0x813;
        undefined field_0x814;
        undefined field_0x815;
        undefined field_0x816;
        undefined field_0x817;
        undefined field_0x818;
        undefined field_0x819;
        undefined field_0x81a;
        undefined field_0x81b;
        undefined field_0x81c;
        undefined field_0x81d;
        undefined field_0x81e;
        undefined field_0x81f;
        undefined field_0x820;
        undefined field_0x821;
        undefined field_0x822;
        undefined field_0x823;
        undefined field_0x824;
        undefined field_0x825;
        undefined field_0x826;
        undefined field_0x827;
        undefined field_0x828;
        undefined field_0x829;
        undefined field_0x82a;
        undefined field_0x82b;
        undefined field_0x82c;
        undefined field_0x82d;
        undefined field_0x82e;
        undefined field_0x82f;
        undefined field_0x830;
        undefined field_0x831;
        undefined field_0x832;
        undefined field_0x833;
        undefined field_0x834;
        undefined field_0x835;
        undefined field_0x836;
        undefined field_0x837;
        undefined field_0x838;
        undefined field_0x839;
        undefined field_0x83a;
        undefined field_0x83b;
        undefined field_0x83c;
        undefined field_0x83d;
        undefined field_0x83e;
        undefined field_0x83f;
        undefined field_0x840;
        undefined field_0x841;
        undefined field_0x842;
        undefined field_0x843;
        undefined field_0x844;
        undefined field_0x845;
        undefined field_0x846;
        undefined field_0x847;
        undefined field_0x848;
        undefined field_0x849;
        undefined field_0x84a;
        undefined field_0x84b;
        undefined field_0x84c;
        undefined field_0x84d;
        undefined field_0x84e;
        undefined field_0x84f;
        undefined field_0x850;
        undefined field_0x851;
        undefined field_0x852;
        undefined field_0x853;
        undefined field_0x854;
        undefined field_0x855;
        undefined field_0x856;
        undefined field_0x857;
        undefined field_0x858;
        undefined field_0x859;
        undefined field_0x85a;
        undefined field_0x85b;
        undefined field_0x85c;
        undefined field_0x85d;
        undefined field_0x85e;
        undefined field_0x85f;
        undefined field_0x860;
        undefined field_0x861;
        undefined field_0x862;
        undefined field_0x863;
        undefined field_0x864;
        undefined field_0x865;
        undefined field_0x866;
        undefined field_0x867;
        undefined field_0x868;
        undefined field_0x869;
        undefined field_0x86a;
        undefined field_0x86b;
        undefined field_0x86c;
        undefined field_0x86d;
        undefined field_0x86e;
        undefined field_0x86f;
        undefined field_0x870;
        undefined field_0x871;
        undefined field_0x872;
        undefined field_0x873;
        undefined field_0x874;
        undefined field_0x875;
        undefined field_0x876;
        undefined field_0x877;
        undefined field_0x878;
        undefined field_0x879;
        undefined field_0x87a;
        undefined field_0x87b;
        undefined field_0x87c;
        undefined field_0x87d;
        undefined field_0x87e;
        undefined field_0x87f;
        undefined field_0x880;
        undefined field_0x881;
        undefined field_0x882;
        undefined field_0x883;
        undefined field_0x884;
        undefined field_0x885;
        undefined field_0x886;
        undefined field_0x887;
        undefined field_0x888;
        undefined field_0x889;
        undefined field_0x88a;
        undefined field_0x88b;
        undefined field_0x88c;
        undefined field_0x88d;
        undefined field_0x88e;
        undefined field_0x88f;
        undefined field_0x890;
        undefined field_0x891;
        undefined field_0x892;
        undefined field_0x893;
        undefined field_0x894;
        undefined field_0x895;
        undefined field_0x896;
        undefined field_0x897;
        undefined field_0x898;
        undefined field_0x899;
        undefined field_0x89a;
        undefined field_0x89b;
        undefined field_0x89c;
        undefined field_0x89d;
        undefined field_0x89e;
        undefined field_0x89f;
        undefined field_0x8a0;
        undefined field_0x8a1;
        undefined field_0x8a2;
        undefined field_0x8a3;
        undefined field_0x8a4;
        undefined field_0x8a5;
        undefined field_0x8a6;
        undefined field_0x8a7;
        undefined field_0x8a8;
        undefined field_0x8a9;
        undefined field_0x8aa;
        undefined field_0x8ab;
        undefined field_0x8ac;
        undefined field_0x8ad;
        undefined field_0x8ae;
        undefined field_0x8af;
        undefined field_0x8b0;
        undefined field_0x8b1;
        undefined field_0x8b2;
        undefined field_0x8b3;
        undefined field_0x8b4;
        undefined field_0x8b5;
        undefined field_0x8b6;
        undefined field_0x8b7;
        undefined field_0x8b8;
        undefined field_0x8b9;
        undefined field_0x8ba;
        undefined field_0x8bb;
        undefined field_0x8bc;
        undefined field_0x8bd;
        undefined field_0x8be;
        undefined field_0x8bf;
        undefined field_0x8c0;
        undefined field_0x8c1;
        undefined field_0x8c2;
        undefined field_0x8c3;
        undefined field_0x8c4;
        undefined field_0x8c5;
        undefined field_0x8c6;
        undefined field_0x8c7;
        undefined field_0x8c8;
        undefined field_0x8c9;
        undefined field_0x8ca;
        undefined field_0x8cb;
        undefined field_0x8cc;
        undefined field_0x8cd;
        undefined field_0x8ce;
        undefined field_0x8cf;
        undefined field_0x8d0;
        undefined field_0x8d1;
        undefined field_0x8d2;
        undefined field_0x8d3;
        undefined field_0x8d4;
        undefined field_0x8d5;
        undefined field_0x8d6;
        undefined field_0x8d7;
        undefined field_0x8d8;
        undefined field_0x8d9;
        undefined field_0x8da;
        undefined field_0x8db;
        undefined field_0x8dc;
        undefined field_0x8dd;
        undefined field_0x8de;
        undefined field_0x8df;
        undefined field_0x8e0;
        undefined field_0x8e1;
        undefined field_0x8e2;
        undefined field_0x8e3;
        undefined field_0x8e4;
        undefined field_0x8e5;
        undefined field_0x8e6;
        undefined field_0x8e7;
        undefined field_0x8e8;
        undefined field_0x8e9;
        undefined field_0x8ea;
        undefined field_0x8eb;
        undefined field_0x8ec;
        undefined field_0x8ed;
        undefined field_0x8ee;
        undefined field_0x8ef;
        undefined field_0x8f0;
        undefined field_0x8f1;
        undefined field_0x8f2;
        undefined field_0x8f3;
        undefined field_0x8f4;
        undefined field_0x8f5;
        undefined field_0x8f6;
        undefined field_0x8f7;
        undefined field_0x8f8;
        undefined field_0x8f9;
        undefined field_0x8fa;
        undefined field_0x8fb;
        undefined field_0x8fc;
        undefined field_0x8fd;
        undefined field_0x8fe;
        undefined field_0x8ff;
        undefined field_0x900;
        undefined field_0x901;
        undefined field_0x902;
        undefined field_0x903;
        undefined field_0x904;
        undefined field_0x905;
        undefined field_0x906;
        undefined field_0x907;
        undefined field_0x908;
        undefined field_0x909;
        undefined field_0x90a;
        undefined field_0x90b;
        undefined field_0x90c;
        undefined field_0x90d;
        undefined field_0x90e;
        undefined field_0x90f;
        undefined field_0x910;
        undefined field_0x911;
        undefined field_0x912;
        undefined field_0x913;
        undefined field_0x914;
        undefined field_0x915;
        undefined field_0x916;
        undefined field_0x917;
        undefined field_0x918;
        undefined field_0x919;
        undefined field_0x91a;
        undefined field_0x91b;
        undefined field_0x91c;
        undefined field_0x91d;
        undefined field_0x91e;
        undefined field_0x91f;
        undefined field_0x920;
        undefined field_0x921;
        undefined field_0x922;
        undefined field_0x923;
        undefined field_0x924;
        undefined field_0x925;
        undefined field_0x926;
        undefined field_0x927;
        undefined field_0x928;
        undefined field_0x929;
        undefined field_0x92a;
        undefined field_0x92b;
        undefined field_0x92c;
        undefined field_0x92d;
        undefined field_0x92e;
        undefined field_0x92f;
        undefined field_0x930;
        undefined field_0x931;
        undefined field_0x932;
        undefined field_0x933;
        undefined field_0x934;
        undefined field_0x935;
        undefined field_0x936;
        undefined field_0x937;
        undefined field_0x938;
        undefined field_0x939;
        undefined field_0x93a;
        undefined field_0x93b;
        undefined field_0x93c;
        undefined field_0x93d;
        undefined field_0x93e;
        undefined field_0x93f;
        undefined field_0x940;
        undefined field_0x941;
        undefined field_0x942;
        undefined field_0x943;
        undefined field_0x944;
        undefined field_0x945;
        undefined field_0x946;
        undefined field_0x947;
        undefined field_0x948;
        undefined field_0x949;
        undefined field_0x94a;
        undefined field_0x94b;
        undefined field_0x94c;
        undefined field_0x94d;
        undefined field_0x94e;
        undefined field_0x94f;
        undefined field_0x950;
        undefined field_0x951;
        undefined field_0x952;
        undefined field_0x953;
        undefined field_0x954;
        undefined field_0x955;
        undefined field_0x956;
        undefined field_0x957;
        undefined field_0x958;
        undefined field_0x959;
        undefined field_0x95a;
        undefined field_0x95b;
        undefined field_0x95c;
        undefined field_0x95d;
        undefined field_0x95e;
        undefined field_0x95f;
        undefined field_0x960;
        undefined field_0x961;
        undefined field_0x962;
        undefined field_0x963;
        undefined field_0x964;
        undefined field_0x965;
        undefined field_0x966;
        undefined field_0x967;
        undefined field_0x968;
        undefined field_0x969;
        undefined field_0x96a;
        undefined field_0x96b;
        undefined field_0x96c;
        undefined field_0x96d;
        undefined field_0x96e;
        undefined field_0x96f;
        undefined field_0x970;
        undefined field_0x971;
        undefined field_0x972;
        undefined field_0x973;
        undefined field_0x974;
        undefined field_0x975;
        undefined field_0x976;
        undefined field_0x977;
        undefined field_0x978;
        undefined field_0x979;
        undefined field_0x97a;
        undefined field_0x97b;
        undefined field_0x97c;
        undefined field_0x97d;
        undefined field_0x97e;
        undefined field_0x97f;
        undefined field_0x980;
        undefined field_0x981;
        undefined field_0x982;
        undefined field_0x983;
        undefined field_0x984;
        undefined field_0x985;
        undefined field_0x986;
        undefined field_0x987;
        undefined field_0x988;
        undefined field_0x989;
        undefined field_0x98a;
        undefined field_0x98b;
        undefined field_0x98c;
        undefined field_0x98d;
        undefined field_0x98e;
        undefined field_0x98f;
        undefined field_0x990;
        undefined field_0x991;
        undefined field_0x992;
        undefined field_0x993;
        undefined field_0x994;
        undefined field_0x995;
        undefined field_0x996;
        undefined field_0x997;
        undefined field_0x998;
        undefined field_0x999;
        undefined field_0x99a;
        undefined field_0x99b;
        undefined field_0x99c;
        undefined field_0x99d;
        undefined field_0x99e;
        undefined field_0x99f;
        undefined field_0x9a0;
        undefined field_0x9a1;
        undefined field_0x9a2;
        undefined field_0x9a3;
        undefined field_0x9a4;
        undefined field_0x9a5;
        undefined field_0x9a6;
        undefined field_0x9a7;
        undefined field_0x9a8;
        undefined field_0x9a9;
        undefined field_0x9aa;
        undefined field_0x9ab;
        undefined field_0x9ac;
        undefined field_0x9ad;
        undefined field_0x9ae;
        undefined field_0x9af;
        undefined field_0x9b0;
        undefined field_0x9b1;
        undefined field_0x9b2;
        undefined field_0x9b3;
        undefined field_0x9b4;
        undefined field_0x9b5;
        undefined field_0x9b6;
        undefined field_0x9b7;
        undefined field_0x9b8;
        undefined field_0x9b9;
        undefined field_0x9ba;
        undefined field_0x9bb;
        undefined field_0x9bc;
        undefined field_0x9bd;
        undefined field_0x9be;
        undefined field_0x9bf;
        undefined field_0x9c0;
        undefined field_0x9c1;
        undefined field_0x9c2;
        undefined field_0x9c3;
        undefined field_0x9c4;
        undefined field_0x9c5;
        undefined field_0x9c6;
        undefined field_0x9c7;
        undefined field_0x9c8;
        undefined field_0x9c9;
        undefined field_0x9ca;
        undefined field_0x9cb;
        undefined field_0x9cc;
        undefined field_0x9cd;
        undefined field_0x9ce;
        undefined field_0x9cf;
        undefined field_0x9d0;
        undefined field_0x9d1;
        undefined field_0x9d2;
        undefined field_0x9d3;
        undefined field_0x9d4;
        undefined field_0x9d5;
        undefined field_0x9d6;
        undefined field_0x9d7;
        undefined field_0x9d8;
        undefined field_0x9d9;
        undefined field_0x9da;
        undefined field_0x9db;
        undefined field_0x9dc;
        undefined field_0x9dd;
        undefined field_0x9de;
        undefined field_0x9df;
        undefined field_0x9e0;
        undefined field_0x9e1;
        undefined field_0x9e2;
        undefined field_0x9e3;
        undefined field_0x9e4;
        undefined field_0x9e5;
        undefined field_0x9e6;
        undefined field_0x9e7;
        undefined field_0x9e8;
        undefined field_0x9e9;
        undefined field_0x9ea;
        undefined field_0x9eb;
        undefined field_0x9ec;
        undefined field_0x9ed;
        undefined field_0x9ee;
        undefined field_0x9ef;
        undefined field_0x9f0;
        undefined field_0x9f1;
        undefined field_0x9f2;
        undefined field_0x9f3;
        undefined field_0x9f4;
        undefined field_0x9f5;
        undefined field_0x9f6;
        undefined field_0x9f7;
        undefined field_0x9f8;
        undefined field_0x9f9;
        undefined field_0x9fa;
        undefined field_0x9fb;
        undefined field_0x9fc;
        undefined field_0x9fd;
        undefined field_0x9fe;
        undefined field_0x9ff;
        undefined field_0xa00;
        undefined field_0xa01;
        undefined field_0xa02;
        undefined field_0xa03;
        undefined field_0xa04;
        undefined field_0xa05;
        undefined field_0xa06;
        undefined field_0xa07;
        undefined field_0xa08;
        undefined field_0xa09;
        undefined field_0xa0a;
        undefined field_0xa0b;
        undefined field_0xa0c;
        undefined field_0xa0d;
        undefined field_0xa0e;
        undefined field_0xa0f;
        undefined field_0xa10;
        undefined field_0xa11;
        undefined field_0xa12;
        undefined field_0xa13;
        undefined field_0xa14;
        undefined field_0xa15;
        undefined field_0xa16;
        undefined field_0xa17;
        undefined field_0xa18;
        undefined field_0xa19;
        undefined field_0xa1a;
        undefined field_0xa1b;
        struct D2EventStrc * pEvent;
    };

    struct D2StateFlags {
        int nStateBitFlags[6];
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
    };

    struct D2PetStrc {
        int flag;
        undefined4 field_0x4;
        undefined4 field_0x8;
    };

    struct D2EventEntryStrc {
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        struct D2EventEntryStrc * pNext;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
    };

    struct D2MonsterDataComponents {
        byte HD;
        byte TR;
        byte LG;
        byte RA;
        byte LA;
        byte RH;
        byte LH;
        byte SH;
        byte S1;
        byte S2;
        byte S3;
        byte S4;
        byte S5;
        byte S6;
        byte S7;
        byte S8;
    };


    union uD2QuestArgStrcUnion {
        struct D2QuestArgStrcUnion1 field0;
        struct D2QuestArgStrcUnion2 field1;
        struct D2QuestArgStrcUnion3 field2;
    };

    struct D2PlayerWaypointsStrc {
        short wSetOrDel;
        longlong Waypoint:64;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
    };

    struct D2InventoryStrc {
        int dwMagic;
        struct D2PoolManagerStrc * pMemory; /* Created by retype action */
        struct D2UnitStrc * pOwner; /* Created by retype action */
        struct D2UnitStrc * pFirstItem;
        struct D2UnitStrc * pLastItem;
        struct D2InventoryGridInfoStrc * pGrids;
        int nGridCount;
        int dwPrimaryWeaponGUID;
        struct D2UnitStrc * pInvOwnerItem;
        int nOwnerGUID; /* Created by retype action */
        int nGemCount;
        undefined4 pUpdates;
        undefined4 pUpdatesLast;
        struct D2CorpseStrc * pCorpse;
        struct D2CorpseStrc * pCorpseLast;
        int nCorpseCount;
    };

    struct D2PlayerBasicsData { /* Used to send the server packet 0x18, 0x95, 0x96 */
        int SkipTick;
        ushort health;
        ushort mana;
        ushort stamina;
        byte hpRegen;
        byte mpRegen;
        ushort x;
        ushort y;
        ushort vX;
        ushort vY;
        uint gold;
        uint experience;
    };

    union D2DrlgLevelDataUnion {
        struct D2LvlMazeTxt * pTxtLvlMaze; /* when DRLG Type is DRLGTYPE_RandomMaze */
        struct D2DrlgLevelDataPresetArea * pDrlgLevelPresetData; /* when DRLG Type is DRLGTYPE_PresetArea */
        struct D2DrlgLevelDataWildernessLevel * pDrlgLevelOutdoorsData; /* when DRLG Type is DRLGTYPE_WildernessLevel */
    };

    struct D2PoolStrc {
        CRITICAL_SECTION pSync;
        size_t nBlockSize;
        size_t nBlocks;
        size_t nSize;
        size_t nAllocBlock;
        struct D2PoolBlockStrc * pBlocks;
        struct D2PoolBlockStrc * pTail;
    };

    struct D2PoolManagerStrc {
        int nPoolId; /* related to pool count.. */
        CRITICAL_SECTION pSync;
        size_t nPools;
        struct D2PoolStrc pPools[40];
        size_t nBlocks;
        size_t nTotalBlocks;
        struct D2PoolBlockEntryStrc * pBlocks;
        BYTE * pOverflow[1023];
        DWORD dwMemory;
        char szName[32];
    };

    struct D2CorpseStrc {
        enum eD2UnitType eCorpseType;
        int nCorpseGUID;
        struct D2CorpseStrc * pPrev;
    };

    struct D2DrlgRoomExSub54Sub14Strc {
        struct D2DrlgRoomExSub54Sub14RoomTileStrc * pTilesWalls;
        int nTilesWallsSize;
        struct D2DrlgRoomExSub54Sub14RoomTileStrc * pTilesFloors; /* Created by retype action */
        int nTilesFloorsSize;
        struct D2DrlgRoomExSub54Sub14RoomTileStrc * pTilesObjects; /* This is just a guess */
        int nTilesObjectsSize;
    };

    struct D2DrlgRoomExSub54RoomTileStrc {
        undefined4 field_0x0;
        undefined4 field_0x4;
        struct D2DrlgRoomExSub54RoomTileStrc * nNext; /* Created by retype action */
        undefined4 field_0xc;
        undefined4 field_0x10;
        struct D2DrlgRoomExSub54Sub14Strc sSub14;
    };

    struct D2DrlgRoomExDataPreset {
        int Def;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        undefined field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        undefined field_0x48;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        undefined field_0x50;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
        undefined field_0x54;
        undefined field_0x55;
        undefined field_0x56;
        undefined field_0x57;
        undefined field_0x58;
        undefined field_0x59;
        undefined field_0x5a;
        undefined field_0x5b;
        undefined field_0x5c;
        undefined field_0x5d;
        undefined field_0x5e;
        undefined field_0x5f;
        undefined field_0x60;
        undefined field_0x61;
        undefined field_0x62;
        undefined field_0x63;
        undefined field_0x64;
        undefined field_0x65;
        undefined field_0x66;
        undefined field_0x67;
        undefined field_0x68;
        undefined field_0x69;
        undefined field_0x6a;
        undefined field_0x6b;
        undefined field_0x6c;
        undefined field_0x6d;
        undefined field_0x6e;
        undefined field_0x6f;
        undefined field_0x70;
        undefined field_0x71;
        undefined field_0x72;
        undefined field_0x73;
        undefined field_0x74;
        undefined field_0x75;
        undefined field_0x76;
        undefined field_0x77;
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        undefined field_0x80;
        undefined field_0x81;
        undefined field_0x82;
        undefined field_0x83;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        undefined field_0x90;
        undefined field_0x91;
        undefined field_0x92;
        undefined field_0x93;
        undefined field_0x94;
        undefined field_0x95;
        undefined field_0x96;
        undefined field_0x97;
        undefined field_0x98;
        undefined field_0x99;
        undefined field_0x9a;
        undefined field_0x9b;
        undefined field_0x9c;
        undefined field_0x9d;
        undefined field_0x9e;
        undefined field_0x9f;
        undefined field_0xa0;
        undefined field_0xa1;
        undefined field_0xa2;
        undefined field_0xa3;
        undefined field_0xa4;
        undefined field_0xa5;
        undefined field_0xa6;
        undefined field_0xa7;
        undefined field_0xa8;
        undefined field_0xa9;
        undefined field_0xaa;
        undefined field_0xab;
        undefined field_0xac;
        undefined field_0xad;
        undefined field_0xae;
        undefined field_0xaf;
        undefined field_0xb0;
        undefined field_0xb1;
        undefined field_0xb2;
        undefined field_0xb3;
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        undefined field_0xb8;
        undefined field_0xb9;
        undefined field_0xba;
        undefined field_0xbb;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        undefined field_0xc4;
        undefined field_0xc5;
        undefined field_0xc6;
        undefined field_0xc7;
        undefined field_0xc8;
        undefined field_0xc9;
        undefined field_0xca;
        undefined field_0xcb;
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        undefined field_0xd0;
        undefined field_0xd1;
        undefined field_0xd2;
        undefined field_0xd3;
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        undefined field_0xd8;
        undefined field_0xd9;
        undefined field_0xda;
        undefined field_0xdb;
        undefined field_0xdc;
        undefined field_0xdd;
        undefined field_0xde;
        undefined field_0xdf;
        undefined field_0xe0;
        undefined field_0xe1;
        undefined field_0xe2;
        undefined field_0xe3;
        undefined field_0xe4;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        undefined field_0xe8;
        undefined field_0xe9;
        undefined field_0xea;
        undefined field_0xeb;
        undefined field_0xec;
        undefined field_0xed;
        undefined field_0xee;
        undefined field_0xef;
        struct D2DrlgRoomExDataPresetWorldCoordinatesBurialGrounds * sWorldPointsBurialGrounds;
        int nWorldPointsBurialGroundsSize; /* Created by retype action */
    };

    struct D2EventStrc {
        struct D2EventEntryStrc aEvents[600];
        struct D2EventStrc * pNext;
        struct D2EventStrc * pPrev;
    };

    struct D2QuestGUIDStrc {
        int aPlayerGUID[32];
        short nPlayerCount;
    };

    struct D2QuestDataCallbacksStrc {
        void (* fpQuestStateHandler[15])(struct D2QuestDataStrc *, struct D2QuestArgStrc *);
    };

    union D2UnitEvent {
        struct D2CUnitEventStrc * pClientEvent;
        struct D2SUnitEventStrc * pServerEvent;
    };

    struct D2UnitDataMonsterStrc {
        undefined4 pMonStatsTxt;
        struct D2MonsterDataComponents Components;
        short nNameSeed;
        enum D2MonsterDataMonType eMonType;
        byte eLastMode;
        int nDuriel;
        byte MonUModList[9];
        undefined field_0x25;
        short nBossNo;
        struct D2MonsterAiGeneralStrc * pMonsterAiGeneral;
        struct D2MonsterModeStrc * pMonsterMode;
        struct D2MonsterAiStrc * pMonsterAi;
        undefined4 field_0x34;
        undefined4 field_0x38;
        undefined4 field_0x3c;
        int nNecroPet;
        undefined4 field_0x44;
        undefined4 field_0x48;
        undefined4 field_0x4c;
        pointer pVision;
        int nAiState;
        enum eD2LevelId eD2LevelId;
        int nSummonerFlags;
    };

    struct D2LvlMazeTxt {
        enum eD2LevelId Level; /* ID from D2LevelsTxt */
        int Rooms[3]; /* the minimum number of .ds1 map sections that will make up the maze in Normal, Nightmare and Hell difficulties. */
        int SizeX; /* The size in the X\Y direction of any component ds1 map section. */
        int SizeY; /* The size in the X\Y direction of any component ds1 map section. */
        int Merge; /* Possibly related to how adjacent .ds1s are connected with each other, but what the different values are for is unknown. */
    };

    struct D2StaticPathStrc { /* Used for ITEM, OBJECT, WARP */
        short xOffset;
        short xPos;
        short yOffset;
        short yPos;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        word xTarget;
        word yTarget;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined4 field_0x18;
        struct D2DrlgRoomStrc * pRoom;
    };

    struct D2MonsterRegionStrc {
        char nAct;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        int nRoomsCount;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        int nLevelRoomsCount;
        int nCounter;
        struct D2MonsterRegionFieldStrc sEntry[2];
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        undefined field_0x80;
        undefined field_0x81;
        undefined field_0x82;
        undefined field_0x83;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        undefined field_0x90;
        undefined field_0x91;
        undefined field_0x92;
        undefined field_0x93;
        undefined field_0x94;
        undefined field_0x95;
        undefined field_0x96;
        undefined field_0x97;
        undefined field_0x98;
        undefined field_0x99;
        undefined field_0x9a;
        undefined field_0x9b;
        undefined field_0x9c;
        undefined field_0x9d;
        undefined field_0x9e;
        undefined field_0x9f;
        undefined field_0xa0;
        undefined field_0xa1;
        undefined field_0xa2;
        undefined field_0xa3;
        undefined field_0xa4;
        undefined field_0xa5;
        undefined field_0xa6;
        undefined field_0xa7;
        undefined field_0xa8;
        undefined field_0xa9;
        undefined field_0xaa;
        undefined field_0xab;
        undefined field_0xac;
        undefined field_0xad;
        undefined field_0xae;
        undefined field_0xaf;
        undefined field_0xb0;
        undefined field_0xb1;
        undefined field_0xb2;
        undefined field_0xb3;
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        undefined field_0xb8;
        undefined field_0xb9;
        undefined field_0xba;
        undefined field_0xbb;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        undefined field_0xc4;
        undefined field_0xc5;
        undefined field_0xc6;
        undefined field_0xc7;
        undefined field_0xc8;
        undefined field_0xc9;
        undefined field_0xca;
        undefined field_0xcb;
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        undefined field_0xd0;
        undefined field_0xd1;
        undefined field_0xd2;
        undefined field_0xd3;
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        undefined field_0xd8;
        undefined field_0xd9;
        undefined field_0xda;
        undefined field_0xdb;
        undefined field_0xdc;
        undefined field_0xdd;
        undefined field_0xde;
        undefined field_0xdf;
        undefined field_0xe0;
        undefined field_0xe1;
        undefined field_0xe2;
        undefined field_0xe3;
        undefined field_0xe4;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        undefined field_0xe8;
        undefined field_0xe9;
        undefined field_0xea;
        undefined field_0xeb;
        undefined field_0xec;
        undefined field_0xed;
        undefined field_0xee;
        undefined field_0xef;
        undefined field_0xf0;
        undefined field_0xf1;
        undefined field_0xf2;
        undefined field_0xf3;
        undefined field_0xf4;
        undefined field_0xf5;
        undefined field_0xf6;
        undefined field_0xf7;
        undefined field_0xf8;
        undefined field_0xf9;
        undefined field_0xfa;
        undefined field_0xfb;
        undefined field_0xfc;
        undefined field_0xfd;
        undefined field_0xfe;
        undefined field_0xff;
        undefined field_0x100;
        undefined field_0x101;
        undefined field_0x102;
        undefined field_0x103;
        undefined field_0x104;
        undefined field_0x105;
        undefined field_0x106;
        undefined field_0x107;
        undefined field_0x108;
        undefined field_0x109;
        undefined field_0x10a;
        undefined field_0x10b;
        undefined field_0x10c;
        undefined field_0x10d;
        undefined field_0x10e;
        undefined field_0x10f;
        undefined field_0x110;
        undefined field_0x111;
        undefined field_0x112;
        undefined field_0x113;
        undefined field_0x114;
        undefined field_0x115;
        undefined field_0x116;
        undefined field_0x117;
        undefined field_0x118;
        undefined field_0x119;
        undefined field_0x11a;
        undefined field_0x11b;
        undefined field_0x11c;
        undefined field_0x11d;
        undefined field_0x11e;
        undefined field_0x11f;
        undefined field_0x120;
        undefined field_0x121;
        undefined field_0x122;
        undefined field_0x123;
        undefined field_0x124;
        undefined field_0x125;
        undefined field_0x126;
        undefined field_0x127;
        undefined field_0x128;
        undefined field_0x129;
        undefined field_0x12a;
        undefined field_0x12b;
        undefined field_0x12c;
        undefined field_0x12d;
        undefined field_0x12e;
        undefined field_0x12f;
        undefined field_0x130;
        undefined field_0x131;
        undefined field_0x132;
        undefined field_0x133;
        undefined field_0x134;
        undefined field_0x135;
        undefined field_0x136;
        undefined field_0x137;
        undefined field_0x138;
        undefined field_0x139;
        undefined field_0x13a;
        undefined field_0x13b;
        undefined field_0x13c;
        undefined field_0x13d;
        undefined field_0x13e;
        undefined field_0x13f;
        undefined field_0x140;
        undefined field_0x141;
        undefined field_0x142;
        undefined field_0x143;
        undefined field_0x144;
        undefined field_0x145;
        undefined field_0x146;
        undefined field_0x147;
        undefined field_0x148;
        undefined field_0x149;
        undefined field_0x14a;
        undefined field_0x14b;
        undefined field_0x14c;
        undefined field_0x14d;
        undefined field_0x14e;
        undefined field_0x14f;
        undefined field_0x150;
        undefined field_0x151;
        undefined field_0x152;
        undefined field_0x153;
        undefined field_0x154;
        undefined field_0x155;
        undefined field_0x156;
        undefined field_0x157;
        undefined field_0x158;
        undefined field_0x159;
        undefined field_0x15a;
        undefined field_0x15b;
        undefined field_0x15c;
        undefined field_0x15d;
        undefined field_0x15e;
        undefined field_0x15f;
        undefined field_0x160;
        undefined field_0x161;
        undefined field_0x162;
        undefined field_0x163;
        undefined field_0x164;
        undefined field_0x165;
        undefined field_0x166;
        undefined field_0x167;
        undefined field_0x168;
        undefined field_0x169;
        undefined field_0x16a;
        undefined field_0x16b;
        undefined field_0x16c;
        undefined field_0x16d;
        undefined field_0x16e;
        undefined field_0x16f;
        undefined field_0x170;
        undefined field_0x171;
        undefined field_0x172;
        undefined field_0x173;
        undefined field_0x174;
        undefined field_0x175;
        undefined field_0x176;
        undefined field_0x177;
        undefined field_0x178;
        undefined field_0x179;
        undefined field_0x17a;
        undefined field_0x17b;
        undefined field_0x17c;
        undefined field_0x17d;
        undefined field_0x17e;
        undefined field_0x17f;
        undefined field_0x180;
        undefined field_0x181;
        undefined field_0x182;
        undefined field_0x183;
        undefined field_0x184;
        undefined field_0x185;
        undefined field_0x186;
        undefined field_0x187;
        undefined field_0x188;
        undefined field_0x189;
        undefined field_0x18a;
        undefined field_0x18b;
        undefined field_0x18c;
        undefined field_0x18d;
        undefined field_0x18e;
        undefined field_0x18f;
        undefined field_0x190;
        undefined field_0x191;
        undefined field_0x192;
        undefined field_0x193;
        undefined field_0x194;
        undefined field_0x195;
        undefined field_0x196;
        undefined field_0x197;
        undefined field_0x198;
        undefined field_0x199;
        undefined field_0x19a;
        undefined field_0x19b;
        undefined field_0x19c;
        undefined field_0x19d;
        undefined field_0x19e;
        undefined field_0x19f;
        undefined field_0x1a0;
        undefined field_0x1a1;
        undefined field_0x1a2;
        undefined field_0x1a3;
        undefined field_0x1a4;
        undefined field_0x1a5;
        undefined field_0x1a6;
        undefined field_0x1a7;
        undefined field_0x1a8;
        undefined field_0x1a9;
        undefined field_0x1aa;
        undefined field_0x1ab;
        undefined field_0x1ac;
        undefined field_0x1ad;
        undefined field_0x1ae;
        undefined field_0x1af;
        undefined field_0x1b0;
        undefined field_0x1b1;
        undefined field_0x1b2;
        undefined field_0x1b3;
        undefined field_0x1b4;
        undefined field_0x1b5;
        undefined field_0x1b6;
        undefined field_0x1b7;
        undefined field_0x1b8;
        undefined field_0x1b9;
        undefined field_0x1ba;
        undefined field_0x1bb;
        undefined field_0x1bc;
        undefined field_0x1bd;
        undefined field_0x1be;
        undefined field_0x1bf;
        undefined field_0x1c0;
        undefined field_0x1c1;
        undefined field_0x1c2;
        undefined field_0x1c3;
        undefined field_0x1c4;
        undefined field_0x1c5;
        undefined field_0x1c6;
        undefined field_0x1c7;
        undefined field_0x1c8;
        undefined field_0x1c9;
        undefined field_0x1ca;
        undefined field_0x1cb;
        undefined field_0x1cc;
        undefined field_0x1cd;
        undefined field_0x1ce;
        undefined field_0x1cf;
        undefined field_0x1d0;
        undefined field_0x1d1;
        undefined field_0x1d2;
        undefined field_0x1d3;
        undefined field_0x1d4;
        undefined field_0x1d5;
        undefined field_0x1d6;
        undefined field_0x1d7;
        undefined field_0x1d8;
        undefined field_0x1d9;
        undefined field_0x1da;
        undefined field_0x1db;
        undefined field_0x1dc;
        undefined field_0x1dd;
        undefined field_0x1de;
        undefined field_0x1df;
        undefined field_0x1e0;
        undefined field_0x1e1;
        undefined field_0x1e2;
        undefined field_0x1e3;
        undefined field_0x1e4;
        undefined field_0x1e5;
        undefined field_0x1e6;
        undefined field_0x1e7;
        undefined field_0x1e8;
        undefined field_0x1e9;
        undefined field_0x1ea;
        undefined field_0x1eb;
        undefined field_0x1ec;
        undefined field_0x1ed;
        undefined field_0x1ee;
        undefined field_0x1ef;
        undefined field_0x1f0;
        undefined field_0x1f1;
        undefined field_0x1f2;
        undefined field_0x1f3;
        undefined field_0x1f4;
        undefined field_0x1f5;
        undefined field_0x1f6;
        undefined field_0x1f7;
        undefined field_0x1f8;
        undefined field_0x1f9;
        undefined field_0x1fa;
        undefined field_0x1fb;
        undefined field_0x1fc;
        undefined field_0x1fd;
        undefined field_0x1fe;
        undefined field_0x1ff;
        undefined field_0x200;
        undefined field_0x201;
        undefined field_0x202;
        undefined field_0x203;
        undefined field_0x204;
        undefined field_0x205;
        undefined field_0x206;
        undefined field_0x207;
        undefined field_0x208;
        undefined field_0x209;
        undefined field_0x20a;
        undefined field_0x20b;
        undefined field_0x20c;
        undefined field_0x20d;
        undefined field_0x20e;
        undefined field_0x20f;
        undefined field_0x210;
        undefined field_0x211;
        undefined field_0x212;
        undefined field_0x213;
        undefined field_0x214;
        undefined field_0x215;
        undefined field_0x216;
        undefined field_0x217;
        undefined field_0x218;
        undefined field_0x219;
        undefined field_0x21a;
        undefined field_0x21b;
        undefined field_0x21c;
        undefined field_0x21d;
        undefined field_0x21e;
        undefined field_0x21f;
        undefined field_0x220;
        undefined field_0x221;
        undefined field_0x222;
        undefined field_0x223;
        undefined field_0x224;
        undefined field_0x225;
        undefined field_0x226;
        undefined field_0x227;
        undefined field_0x228;
        undefined field_0x229;
        undefined field_0x22a;
        undefined field_0x22b;
        undefined field_0x22c;
        undefined field_0x22d;
        undefined field_0x22e;
        undefined field_0x22f;
        undefined field_0x230;
        undefined field_0x231;
        undefined field_0x232;
        undefined field_0x233;
        undefined field_0x234;
        undefined field_0x235;
        undefined field_0x236;
        undefined field_0x237;
        undefined field_0x238;
        undefined field_0x239;
        undefined field_0x23a;
        undefined field_0x23b;
        undefined field_0x23c;
        undefined field_0x23d;
        undefined field_0x23e;
        undefined field_0x23f;
        undefined field_0x240;
        undefined field_0x241;
        undefined field_0x242;
        undefined field_0x243;
        undefined field_0x244;
        undefined field_0x245;
        undefined field_0x246;
        undefined field_0x247;
        undefined field_0x248;
        undefined field_0x249;
        undefined field_0x24a;
        undefined field_0x24b;
        undefined field_0x24c;
        undefined field_0x24d;
        undefined field_0x24e;
        undefined field_0x24f;
        undefined field_0x250;
        undefined field_0x251;
        undefined field_0x252;
        undefined field_0x253;
        undefined field_0x254;
        undefined field_0x255;
        undefined field_0x256;
        undefined field_0x257;
        undefined field_0x258;
        undefined field_0x259;
        undefined field_0x25a;
        undefined field_0x25b;
        undefined field_0x25c;
        undefined field_0x25d;
        undefined field_0x25e;
        undefined field_0x25f;
        undefined field_0x260;
        undefined field_0x261;
        undefined field_0x262;
        undefined field_0x263;
        undefined field_0x264;
        undefined field_0x265;
        undefined field_0x266;
        undefined field_0x267;
        undefined field_0x268;
        undefined field_0x269;
        undefined field_0x26a;
        undefined field_0x26b;
        undefined field_0x26c;
        undefined field_0x26d;
        undefined field_0x26e;
        undefined field_0x26f;
        undefined field_0x270;
        undefined field_0x271;
        undefined field_0x272;
        undefined field_0x273;
        undefined field_0x274;
        undefined field_0x275;
        undefined field_0x276;
        undefined field_0x277;
        undefined field_0x278;
        undefined field_0x279;
        undefined field_0x27a;
        undefined field_0x27b;
        undefined field_0x27c;
        undefined field_0x27d;
        undefined field_0x27e;
        undefined field_0x27f;
        undefined field_0x280;
        undefined field_0x281;
        undefined field_0x282;
        undefined field_0x283;
        undefined field_0x284;
        undefined field_0x285;
        undefined field_0x286;
        undefined field_0x287;
        undefined field_0x288;
        undefined field_0x289;
        undefined field_0x28a;
        undefined field_0x28b;
        undefined field_0x28c;
        undefined field_0x28d;
        undefined field_0x28e;
        undefined field_0x28f;
        undefined field_0x290;
        undefined field_0x291;
        undefined field_0x292;
        undefined field_0x293;
        undefined field_0x294;
        undefined field_0x295;
        undefined field_0x296;
        undefined field_0x297;
        undefined field_0x298;
        undefined field_0x299;
        undefined field_0x29a;
        undefined field_0x29b;
        undefined field_0x29c;
        undefined field_0x29d;
        undefined field_0x29e;
        undefined field_0x29f;
        undefined field_0x2a0;
        undefined field_0x2a1;
        undefined field_0x2a2;
        undefined field_0x2a3;
        undefined field_0x2a4;
        undefined field_0x2a5;
        undefined field_0x2a6;
        undefined field_0x2a7;
        undefined field_0x2a8;
        undefined field_0x2a9;
        undefined field_0x2aa;
        undefined field_0x2ab;
        undefined field_0x2ac;
        undefined field_0x2ad;
        undefined field_0x2ae;
        undefined field_0x2af;
        undefined field_0x2b0;
        undefined field_0x2b1;
        undefined field_0x2b2;
        undefined field_0x2b3;
        undefined field_0x2b4;
        undefined field_0x2b5;
        undefined field_0x2b6;
        undefined field_0x2b7;
        int nMonsterDensity; /* Created by retype action */
        undefined field_0x2bc;
        undefined field_0x2bd;
        char MonWndr;
        undefined field_0x2bf;
        int nInitSeed; /* Created by retype action */
        undefined field_0x2c4;
        undefined field_0x2c5;
        undefined field_0x2c6;
        undefined field_0x2c7;
        undefined field_0x2c8;
        undefined field_0x2c9;
        undefined field_0x2ca;
        undefined field_0x2cb;
        int nSpawnedMonstersCount;
        int nKilledMonsterCount;
        undefined field_0x2d4;
        undefined field_0x2d5;
        undefined field_0x2d6;
        undefined field_0x2d7;
        bool bQuest;
        undefined field_0x2d9;
        undefined field_0x2da;
        undefined field_0x2db;
        int nMonLvl;
        int nMonLvlAgain; /* Created by retype action */
    };

    struct D2SUnitMsgStrc { /* Size is different for each type */
        struct D2SUnitMsgStrc * pNext;
        undefined4 nPacketId;
        byte nArgs[16];
    };

    struct D2DrlgLevelSub1B0Strc {
        void * field_0x0;
        int nRandomMapFileSelector; /* Created by retype action */
        struct D2LvlPrestTxt * pTxtLevelPrest;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        int nRealOffsetX;
        int nRealOffsetY;
        int nSizeX;
        int nSizeY;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        undefined field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        undefined field_0x48;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        undefined field_0x50;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
        struct D2DrlgLevelSub1B0Strc * pNext;
    };

    struct D2AiParamStrc {
        struct D2MonsterAiGeneralStrc * pMonsterAiGeneral;
        void (* fpAiFunction)(struct D2GameStrc *, struct D2UnitStrc *, struct D2AiParamStrc *);
        struct D2UnitStrc * pTarget;
        int field_0xc;
        int field_0x10;
        int nDistanceToTarget;
        BOOL bEngagedInCombat;
        struct D2MonStatsTxt * pMonStats;
        struct D2MonStats2Txt * pMonStats2;
    };

    struct D2PresetUnitStrc {
        BOOL bUseMonStatsMaybe;
        int nMonStatsId;
        int nPosX;
        struct D2PresetUnitStrc * pPresetUnitNext; /* Created by retype action */
        int field_0x10;
        enum eD2UnitType eD2UnitType;
        int nPosY;
        int nFlags;
    };

    struct D2DrlgActWarpsInfoStrc {
        enum eD2LevelId nLevelId;
        enum eD2LevelId nTargetArea[8];
        int nWarpId[8];
        struct D2DrlgActWarpsInfoStrc * pNext;
    };

    struct D2StatListStrc {
        struct D2PoolManagerStrc * pMemory;
        struct D2UnitStrc * pUnitAttached;
        enum eD2UnitType eOwnerType;
        int nOwnerGUID;
        enum eD2StatListFlags nFlags;
        enum eD2States eState;
        int nTimeout;
        enum eD2Skills eSkill;
        int nSkillLevel;
        struct D2StatInfoStrc sStatInfo;
        struct D2StatListExStrc * pPrevLink;
        struct D2StatListExStrc * pNextLink;
        struct D2StatListExStrc * pParent;
        pointer fpExpire;
    };

    struct D2DynamicPathStrc {
        int field_0x0;
        int field_0x4;
        int field_0x8;
        int field_0xc;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        struct D2DrlgRoomStrc * pRoom;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        struct D2UnitStrc * pOwner;
        int nFlags; /* Created by retype action */
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        int field_0x3c;
        int field_0x40;
        int nOwnerSizeX; /* Created by retype action */
        int nInteractSizeX; /* Created by retype action */
        int field_0x4c;
        int field_0x50;
        undefined field_0x54;
        undefined field_0x55;
        undefined field_0x56;
        undefined field_0x57;
        struct D2UnitStrc * pTargetUnit; /* Created by retype action */
        enum eD2UnitType eTargetType;
        int nTargetGUID;
        undefined field_0x64;
        undefined field_0x65;
        undefined field_0x66;
        undefined field_0x67;
        undefined field_0x68;
        undefined field_0x69;
        undefined field_0x6a;
        undefined field_0x6b;
        undefined field_0x6c;
        undefined field_0x6d;
        undefined field_0x6e;
        undefined field_0x6f;
        undefined field_0x70;
        undefined field_0x71;
        undefined field_0x72;
        undefined field_0x73;
        undefined field_0x74;
        undefined field_0x75;
        undefined field_0x76;
        undefined field_0x77;
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        int field_0x7c;
        int field_0x80;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        undefined field_0x90;
        byte field_0x91;
        byte field_0x92;
        byte field_0x93;
        undefined field_0x94;
        undefined field_0x95;
        undefined field_0x96;
        undefined field_0x97;
        int field_0x98;
        undefined field_0x9c;
        undefined field_0x9d;
        undefined field_0x9e;
        undefined field_0x9f;
        undefined field_0xa0;
        undefined field_0xa1;
        undefined field_0xa2;
        undefined field_0xa3;
        undefined field_0xa4;
        undefined field_0xa5;
        undefined field_0xa6;
        undefined field_0xa7;
        undefined field_0xa8;
        undefined field_0xa9;
        undefined field_0xaa;
        undefined field_0xab;
        undefined field_0xac;
        undefined field_0xad;
        undefined field_0xae;
        undefined field_0xaf;
        undefined field_0xb0;
        undefined field_0xb1;
        undefined field_0xb2;
        undefined field_0xb3;
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        undefined field_0xb8;
        undefined field_0xb9;
        undefined field_0xba;
        undefined field_0xbb;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        undefined field_0xc4;
        undefined field_0xc5;
        undefined field_0xc6;
        undefined field_0xc7;
        undefined field_0xc8;
        undefined field_0xc9;
        undefined field_0xca;
        undefined field_0xcb;
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        undefined field_0xd0;
        undefined field_0xd1;
        undefined field_0xd2;
        undefined field_0xd3;
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        undefined field_0xd8;
        undefined field_0xd9;
        undefined field_0xda;
        undefined field_0xdb;
        undefined field_0xdc;
        undefined field_0xdd;
        undefined field_0xde;
        undefined field_0xdf;
        undefined field_0xe0;
        undefined field_0xe1;
        undefined field_0xe2;
        undefined field_0xe3;
        undefined field_0xe4;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        undefined field_0xe8;
        undefined field_0xe9;
        undefined field_0xea;
        undefined field_0xeb;
        undefined field_0xec;
        undefined field_0xed;
        undefined field_0xee;
        undefined field_0xef;
        undefined field_0xf0;
        undefined field_0xf1;
        undefined field_0xf2;
        undefined field_0xf3;
        undefined field_0xf4;
        undefined field_0xf5;
        undefined field_0xf6;
        undefined field_0xf7;
        undefined field_0xf8;
        undefined field_0xf9;
        undefined field_0xfa;
        undefined field_0xfb;
        undefined field_0xfc;
        undefined field_0xfd;
        undefined field_0xfe;
        undefined field_0xff;
        undefined field_0x100;
        undefined field_0x101;
        undefined field_0x102;
        undefined field_0x103;
        undefined field_0x104;
        undefined field_0x105;
        undefined field_0x106;
        undefined field_0x107;
        undefined field_0x108;
        undefined field_0x109;
        undefined field_0x10a;
        undefined field_0x10b;
        undefined field_0x10c;
        undefined field_0x10d;
        undefined field_0x10e;
        undefined field_0x10f;
        undefined field_0x110;
        undefined field_0x111;
        undefined field_0x112;
        undefined field_0x113;
        undefined field_0x114;
        undefined field_0x115;
        undefined field_0x116;
        undefined field_0x117;
        undefined field_0x118;
        undefined field_0x119;
        undefined field_0x11a;
        undefined field_0x11b;
        undefined field_0x11c;
        undefined field_0x11d;
        undefined field_0x11e;
        undefined field_0x11f;
        undefined field_0x120;
        undefined field_0x121;
        undefined field_0x122;
        undefined field_0x123;
        undefined field_0x124;
        undefined field_0x125;
        undefined field_0x126;
        undefined field_0x127;
        undefined field_0x128;
        undefined field_0x129;
        undefined field_0x12a;
        undefined field_0x12b;
        undefined field_0x12c;
        undefined field_0x12d;
        undefined field_0x12e;
        undefined field_0x12f;
        undefined field_0x130;
        undefined field_0x131;
        undefined field_0x132;
        undefined field_0x133;
        undefined field_0x134;
        undefined field_0x135;
        undefined field_0x136;
        undefined field_0x137;
        undefined field_0x138;
        undefined field_0x139;
        undefined field_0x13a;
        undefined field_0x13b;
        undefined field_0x13c;
        undefined field_0x13d;
        undefined field_0x13e;
        undefined field_0x13f;
        undefined field_0x140;
        undefined field_0x141;
        undefined field_0x142;
        undefined field_0x143;
        undefined field_0x144;
        undefined field_0x145;
        undefined field_0x146;
        undefined field_0x147;
        undefined field_0x148;
        undefined field_0x149;
        undefined field_0x14a;
        undefined field_0x14b;
        undefined field_0x14c;
        undefined field_0x14d;
        undefined field_0x14e;
        undefined field_0x14f;
        undefined field_0x150;
        undefined field_0x151;
        undefined field_0x152;
        undefined field_0x153;
        undefined field_0x154;
        undefined field_0x155;
        undefined field_0x156;
        undefined field_0x157;
        undefined field_0x158;
        undefined field_0x159;
        undefined field_0x15a;
        undefined field_0x15b;
        undefined field_0x15c;
        undefined field_0x15d;
        undefined field_0x15e;
        undefined field_0x15f;
        undefined field_0x160;
        undefined field_0x161;
        undefined field_0x162;
        undefined field_0x163;
        undefined field_0x164;
        undefined field_0x165;
        undefined field_0x166;
        undefined field_0x167;
        undefined field_0x168;
        undefined field_0x169;
        undefined field_0x16a;
        undefined field_0x16b;
        undefined field_0x16c;
        undefined field_0x16d;
        undefined field_0x16e;
        undefined field_0x16f;
        undefined field_0x170;
        undefined field_0x171;
        undefined field_0x172;
        undefined field_0x173;
        undefined field_0x174;
        undefined field_0x175;
        undefined field_0x176;
        undefined field_0x177;
        undefined field_0x178;
        undefined field_0x179;
        undefined field_0x17a;
        undefined field_0x17b;
        undefined field_0x17c;
        undefined field_0x17d;
        undefined field_0x17e;
        undefined field_0x17f;
        undefined field_0x180;
        undefined field_0x181;
        undefined field_0x182;
        undefined field_0x183;
        undefined field_0x184;
        undefined field_0x185;
        undefined field_0x186;
        undefined field_0x187;
        undefined field_0x188;
        undefined field_0x189;
        undefined field_0x18a;
        undefined field_0x18b;
        undefined field_0x18c;
        undefined field_0x18d;
        undefined field_0x18e;
        undefined field_0x18f;
        undefined field_0x190;
        undefined field_0x191;
        undefined field_0x192;
        undefined field_0x193;
        undefined field_0x194;
        undefined field_0x195;
        undefined field_0x196;
        undefined field_0x197;
        undefined field_0x198;
        undefined field_0x199;
        undefined field_0x19a;
        undefined field_0x19b;
        undefined field_0x19c;
        undefined field_0x19d;
        undefined field_0x19e;
        undefined field_0x19f;
        undefined field_0x1a0;
        undefined field_0x1a1;
        undefined field_0x1a2;
        undefined field_0x1a3;
        undefined field_0x1a4;
        undefined field_0x1a5;
        undefined field_0x1a6;
        undefined field_0x1a7;
        undefined field_0x1a8;
        undefined field_0x1a9;
        undefined field_0x1aa;
        undefined field_0x1ab;
        undefined field_0x1ac;
        undefined field_0x1ad;
        undefined field_0x1ae;
        undefined field_0x1af;
        undefined field_0x1b0;
        undefined field_0x1b1;
        undefined field_0x1b2;
        undefined field_0x1b3;
        undefined field_0x1b4;
        undefined field_0x1b5;
        undefined field_0x1b6;
        undefined field_0x1b7;
        undefined field_0x1b8;
        undefined field_0x1b9;
        undefined field_0x1ba;
        undefined field_0x1bb;
        undefined field_0x1bc;
        undefined field_0x1bd;
        undefined field_0x1be;
        undefined field_0x1bf;
        undefined field_0x1c0;
        undefined field_0x1c1;
        undefined field_0x1c2;
        undefined field_0x1c3;
        undefined field_0x1c4;
        undefined field_0x1c5;
        undefined field_0x1c6;
        undefined field_0x1c7;
        undefined field_0x1c8;
        undefined field_0x1c9;
        undefined field_0x1ca;
        undefined field_0x1cb;
        undefined field_0x1cc;
        undefined field_0x1cd;
        undefined field_0x1ce;
        undefined field_0x1cf;
        undefined field_0x1d0;
        undefined field_0x1d1;
        undefined field_0x1d2;
        undefined field_0x1d3;
        int field_0x1d4;
        short field_0x1d8;
        short field_0x1da;
        undefined field_0x1dc;
        undefined field_0x1dd;
        undefined field_0x1de;
        undefined field_0x1df;
        undefined field_0x1e0;
        undefined field_0x1e1;
        undefined field_0x1e2;
        undefined field_0x1e3;
        undefined field_0x1e4;
        undefined field_0x1e5;
        undefined field_0x1e6;
        undefined field_0x1e7;
        undefined field_0x1e8;
        undefined field_0x1e9;
        undefined field_0x1ea;
        undefined field_0x1eb;
        undefined field_0x1ec;
        undefined field_0x1ed;
        undefined field_0x1ee;
        undefined field_0x1ef;
        undefined field_0x1f0;
        undefined field_0x1f1;
        undefined field_0x1f2;
        undefined field_0x1f3;
        undefined field_0x1f4;
        undefined field_0x1f5;
        undefined field_0x1f6;
        undefined field_0x1f7;
        undefined field_0x1f8;
        undefined field_0x1f9;
        undefined field_0x1fa;
        undefined field_0x1fb;
        undefined field_0x1fc;
        undefined field_0x1fd;
        undefined field_0x1fe;
        undefined field_0x1ff;
    };

    struct D2DrlgRoomStrc {
        struct D2DrlgRoomStrc * * pDrlgRoomsNear;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        struct D2DrlgRoomExSub54Sub14Strc * spRoomExSub54Sub14; /* Pointer to Sub54 Sub14 field in RoomEx */
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        struct D2DrlgRoomExStrc * pDrlgRoomEx;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        struct D2CorpseStrc * pRoomCorpse; /* Created by retype action */
        struct D2UnitStrc * pUnit;
        struct D2DrlgRoomCollisionMap * pCollisionMap; /* Created by retype action */
        uint nRoomsNearCount; /* Created by retype action */
        int nPlayerUnitsCount;
        struct D2DrlgActStrc * pDrlgAct; /* Created by retype action */
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        undefined field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        pointer pClients;
        struct D2DrlgRoomCoordsStrc sCoords; /* Created by retype action */
        struct D2SeedStrc sSeed;
        struct D2UnitStrc * pUnitFirst;
        int nClientsCount;
        struct D2DrlgRoomStrc * pDrlgRoomNext; /* Created by retype action */
    };

    struct D2UnitDataPlayerPetsStrc {
        struct D2PetStrc * pPet;
    };

    struct D2DrlgActMiscStrc {
        struct D2SeedStrc nSeed;
        int field_0x8;
        undefined4 pTileProjects;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        undefined field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        undefined field_0x48;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        undefined field_0x50;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
        undefined field_0x54;
        undefined field_0x55;
        undefined field_0x56;
        undefined field_0x57;
        undefined field_0x58;
        undefined field_0x59;
        undefined field_0x5a;
        undefined field_0x5b;
        undefined field_0x5c;
        undefined field_0x5d;
        undefined field_0x5e;
        undefined field_0x5f;
        undefined field_0x60;
        undefined field_0x61;
        undefined field_0x62;
        undefined field_0x63;
        undefined field_0x64;
        undefined field_0x65;
        undefined field_0x66;
        undefined field_0x67;
        undefined field_0x68;
        undefined field_0x69;
        undefined field_0x6a;
        undefined field_0x6b;
        undefined field_0x6c;
        undefined field_0x6d;
        undefined field_0x6e;
        undefined field_0x6f;
        undefined field_0x70;
        undefined field_0x71;
        undefined field_0x72;
        undefined field_0x73;
        undefined field_0x74;
        undefined field_0x75;
        undefined field_0x76;
        undefined field_0x77;
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        undefined field_0x80;
        undefined field_0x81;
        undefined field_0x82;
        undefined field_0x83;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        int dwFlags;
        struct D2DrlgActWarpsInfoStrc * pWarpsInfo;
        uint nAct2_RealTombLevel;
        char field_0x98;
        undefined field_0x99;
        undefined field_0x9a;
        undefined field_0x9b;
        struct D2GameStrc * pGame;
        struct D2DrlgActMiscSubA0Strc * apSubA0[5];
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        undefined field_0xb8;
        undefined field_0xb9;
        undefined field_0xba;
        undefined field_0xbb;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        undefined field_0xc4;
        undefined field_0xc5;
        undefined field_0xc6;
        undefined field_0xc7;
        undefined field_0xc8;
        undefined field_0xc9;
        undefined field_0xca;
        undefined field_0xcb;
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        undefined field_0xd0;
        undefined field_0xd1;
        undefined field_0xd2;
        undefined field_0xd3;
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        undefined field_0xd8;
        undefined field_0xd9;
        undefined field_0xda;
        undefined field_0xdb;
        undefined field_0xdc;
        undefined field_0xdd;
        undefined field_0xde;
        undefined field_0xdf;
        undefined field_0xe0;
        undefined field_0xe1;
        undefined field_0xe2;
        undefined field_0xe3;
        undefined field_0xe4;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        int field_0xe8;
        undefined field_0xec;
        undefined field_0xed;
        undefined field_0xee;
        undefined field_0xef;
        undefined field_0xf0;
        undefined field_0xf1;
        undefined field_0xf2;
        undefined field_0xf3;
        undefined field_0xf4;
        undefined field_0xf5;
        undefined field_0xf6;
        undefined field_0xf7;
        undefined field_0xf8;
        undefined field_0xf9;
        undefined field_0xfa;
        undefined field_0xfb;
        undefined field_0xfc;
        undefined field_0xfd;
        undefined field_0xfe;
        undefined field_0xff;
        undefined field_0x100;
        undefined field_0x101;
        undefined field_0x102;
        undefined field_0x103;
        undefined field_0x104;
        undefined field_0x105;
        undefined field_0x106;
        undefined field_0x107;
        undefined field_0x108;
        undefined field_0x109;
        undefined field_0x10a;
        undefined field_0x10b;
        undefined field_0x10c;
        undefined field_0x10d;
        undefined field_0x10e;
        undefined field_0x10f;
        undefined field_0x110;
        undefined field_0x111;
        undefined field_0x112;
        undefined field_0x113;
        undefined field_0x114;
        undefined field_0x115;
        undefined field_0x116;
        undefined field_0x117;
        undefined field_0x118;
        undefined field_0x119;
        undefined field_0x11a;
        undefined field_0x11b;
        undefined field_0x11c;
        undefined field_0x11d;
        undefined field_0x11e;
        undefined field_0x11f;
        undefined field_0x120;
        undefined field_0x121;
        undefined field_0x122;
        undefined field_0x123;
        undefined field_0x124;
        undefined field_0x125;
        undefined field_0x126;
        undefined field_0x127;
        undefined field_0x128;
        undefined field_0x129;
        undefined field_0x12a;
        undefined field_0x12b;
        undefined field_0x12c;
        undefined field_0x12d;
        undefined field_0x12e;
        undefined field_0x12f;
        undefined field_0x130;
        undefined field_0x131;
        undefined field_0x132;
        undefined field_0x133;
        undefined field_0x134;
        undefined field_0x135;
        undefined field_0x136;
        undefined field_0x137;
        undefined field_0x138;
        undefined field_0x139;
        undefined field_0x13a;
        undefined field_0x13b;
        undefined field_0x13c;
        undefined field_0x13d;
        undefined field_0x13e;
        undefined field_0x13f;
        undefined field_0x140;
        undefined field_0x141;
        undefined field_0x142;
        undefined field_0x143;
        undefined field_0x144;
        undefined field_0x145;
        undefined field_0x146;
        undefined field_0x147;
        undefined field_0x148;
        undefined field_0x149;
        undefined field_0x14a;
        undefined field_0x14b;
        undefined field_0x14c;
        undefined field_0x14d;
        undefined field_0x14e;
        undefined field_0x14f;
        undefined field_0x150;
        undefined field_0x151;
        undefined field_0x152;
        undefined field_0x153;
        undefined field_0x154;
        undefined field_0x155;
        undefined field_0x156;
        undefined field_0x157;
        undefined field_0x158;
        undefined field_0x159;
        undefined field_0x15a;
        undefined field_0x15b;
        undefined field_0x15c;
        undefined field_0x15d;
        undefined field_0x15e;
        undefined field_0x15f;
        undefined field_0x160;
        undefined field_0x161;
        undefined field_0x162;
        undefined field_0x163;
        undefined field_0x164;
        undefined field_0x165;
        undefined field_0x166;
        undefined field_0x167;
        undefined field_0x168;
        undefined field_0x169;
        undefined field_0x16a;
        undefined field_0x16b;
        undefined field_0x16c;
        undefined field_0x16d;
        undefined field_0x16e;
        undefined field_0x16f;
        undefined field_0x170;
        undefined field_0x171;
        undefined field_0x172;
        undefined field_0x173;
        undefined field_0x174;
        undefined field_0x175;
        undefined field_0x176;
        undefined field_0x177;
        undefined field_0x178;
        undefined field_0x179;
        undefined field_0x17a;
        undefined field_0x17b;
        undefined field_0x17c;
        undefined field_0x17d;
        undefined field_0x17e;
        undefined field_0x17f;
        undefined field_0x180;
        undefined field_0x181;
        undefined field_0x182;
        undefined field_0x183;
        undefined field_0x184;
        undefined field_0x185;
        undefined field_0x186;
        undefined field_0x187;
        undefined field_0x188;
        undefined field_0x189;
        undefined field_0x18a;
        undefined field_0x18b;
        undefined field_0x18c;
        undefined field_0x18d;
        undefined field_0x18e;
        undefined field_0x18f;
        undefined field_0x190;
        undefined field_0x191;
        undefined field_0x192;
        undefined field_0x193;
        undefined field_0x194;
        undefined field_0x195;
        undefined field_0x196;
        undefined field_0x197;
        undefined field_0x198;
        undefined field_0x199;
        undefined field_0x19a;
        undefined field_0x19b;
        undefined field_0x19c;
        undefined field_0x19d;
        undefined field_0x19e;
        undefined field_0x19f;
        undefined field_0x1a0;
        undefined field_0x1a1;
        undefined field_0x1a2;
        undefined field_0x1a3;
        undefined field_0x1a4;
        undefined field_0x1a5;
        undefined field_0x1a6;
        undefined field_0x1a7;
        undefined field_0x1a8;
        undefined field_0x1a9;
        undefined field_0x1aa;
        undefined field_0x1ab;
        undefined field_0x1ac;
        undefined field_0x1ad;
        undefined field_0x1ae;
        undefined field_0x1af;
        undefined field_0x1b0;
        undefined field_0x1b1;
        undefined field_0x1b2;
        undefined field_0x1b3;
        undefined field_0x1b4;
        undefined field_0x1b5;
        undefined field_0x1b6;
        undefined field_0x1b7;
        undefined field_0x1b8;
        undefined field_0x1b9;
        undefined field_0x1ba;
        undefined field_0x1bb;
        undefined field_0x1bc;
        undefined field_0x1bd;
        undefined field_0x1be;
        undefined field_0x1bf;
        undefined field_0x1c0;
        undefined field_0x1c1;
        undefined field_0x1c2;
        undefined field_0x1c3;
        undefined field_0x1c4;
        undefined field_0x1c5;
        undefined field_0x1c6;
        undefined field_0x1c7;
        undefined field_0x1c8;
        undefined field_0x1c9;
        undefined field_0x1ca;
        undefined field_0x1cb;
        undefined field_0x1cc;
        undefined field_0x1cd;
        undefined field_0x1ce;
        undefined field_0x1cf;
        undefined field_0x1d0;
        undefined field_0x1d1;
        undefined field_0x1d2;
        undefined field_0x1d3;
        undefined field_0x1d4;
        undefined field_0x1d5;
        undefined field_0x1d6;
        undefined field_0x1d7;
        undefined field_0x1d8;
        undefined field_0x1d9;
        undefined field_0x1da;
        undefined field_0x1db;
        undefined field_0x1dc;
        undefined field_0x1dd;
        undefined field_0x1de;
        undefined field_0x1df;
        undefined field_0x1e0;
        undefined field_0x1e1;
        undefined field_0x1e2;
        undefined field_0x1e3;
        undefined field_0x1e4;
        undefined field_0x1e5;
        undefined field_0x1e6;
        undefined field_0x1e7;
        undefined field_0x1e8;
        undefined field_0x1e9;
        undefined field_0x1ea;
        undefined field_0x1eb;
        undefined field_0x1ec;
        undefined field_0x1ed;
        undefined field_0x1ee;
        undefined field_0x1ef;
        undefined field_0x1f0;
        undefined field_0x1f1;
        undefined field_0x1f2;
        undefined field_0x1f3;
        undefined field_0x1f4;
        undefined field_0x1f5;
        undefined field_0x1f6;
        undefined field_0x1f7;
        undefined field_0x1f8;
        undefined field_0x1f9;
        undefined field_0x1fa;
        undefined field_0x1fb;
        undefined field_0x1fc;
        undefined field_0x1fd;
        undefined field_0x1fe;
        undefined field_0x1ff;
        undefined field_0x200;
        undefined field_0x201;
        undefined field_0x202;
        undefined field_0x203;
        undefined field_0x204;
        undefined field_0x205;
        undefined field_0x206;
        undefined field_0x207;
        undefined field_0x208;
        undefined field_0x209;
        undefined field_0x20a;
        undefined field_0x20b;
        undefined field_0x20c;
        undefined field_0x20d;
        undefined field_0x20e;
        undefined field_0x20f;
        undefined field_0x210;
        undefined field_0x211;
        undefined field_0x212;
        undefined field_0x213;
        undefined field_0x214;
        undefined field_0x215;
        undefined field_0x216;
        undefined field_0x217;
        undefined field_0x218;
        undefined field_0x219;
        undefined field_0x21a;
        undefined field_0x21b;
        undefined field_0x21c;
        undefined field_0x21d;
        undefined field_0x21e;
        undefined field_0x21f;
        undefined field_0x220;
        undefined field_0x221;
        undefined field_0x222;
        undefined field_0x223;
        undefined field_0x224;
        undefined field_0x225;
        undefined field_0x226;
        undefined field_0x227;
        undefined field_0x228;
        undefined field_0x229;
        undefined field_0x22a;
        undefined field_0x22b;
        undefined field_0x22c;
        undefined field_0x22d;
        undefined field_0x22e;
        undefined field_0x22f;
        undefined field_0x230;
        undefined field_0x231;
        undefined field_0x232;
        undefined field_0x233;
        undefined field_0x234;
        undefined field_0x235;
        undefined field_0x236;
        undefined field_0x237;
        undefined field_0x238;
        undefined field_0x239;
        undefined field_0x23a;
        undefined field_0x23b;
        undefined field_0x23c;
        undefined field_0x23d;
        undefined field_0x23e;
        undefined field_0x23f;
        undefined field_0x240;
        undefined field_0x241;
        undefined field_0x242;
        undefined field_0x243;
        undefined field_0x244;
        undefined field_0x245;
        undefined field_0x246;
        undefined field_0x247;
        undefined field_0x248;
        undefined field_0x249;
        undefined field_0x24a;
        undefined field_0x24b;
        undefined field_0x24c;
        undefined field_0x24d;
        undefined field_0x24e;
        undefined field_0x24f;
        undefined field_0x250;
        undefined field_0x251;
        undefined field_0x252;
        undefined field_0x253;
        undefined field_0x254;
        undefined field_0x255;
        undefined field_0x256;
        undefined field_0x257;
        undefined field_0x258;
        undefined field_0x259;
        undefined field_0x25a;
        undefined field_0x25b;
        undefined field_0x25c;
        undefined field_0x25d;
        undefined field_0x25e;
        undefined field_0x25f;
        undefined field_0x260;
        undefined field_0x261;
        undefined field_0x262;
        undefined field_0x263;
        undefined field_0x264;
        undefined field_0x265;
        undefined field_0x266;
        undefined field_0x267;
        undefined field_0x268;
        undefined field_0x269;
        undefined field_0x26a;
        undefined field_0x26b;
        undefined field_0x26c;
        undefined field_0x26d;
        undefined field_0x26e;
        undefined field_0x26f;
        undefined field_0x270;
        undefined field_0x271;
        undefined field_0x272;
        undefined field_0x273;
        undefined field_0x274;
        undefined field_0x275;
        undefined field_0x276;
        undefined field_0x277;
        undefined field_0x278;
        undefined field_0x279;
        undefined field_0x27a;
        undefined field_0x27b;
        undefined field_0x27c;
        undefined field_0x27d;
        undefined field_0x27e;
        undefined field_0x27f;
        undefined field_0x280;
        undefined field_0x281;
        undefined field_0x282;
        undefined field_0x283;
        undefined field_0x284;
        undefined field_0x285;
        undefined field_0x286;
        undefined field_0x287;
        undefined field_0x288;
        undefined field_0x289;
        undefined field_0x28a;
        undefined field_0x28b;
        undefined field_0x28c;
        undefined field_0x28d;
        undefined field_0x28e;
        undefined field_0x28f;
        undefined field_0x290;
        undefined field_0x291;
        undefined field_0x292;
        undefined field_0x293;
        undefined field_0x294;
        undefined field_0x295;
        undefined field_0x296;
        undefined field_0x297;
        undefined field_0x298;
        undefined field_0x299;
        undefined field_0x29a;
        undefined field_0x29b;
        undefined field_0x29c;
        undefined field_0x29d;
        undefined field_0x29e;
        undefined field_0x29f;
        undefined field_0x2a0;
        undefined field_0x2a1;
        undefined field_0x2a2;
        undefined field_0x2a3;
        undefined field_0x2a4;
        undefined field_0x2a5;
        undefined field_0x2a6;
        undefined field_0x2a7;
        undefined field_0x2a8;
        undefined field_0x2a9;
        undefined field_0x2aa;
        undefined field_0x2ab;
        undefined field_0x2ac;
        undefined field_0x2ad;
        undefined field_0x2ae;
        undefined field_0x2af;
        undefined field_0x2b0;
        undefined field_0x2b1;
        undefined field_0x2b2;
        undefined field_0x2b3;
        undefined field_0x2b4;
        undefined field_0x2b5;
        undefined field_0x2b6;
        undefined field_0x2b7;
        undefined field_0x2b8;
        undefined field_0x2b9;
        undefined field_0x2ba;
        undefined field_0x2bb;
        undefined field_0x2bc;
        undefined field_0x2bd;
        undefined field_0x2be;
        undefined field_0x2bf;
        undefined field_0x2c0;
        undefined field_0x2c1;
        undefined field_0x2c2;
        undefined field_0x2c3;
        undefined field_0x2c4;
        undefined field_0x2c5;
        undefined field_0x2c6;
        undefined field_0x2c7;
        undefined field_0x2c8;
        undefined field_0x2c9;
        undefined field_0x2ca;
        undefined field_0x2cb;
        undefined field_0x2cc;
        undefined field_0x2cd;
        undefined field_0x2ce;
        undefined field_0x2cf;
        undefined field_0x2d0;
        undefined field_0x2d1;
        undefined field_0x2d2;
        undefined field_0x2d3;
        undefined field_0x2d4;
        undefined field_0x2d5;
        undefined field_0x2d6;
        undefined field_0x2d7;
        undefined field_0x2d8;
        undefined field_0x2d9;
        undefined field_0x2da;
        undefined field_0x2db;
        undefined field_0x2dc;
        undefined field_0x2dd;
        undefined field_0x2de;
        undefined field_0x2df;
        undefined field_0x2e0;
        undefined field_0x2e1;
        undefined field_0x2e2;
        undefined field_0x2e3;
        undefined field_0x2e4;
        undefined field_0x2e5;
        undefined field_0x2e6;
        undefined field_0x2e7;
        undefined field_0x2e8;
        undefined field_0x2e9;
        undefined field_0x2ea;
        undefined field_0x2eb;
        undefined field_0x2ec;
        undefined field_0x2ed;
        undefined field_0x2ee;
        undefined field_0x2ef;
        undefined field_0x2f0;
        undefined field_0x2f1;
        undefined field_0x2f2;
        undefined field_0x2f3;
        undefined field_0x2f4;
        undefined field_0x2f5;
        undefined field_0x2f6;
        undefined field_0x2f7;
        undefined field_0x2f8;
        undefined field_0x2f9;
        undefined field_0x2fa;
        undefined field_0x2fb;
        undefined field_0x2fc;
        undefined field_0x2fd;
        undefined field_0x2fe;
        undefined field_0x2ff;
        undefined field_0x300;
        undefined field_0x301;
        undefined field_0x302;
        undefined field_0x303;
        undefined field_0x304;
        undefined field_0x305;
        undefined field_0x306;
        undefined field_0x307;
        undefined field_0x308;
        undefined field_0x309;
        undefined field_0x30a;
        undefined field_0x30b;
        undefined field_0x30c;
        undefined field_0x30d;
        undefined field_0x30e;
        undefined field_0x30f;
        undefined field_0x310;
        undefined field_0x311;
        undefined field_0x312;
        undefined field_0x313;
        undefined field_0x314;
        undefined field_0x315;
        undefined field_0x316;
        undefined field_0x317;
        undefined field_0x318;
        undefined field_0x319;
        undefined field_0x31a;
        undefined field_0x31b;
        undefined field_0x31c;
        undefined field_0x31d;
        undefined field_0x31e;
        undefined field_0x31f;
        undefined field_0x320;
        undefined field_0x321;
        undefined field_0x322;
        undefined field_0x323;
        undefined field_0x324;
        undefined field_0x325;
        undefined field_0x326;
        undefined field_0x327;
        undefined field_0x328;
        undefined field_0x329;
        undefined field_0x32a;
        undefined field_0x32b;
        undefined field_0x32c;
        undefined field_0x32d;
        undefined field_0x32e;
        undefined field_0x32f;
        undefined field_0x330;
        undefined field_0x331;
        undefined field_0x332;
        undefined field_0x333;
        undefined field_0x334;
        undefined field_0x335;
        undefined field_0x336;
        undefined field_0x337;
        undefined field_0x338;
        undefined field_0x339;
        undefined field_0x33a;
        undefined field_0x33b;
        undefined field_0x33c;
        undefined field_0x33d;
        undefined field_0x33e;
        undefined field_0x33f;
        undefined field_0x340;
        undefined field_0x341;
        undefined field_0x342;
        undefined field_0x343;
        undefined field_0x344;
        undefined field_0x345;
        undefined field_0x346;
        undefined field_0x347;
        undefined field_0x348;
        undefined field_0x349;
        undefined field_0x34a;
        undefined field_0x34b;
        undefined field_0x34c;
        undefined field_0x34d;
        undefined field_0x34e;
        undefined field_0x34f;
        undefined field_0x350;
        undefined field_0x351;
        undefined field_0x352;
        undefined field_0x353;
        undefined field_0x354;
        undefined field_0x355;
        undefined field_0x356;
        undefined field_0x357;
        undefined field_0x358;
        undefined field_0x359;
        undefined field_0x35a;
        undefined field_0x35b;
        undefined field_0x35c;
        undefined field_0x35d;
        undefined field_0x35e;
        undefined field_0x35f;
        undefined field_0x360;
        undefined field_0x361;
        undefined field_0x362;
        undefined field_0x363;
        undefined field_0x364;
        undefined field_0x365;
        undefined field_0x366;
        undefined field_0x367;
        undefined field_0x368;
        undefined field_0x369;
        undefined field_0x36a;
        undefined field_0x36b;
        undefined field_0x36c;
        undefined field_0x36d;
        undefined field_0x36e;
        undefined field_0x36f;
        undefined field_0x370;
        undefined field_0x371;
        undefined field_0x372;
        undefined field_0x373;
        undefined field_0x374;
        undefined field_0x375;
        undefined field_0x376;
        undefined field_0x377;
        undefined field_0x378;
        undefined field_0x379;
        undefined field_0x37a;
        undefined field_0x37b;
        undefined field_0x37c;
        undefined field_0x37d;
        undefined field_0x37e;
        undefined field_0x37f;
        undefined field_0x380;
        undefined field_0x381;
        undefined field_0x382;
        undefined field_0x383;
        undefined field_0x384;
        undefined field_0x385;
        undefined field_0x386;
        undefined field_0x387;
        undefined field_0x388;
        undefined field_0x389;
        undefined field_0x38a;
        undefined field_0x38b;
        undefined field_0x38c;
        undefined field_0x38d;
        undefined field_0x38e;
        undefined field_0x38f;
        undefined field_0x390;
        undefined field_0x391;
        undefined field_0x392;
        undefined field_0x393;
        undefined field_0x394;
        undefined field_0x395;
        undefined field_0x396;
        undefined field_0x397;
        undefined field_0x398;
        undefined field_0x399;
        undefined field_0x39a;
        undefined field_0x39b;
        undefined field_0x39c;
        undefined field_0x39d;
        undefined field_0x39e;
        undefined field_0x39f;
        undefined field_0x3a0;
        undefined field_0x3a1;
        undefined field_0x3a2;
        undefined field_0x3a3;
        undefined field_0x3a4;
        undefined field_0x3a5;
        undefined field_0x3a6;
        undefined field_0x3a7;
        undefined field_0x3a8;
        undefined field_0x3a9;
        undefined field_0x3aa;
        undefined field_0x3ab;
        undefined field_0x3ac;
        undefined field_0x3ad;
        undefined field_0x3ae;
        undefined field_0x3af;
        undefined field_0x3b0;
        undefined field_0x3b1;
        undefined field_0x3b2;
        undefined field_0x3b3;
        undefined field_0x3b4;
        undefined field_0x3b5;
        undefined field_0x3b6;
        undefined field_0x3b7;
        undefined field_0x3b8;
        undefined field_0x3b9;
        undefined field_0x3ba;
        undefined field_0x3bb;
        undefined field_0x3bc;
        undefined field_0x3bd;
        undefined field_0x3be;
        undefined field_0x3bf;
        undefined field_0x3c0;
        undefined field_0x3c1;
        undefined field_0x3c2;
        undefined field_0x3c3;
        undefined field_0x3c4;
        undefined field_0x3c5;
        undefined field_0x3c6;
        undefined field_0x3c7;
        undefined field_0x3c8;
        undefined field_0x3c9;
        undefined field_0x3ca;
        undefined field_0x3cb;
        undefined field_0x3cc;
        undefined field_0x3cd;
        undefined field_0x3ce;
        undefined field_0x3cf;
        undefined field_0x3d0;
        undefined field_0x3d1;
        undefined field_0x3d2;
        undefined field_0x3d3;
        undefined field_0x3d4;
        undefined field_0x3d5;
        undefined field_0x3d6;
        undefined field_0x3d7;
        undefined field_0x3d8;
        undefined field_0x3d9;
        undefined field_0x3da;
        undefined field_0x3db;
        undefined field_0x3dc;
        undefined field_0x3dd;
        undefined field_0x3de;
        undefined field_0x3df;
        undefined field_0x3e0;
        undefined field_0x3e1;
        undefined field_0x3e2;
        undefined field_0x3e3;
        undefined field_0x3e4;
        undefined field_0x3e5;
        undefined field_0x3e6;
        undefined field_0x3e7;
        undefined field_0x3e8;
        undefined field_0x3e9;
        undefined field_0x3ea;
        undefined field_0x3eb;
        undefined field_0x3ec;
        undefined field_0x3ed;
        undefined field_0x3ee;
        undefined field_0x3ef;
        undefined field_0x3f0;
        undefined field_0x3f1;
        undefined field_0x3f2;
        undefined field_0x3f3;
        undefined field_0x3f4;
        undefined field_0x3f5;
        undefined field_0x3f6;
        undefined field_0x3f7;
        undefined field_0x3f8;
        undefined field_0x3f9;
        undefined field_0x3fa;
        undefined field_0x3fb;
        undefined field_0x3fc;
        undefined field_0x3fd;
        undefined field_0x3fe;
        undefined field_0x3ff;
        undefined field_0x400;
        undefined field_0x401;
        undefined field_0x402;
        undefined field_0x403;
        undefined field_0x404;
        undefined field_0x405;
        undefined field_0x406;
        undefined field_0x407;
        undefined field_0x408;
        undefined field_0x409;
        undefined field_0x40a;
        undefined field_0x40b;
        undefined field_0x40c;
        undefined field_0x40d;
        undefined field_0x40e;
        undefined field_0x40f;
        undefined field_0x410;
        undefined field_0x411;
        undefined field_0x412;
        undefined field_0x413;
        undefined field_0x414;
        undefined field_0x415;
        undefined field_0x416;
        undefined field_0x417;
        undefined field_0x418;
        undefined field_0x419;
        undefined field_0x41a;
        undefined field_0x41b;
        undefined field_0x41c;
        undefined field_0x41d;
        undefined field_0x41e;
        undefined field_0x41f;
        undefined field_0x420;
        undefined field_0x421;
        undefined field_0x422;
        undefined field_0x423;
        undefined field_0x424;
        undefined field_0x425;
        undefined field_0x426;
        undefined field_0x427;
        undefined field_0x428;
        undefined field_0x429;
        undefined field_0x42a;
        undefined field_0x42b;
        undefined field_0x42c;
        undefined field_0x42d;
        undefined field_0x42e;
        undefined field_0x42f;
        undefined field_0x430;
        undefined field_0x431;
        undefined field_0x432;
        undefined field_0x433;
        undefined field_0x434;
        undefined field_0x435;
        undefined field_0x436;
        undefined field_0x437;
        undefined field_0x438;
        undefined field_0x439;
        undefined field_0x43a;
        undefined field_0x43b;
        undefined field_0x43c;
        undefined field_0x43d;
        undefined field_0x43e;
        undefined field_0x43f;
        undefined field_0x440;
        undefined field_0x441;
        undefined field_0x442;
        undefined field_0x443;
        undefined field_0x444;
        undefined field_0x445;
        undefined field_0x446;
        undefined field_0x447;
        undefined field_0x448;
        undefined field_0x449;
        undefined field_0x44a;
        undefined field_0x44b;
        undefined field_0x44c;
        undefined field_0x44d;
        undefined field_0x44e;
        undefined field_0x44f;
        BYTE nDifficulty;
        undefined field_0x451;
        undefined field_0x452;
        undefined field_0x453;
        void (* pfAutoMap)(struct D2DrlgRoomStrc *);
        DWORD nInitSeed;
        undefined field_0x45c;
        undefined field_0x45d;
        undefined field_0x45e;
        undefined field_0x45f;
        undefined field_0x460;
        undefined field_0x461;
        undefined field_0x462;
        undefined field_0x463;
        DWORD nUnknownZero;
        undefined field_0x468;
        undefined field_0x469;
        undefined field_0x46a;
        undefined field_0x46b;
        struct D2DrlgActStrc * pAct;
        uint nSeedLast;
        uint nAct3_SpecificUnknown;
        struct D2PoolManagerStrc * pMemoryPool;
        struct D2DrlgLevelStrc * pLevel;
        char nActNo;
        undefined field_0x481;
        undefined field_0x482;
        undefined field_0x483;
        uint nAct2_BigTomb;
        void (* pfTownAutoMap)(enum eD2LevelId, int, int, int);
    };

    struct D2NPCMessageStrc {
        int nMonStatsId;
        short nStringIndex;
        short nPad;
        BOOL nMenu;
    };

    struct D2PartyDataStrc {
        undefined4 nUnitGUID;
        undefined4 nUnitLife_Maybe;
        enum eD2LevelId nUnitArea_Maybe;
        undefined4 field_0xc;
        struct D2PartyDataStrc * pPrev;
    };

    struct D2ObjectsTxt {
        char Name[64];
        WCHAR NameWideString[64];
        char Token[2];
        undefined field_0xc2;
        char SpawnMax;
        bool Selectable[8];
        char TrapProb;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        int SizeX;
        int SizeY;
        int FrameCnt[8];
        short FrameDelta[8];
        bool CycleAnim[8];
        char Lit[8];
        bool BlocksLight[8];
        bool HasCollision[8];
        bool IsAttackable;
        char Start[8];
        char OrderFlag[8];
        bool EnvEffect;
        bool IsDoor;
        bool BlocksVis;
        char Orientation;
        bool PreOperate;
        char Trans;
        bool Mode[8];
        undefined field_0x147;
        int Xoffset;
        int Yoffset;
        bool Draw;
        bool HD;
        bool TR;
        bool LG;
        bool RA;
        bool LA;
        bool RH;
        bool LH;
        bool SH;
        bool S1;
        bool S2;
        bool S3;
        bool S4;
        bool S5;
        bool S6;
        bool S7;
        bool S8;
        char TotalPieces;
        char XSpace;
        char YSpace;
        char Red;
        char Green;
        char Blue;
        char SubClass;
        int NameOffset;
        undefined field_0x16c;
        bool MonsterOK;
        char OperateRange;
        char ShrineFunction;
        char Act;
        bool Lockable;
        bool Gore;
        bool Restore;
        bool RestoreVirgins;
        bool Sync;
        int Parm[8];
        undefined field_0x196;
        undefined field_0x197;
        char nTgtFX;
        char nTgtFY;
        char nTgtBX;
        char nTgtBY;
        char Damage;
        bool CollisionSubst;
        undefined field_0x19e;
        undefined field_0x19f;
        int Left;
        int Top;
        int Width;
        int Height;
        char Beta;
        char InitFn;
        char PopulateFn;
        char OperateFn;
        char ClientFn;
        bool Overlay;
        char BlockMissile;
        bool DrawUnder;
        bool OpenWarp;
        undefined field_0x1b9;
        undefined field_0x1ba;
        undefined field_0x1bb;
        int AutoMap;
    };

    struct D2MonsterModeStrc {
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        int field_0x18;
        int field_0x1c;
        byte field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
    };

    struct D2DrlgRoomExDataOutRoom {
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        undefined field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        undefined field_0x48;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        undefined field_0x50;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
        undefined field_0x54;
        undefined field_0x55;
        undefined field_0x56;
        undefined field_0x57;
        undefined field_0x58;
        undefined field_0x59;
        undefined field_0x5a;
        undefined field_0x5b;
        undefined field_0x5c;
        undefined field_0x5d;
        undefined field_0x5e;
        undefined field_0x5f;
        undefined field_0x60;
        undefined field_0x61;
        undefined field_0x62;
        undefined field_0x63;
        int nSubType;
        int nSubTheme;
        int nRandomUnknownValueCappedAtMaxValueOf31; /* Created by retype action */
    };

    struct D2CoordsShort {
        short nX;
        short nY;
    };

    struct D2UnitDataMissileStrc {
        undefined4 field_0x0;
        undefined4 field_0x4;
        short ActivateFrame;
        short nSkillNo;
        short nSkillLevel;
        short TotalFrames;
        int CurrentFrame;
        int MissileFlags;
        enum eD2UnitType eOwnerType;
        int nOwnerGUID;
        enum eD2UnitType eTargetType;
        int nTargetGUID;
        int HomeStatus;
        struct D2CoordsShort sCoords;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
    };

    struct D2BitBufferStrc {
        char * pBuffer;
        size_t nBitsInBuffer;
        size_t nCufferPos;
        size_t nBitsAtPos;
        BOOL bEnd;
    };

    struct D2DrlgActMiscSubA0Strc {
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        struct D2DrlgActMiscSubA0Strc * pActMiscSubA0_1;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        byte nActNo; /* Created by retype action */
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        undefined field_0x48;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        undefined field_0x50;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
        undefined field_0x54;
        undefined field_0x55;
        undefined field_0x56;
        undefined field_0x57;
        undefined field_0x58;
        undefined field_0x59;
        undefined field_0x5a;
        undefined field_0x5b;
        undefined field_0x5c;
        undefined field_0x5d;
        undefined field_0x5e;
        undefined field_0x5f;
        undefined field_0x60;
        undefined field_0x61;
        undefined field_0x62;
        undefined field_0x63;
        undefined field_0x64;
        undefined field_0x65;
        undefined field_0x66;
        undefined field_0x67;
        undefined field_0x68;
        undefined field_0x69;
        undefined field_0x6a;
        undefined field_0x6b;
        undefined field_0x6c;
        undefined field_0x6d;
        undefined field_0x6e;
        undefined field_0x6f;
        undefined field_0x70;
        undefined field_0x71;
        undefined field_0x72;
        undefined field_0x73;
        undefined field_0x74;
        undefined field_0x75;
        undefined field_0x76;
        undefined field_0x77;
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        undefined field_0x80;
        undefined field_0x81;
        undefined field_0x82;
        undefined field_0x83;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        undefined field_0x90;
        undefined field_0x91;
        undefined field_0x92;
        undefined field_0x93;
        undefined field_0x94;
        undefined field_0x95;
        undefined field_0x96;
        undefined field_0x97;
        undefined field_0x98;
        undefined field_0x99;
        undefined field_0x9a;
        undefined field_0x9b;
        undefined field_0x9c;
        undefined field_0x9d;
        undefined field_0x9e;
        undefined field_0x9f;
        undefined field_0xa0;
        undefined field_0xa1;
        undefined field_0xa2;
        undefined field_0xa3;
        undefined field_0xa4;
        undefined field_0xa5;
        undefined field_0xa6;
        undefined field_0xa7;
        undefined field_0xa8;
        undefined field_0xa9;
        undefined field_0xaa;
        undefined field_0xab;
        undefined field_0xac;
        undefined field_0xad;
        undefined field_0xae;
        undefined field_0xaf;
        undefined field_0xb0;
        undefined field_0xb1;
        undefined field_0xb2;
        undefined field_0xb3;
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        undefined field_0xb8;
        undefined field_0xb9;
        undefined field_0xba;
        undefined field_0xbb;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        undefined field_0xc4;
        undefined field_0xc5;
        undefined field_0xc6;
        undefined field_0xc7;
        undefined field_0xc8;
        undefined field_0xc9;
        undefined field_0xca;
        undefined field_0xcb;
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        undefined field_0xd0;
        undefined field_0xd1;
        undefined field_0xd2;
        undefined field_0xd3;
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        undefined field_0xd8;
        undefined field_0xd9;
        undefined field_0xda;
        undefined field_0xdb;
        undefined field_0xdc;
        undefined field_0xdd;
        undefined field_0xde;
        undefined field_0xdf;
        undefined field_0xe0;
        undefined field_0xe1;
        undefined field_0xe2;
        undefined field_0xe3;
        undefined field_0xe4;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        struct D2DrlgActMiscSubA0Strc * pActMiscSubA0_2;
    };

    struct D2DrlgRoomExSub54Sub14RoomTileStrc {
        int nWorldCoordsXMin;
        int nWorldCoordsYMin;
        int nWorldCoordsXMax;
        int nWorldCoordsYMax;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        int field_0x1c;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
    };

    union D2PathUnion {
        struct D2StaticPathStrc * field0; /* Used for ITEM, OBJECT, WARP */
        struct D2DynamicPathStrc * field1; /* Used for PLAYER, MONSTER, MISSILE */
    };

    struct D2QuestDataStrc {
        int nQuestNoInternal;
        struct D2GameStrc * pGame;
        byte nAct;
        bool bIsNotIntroduction;
        bool bIsActive;
        byte nStateFlagPrev;
        byte nStateFlag;
        byte nInitNo;
        undefined field_0xe;
        undefined field_0xf;
        int nSequenceQuestId;
        int eFlags;
        void * pQuestSpecificData; /* Each quest has its own substructure here */
        struct D2QuestGUIDStrc sQuestGUID;
        undefined field_0x9e;
        undefined field_0x9f;
        struct D2QuestDataCallbacksStrc sStateFunctions;
        struct D2NPCMessageTableStrc * pNpcMessages;
        enum eD2Quests nQuestIdReal;
        enum eD2Quests nSubQuestId;
        bool (* fpStatusFilter)(struct D2QuestDataStrc *, struct D2UnitStrc *, struct D2BitBufferStrc *, struct D2BitBufferStrc *, BYTE *);
        bool (* fpActiveFilter)(struct D2QuestDataStrc *, int, struct D2UnitStrc *, struct D2BitBufferStrc *, struct D2UnitStrc *);
        bool (* fpSequenceFilter)(struct D2QuestDataStrc *, struct D2UnitStrc *, struct D2BitBufferStrc *, struct D2BitBufferStrc *, BYTE *);
        struct D2QuestDataStrc * pPrev;
    };

    struct D2DrlgActEnvironmentStrc {
        int nDataIndex;
        int nEnvironmentData1;
        int nEnvironmentData0;
        int nGlobalLightIntensityMaybe;
        DWORD dwTickCount; /* Created by retype action */
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        byte nGlobalLightRed;
        byte nGlobalLightGreen;
        byte nGlobalLightBlue;
        undefined field_0x1b;
        float field_0x1c;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        int field_0x28;
        int field_0x2c;
        BOOL field_0x30;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
    };

    struct D2ClientHotKeyStrc {
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
    };

    struct D2ClientStrc {
        int nClientNo;
        int ConnectionState;
        byte nClass;
        undefined1 field_0x9;
        short fFileFlags; /* nLevelExpLayer */
        byte nCharTemplate;
        char szCharName[16];
        char szAccName[64];
        byte nPad[3];
        pointer pClientContainer;
        undefined1 field_0x64;
        undefined1 field_0x65;
        undefined1 field_0x66;
        undefined1 field_0x67;
        void * pRealm;
        int nStartSkill;
        int field_0x70;
        int field_0x74;
        int dwMapSeed;
        undefined1 field_0x7c;
        undefined1 field_0x7d;
        undefined1 field_0x7e;
        undefined1 field_0x7f;
        undefined1 field_0x80;
        undefined1 field_0x81;
        undefined1 field_0x82;
        undefined1 field_0x83;
        undefined1 field_0x84;
        undefined1 field_0x85;
        undefined1 field_0x86;
        undefined1 field_0x87;
        undefined1 field_0x88;
        undefined1 field_0x89;
        undefined1 field_0x8a;
        undefined1 field_0x8b;
        undefined1 field_0x8c;
        undefined1 field_0x8d;
        undefined1 field_0x8e;
        undefined1 field_0x8f;
        undefined1 field_0x90;
        undefined1 field_0x91;
        undefined1 field_0x92;
        undefined1 field_0x93;
        undefined1 field_0x94;
        undefined1 field_0x95;
        undefined1 field_0x96;
        undefined1 field_0x97;
        undefined1 field_0x98;
        undefined1 field_0x99;
        undefined1 field_0x9a;
        undefined1 field_0x9b;
        undefined1 field_0x9c;
        undefined1 field_0x9d;
        undefined1 field_0x9e;
        undefined1 field_0x9f;
        undefined1 field_0xa0;
        undefined1 field_0xa1;
        undefined1 field_0xa2;
        undefined1 field_0xa3;
        undefined1 field_0xa4;
        undefined1 field_0xa5;
        undefined1 field_0xa6;
        undefined1 field_0xa7;
        undefined1 field_0xa8;
        undefined1 field_0xa9;
        undefined1 field_0xaa;
        undefined1 field_0xab;
        undefined1 field_0xac;
        undefined1 field_0xad;
        undefined1 field_0xae;
        undefined1 field_0xaf;
        undefined1 field_0xb0;
        undefined1 field_0xb1;
        undefined1 field_0xb2;
        undefined1 field_0xb3;
        undefined1 field_0xb4;
        undefined1 field_0xb5;
        undefined1 field_0xb6;
        undefined1 field_0xb7;
        undefined1 field_0xb8;
        undefined1 field_0xb9;
        undefined1 field_0xba;
        undefined1 field_0xbb;
        undefined1 field_0xbc;
        undefined1 field_0xbd;
        undefined1 field_0xbe;
        undefined1 field_0xbf;
        undefined1 field_0xc0;
        undefined1 field_0xc1;
        undefined1 field_0xc2;
        undefined1 field_0xc3;
        undefined1 field_0xc4;
        undefined1 field_0xc5;
        undefined1 field_0xc6;
        undefined1 field_0xc7;
        undefined1 field_0xc8;
        undefined1 field_0xc9;
        undefined1 field_0xca;
        undefined1 field_0xcb;
        undefined1 field_0xcc;
        undefined1 field_0xcd;
        undefined1 field_0xce;
        undefined1 field_0xcf;
        undefined1 field_0xd0;
        undefined1 field_0xd1;
        undefined1 field_0xd2;
        undefined1 field_0xd3;
        undefined1 field_0xd4;
        undefined1 field_0xd5;
        undefined1 field_0xd6;
        undefined1 field_0xd7;
        undefined1 field_0xd8;
        undefined1 field_0xd9;
        undefined1 field_0xda;
        undefined1 field_0xdb;
        undefined1 field_0xdc;
        undefined1 field_0xdd;
        undefined1 field_0xde;
        undefined1 field_0xdf;
        undefined1 field_0xe0;
        undefined1 field_0xe1;
        undefined1 field_0xe2;
        undefined1 field_0xe3;
        undefined1 field_0xe4;
        undefined1 field_0xe5;
        undefined1 field_0xe6;
        undefined1 field_0xe7;
        undefined1 field_0xe8;
        undefined1 field_0xe9;
        undefined1 field_0xea;
        undefined1 field_0xeb;
        undefined1 field_0xec;
        undefined1 field_0xed;
        undefined1 field_0xee;
        undefined1 field_0xef;
        undefined1 field_0xf0;
        undefined1 field_0xf1;
        undefined1 field_0xf2;
        undefined1 field_0xf3;
        undefined1 field_0xf4;
        undefined1 field_0xf5;
        undefined1 field_0xf6;
        undefined1 field_0xf7;
        undefined1 field_0xf8;
        undefined1 field_0xf9;
        undefined1 field_0xfa;
        undefined1 field_0xfb;
        undefined1 field_0xfc;
        undefined1 field_0xfd;
        undefined1 field_0xfe;
        undefined1 field_0xff;
        undefined1 field_0x100;
        undefined1 field_0x101;
        undefined1 field_0x102;
        undefined1 field_0x103;
        undefined1 field_0x104;
        undefined1 field_0x105;
        undefined1 field_0x106;
        undefined1 field_0x107;
        undefined1 field_0x108;
        undefined1 field_0x109;
        undefined1 field_0x10a;
        undefined1 field_0x10b;
        undefined1 field_0x10c;
        undefined1 field_0x10d;
        undefined1 field_0x10e;
        undefined1 field_0x10f;
        undefined1 field_0x110;
        undefined1 field_0x111;
        undefined1 field_0x112;
        undefined1 field_0x113;
        undefined1 field_0x114;
        undefined1 field_0x115;
        undefined1 field_0x116;
        undefined1 field_0x117;
        undefined1 field_0x118;
        undefined1 field_0x119;
        undefined1 field_0x11a;
        undefined1 field_0x11b;
        undefined1 field_0x11c;
        undefined1 field_0x11d;
        undefined1 field_0x11e;
        undefined1 field_0x11f;
        undefined1 field_0x120;
        undefined1 field_0x121;
        undefined1 field_0x122;
        undefined1 field_0x123;
        undefined1 field_0x124;
        undefined1 field_0x125;
        undefined1 field_0x126;
        undefined1 field_0x127;
        undefined1 field_0x128;
        undefined1 field_0x129;
        undefined1 field_0x12a;
        undefined1 field_0x12b;
        undefined1 field_0x12c;
        undefined1 field_0x12d;
        undefined1 field_0x12e;
        undefined1 field_0x12f;
        undefined1 field_0x130;
        undefined1 field_0x131;
        undefined1 field_0x132;
        undefined1 field_0x133;
        undefined1 field_0x134;
        undefined1 field_0x135;
        undefined1 field_0x136;
        undefined1 field_0x137;
        undefined1 field_0x138;
        undefined1 field_0x139;
        undefined1 field_0x13a;
        undefined1 field_0x13b;
        undefined1 field_0x13c;
        undefined1 field_0x13d;
        undefined1 field_0x13e;
        undefined1 field_0x13f;
        undefined1 field_0x140;
        undefined1 field_0x141;
        undefined1 field_0x142;
        undefined1 field_0x143;
        undefined1 field_0x144;
        undefined1 field_0x145;
        undefined1 field_0x146;
        undefined1 field_0x147;
        undefined1 field_0x148;
        undefined1 field_0x149;
        undefined1 field_0x14a;
        undefined1 field_0x14b;
        undefined1 field_0x14c;
        undefined1 field_0x14d;
        undefined1 field_0x14e;
        undefined1 field_0x14f;
        undefined1 field_0x150;
        undefined1 field_0x151;
        undefined1 field_0x152;
        undefined1 field_0x153;
        undefined1 field_0x154;
        undefined1 field_0x155;
        undefined1 field_0x156;
        undefined1 field_0x157;
        undefined1 field_0x158;
        undefined1 field_0x159;
        undefined1 field_0x15a;
        undefined1 field_0x15b;
        undefined1 field_0x15c;
        undefined1 field_0x15d;
        undefined1 field_0x15e;
        undefined1 field_0x15f;
        undefined1 field_0x160;
        undefined1 field_0x161;
        undefined1 field_0x162;
        undefined1 field_0x163;
        undefined1 field_0x164;
        undefined1 field_0x165;
        undefined1 field_0x166;
        undefined1 field_0x167;
        undefined1 field_0x168;
        undefined1 field_0x169;
        undefined1 field_0x16a;
        undefined1 field_0x16b;
        int nPlayerType;
        int dwPlayerGUID;
        struct D2UnitStrc * pPlayer;
        int dwSave;
        pointer pSaveGame;
        size_t nSaveOpenSize;
        size_t nSaveCurrentSize;
        size_t nFileSize;
        void * pSavePacketList;
        int field_0x190;
        int field_0x194;
        int nAttachedUnitType;
        int dwAttachedUnitGUID;
        int field_0x1a0;
        int field_0x1a4;
        struct D2GameStrc * pGame;
        int nAct;
        int dwRoomTicker;
        struct D2DrlgRoomStrc * pRoom;
        struct D2PacketListStrc * pDispatchList; /* D2PacketListStrc* */
        struct D2PacketListStrc * pPacketList; /* D2PacketListStrc* */
        struct D2PacketListStrc * pEmpty; /* D2PacketListStrc* */
        int dwPacketsInListMaybe;
        int field_0x1c8;
        int field_0x1cc;
        int field_0x1d0;
        int field_0x1d4;
        int field_0x1d8;
        int field_0x1dc;
        int field_0x1e0;
        int field_0x1e4;
        int field_0x1e8;
        int field_0x1ec;
        int field_0x1f0;
        int field_0x1f4;
        int field_0x1f8;
        int field_0x1fc;
        int field_0x200;
        pointer pDispatchListEx; /* D2PacketListStrc* */
        int field_0x208;
        int field_0x20c;
        int field_0x210;
        int field_0x214;
        int field_0x218;
        int field_0x21c;
        int field_0x220;
        int field_0x224;
        int field_0x228;
        int field_0x22c;
        int field_0x230;
        int field_0x234;
        int field_0x238;
        int field_0x23c;
        int field_0x240;
        int field_0x244;
        int field_0x248;
        int field_0x24c;
        int field_0x250;
        int field_0x254;
        int field_0x258;
        int field_0x25c;
        int field_0x260;
        int field_0x264;
        int field_0x268;
        int field_0x26c;
        int field_0x270;
        int field_0x274;
        int field_0x278;
        int field_0x27c;
        int field_0x280;
        int field_0x284;
        int field_0x288;
        int field_0x28c;
        int field_0x290;
        int field_0x294;
        int field_0x298;
        int field_0x29c;
        int field_0x2a0;
        int field_0x2a4;
        int field_0x2a8;
        int field_0x2ac;
        int field_0x2b0;
        int field_0x2b4;
        int field_0x2b8;
        int field_0x2bc;
        int field_0x2c0;
        int field_0x2c4;
        int field_0x2c8;
        int field_0x2cc;
        int field_0x2d0;
        int field_0x2d4;
        int field_0x2d8;
        int field_0x2dc;
        int field_0x2e0;
        int field_0x2e4;
        int field_0x2e8;
        int field_0x2ec;
        int field_0x2f0;
        int field_0x2f4;
        int field_0x2f8;
        int field_0x2fc;
        int field_0x300;
        int field_0x304;
        int field_0x308;
        int field_0x30c;
        int field_0x310;
        int field_0x314;
        int field_0x318;
        int field_0x31c;
        int field_0x320;
        int field_0x324;
        int field_0x328;
        int field_0x32c;
        int field_0x330;
        int field_0x334;
        int field_0x338;
        int field_0x33c;
        int field_0x340;
        int field_0x344;
        int field_0x348;
        int field_0x34c;
        int field_0x350;
        int field_0x354;
        int field_0x358;
        int field_0x35c;
        int field_0x360;
        int field_0x364;
        int field_0x368;
        int field_0x36c;
        int field_0x370;
        int field_0x374;
        int field_0x378;
        int field_0x37c;
        int field_0x380;
        int field_0x384;
        int field_0x388;
        int field_0x38c;
        int field_0x390;
        int field_0x394;
        int field_0x398;
        int field_0x39c;
        int field_0x3a0;
        int field_0x3a4;
        int field_0x3a8;
        int field_0x3ac;
        int field_0x3b0;
        int field_0x3b4;
        int field_0x3b8;
        int field_0x3bc;
        int dwLastWarpFrame[5];
        int fClientFlags;
        int dwTimeOut;
        struct D2ClientHotKeyStrc pHotKeys[16];
        bool bWeaponSwap;
        bool bUnused;
        short wGuildFlags;
        char szGuildTag[4];
        char szGuildName[28];
        byte nGuildInfo[3];
        byte field_0x483;
        int dwGolemGUID;
        int dwCreateTime;
        struct D2PlayerBasicsData * pUnknownStruct; /* seconds */
        short wCurrentLife;
        short wCurrentMana;
        short wCurrentStamina;
        byte nLifePotionPercent;
        byte nManaPotionPercent;
        short wXpos;
        short wYpos;
        short wTargetXOffset; /* send by packets 0x96, 0x95, 0x18 (last arg) its converted to BYTE */
        short wTargetYOffset; /* send by packets 0x96, 0x95, 0x18 (last arg) its converted to BYTE */
        int dwPlayerGold; /* gold carried by the player */
        int dwCurrentExp;
        struct D2ClientStrc * pNext;
        struct D2ClientStrc * pServerNext;
        struct D2ClientStrc * pNextInListByName;
        undefined1 field_0x4b4;
        undefined1 field_0x4b5;
        undefined1 field_0x4b6;
        undefined1 field_0x4b7;
        undefined1 field_0x4b8;
        undefined1 field_0x4b9;
        undefined1 field_0x4ba;
        undefined1 field_0x4bb;
        undefined1 field_0x4bc;
        undefined1 field_0x4bd;
        undefined1 field_0x4be;
        undefined1 field_0x4bf;
        undefined1 field_0x4c0;
        undefined1 field_0x4c1;
        undefined1 field_0x4c2;
        undefined1 field_0x4c3;
        undefined1 field_0x4c4;
        undefined1 field_0x4c5;
        undefined1 field_0x4c6;
        undefined1 field_0x4c7;
        undefined1 field_0x4c8;
        undefined1 field_0x4c9;
        undefined1 field_0x4ca;
        undefined1 field_0x4cb;
        undefined1 field_0x4cc;
        undefined1 field_0x4cd;
        undefined1 field_0x4ce;
        undefined1 field_0x4cf;
        undefined1 field_0x4d0;
        undefined1 field_0x4d1;
        undefined1 field_0x4d2;
        undefined1 field_0x4d3;
        undefined1 field_0x4d4;
        undefined1 field_0x4d5;
        undefined1 field_0x4d6;
        undefined1 field_0x4d7;
        undefined1 field_0x4d8;
        undefined1 field_0x4d9;
        undefined1 field_0x4da;
        undefined1 field_0x4db;
        undefined1 field_0x4dc;
        undefined1 field_0x4dd;
        undefined1 field_0x4de;
        undefined1 field_0x4df;
        undefined1 field_0x4e0;
        undefined1 field_0x4e1;
        undefined1 field_0x4e2;
        undefined1 field_0x4e3;
        undefined1 field_0x4e4;
        undefined1 field_0x4e5;
        undefined1 field_0x4e6;
        undefined1 field_0x4e7;
        undefined1 field_0x4e8;
        undefined1 field_0x4e9;
        undefined1 field_0x4ea;
        undefined1 field_0x4eb;
        undefined1 field_0x4ec;
        undefined1 field_0x4ed;
        undefined1 field_0x4ee;
        undefined1 field_0x4ef;
        undefined1 field_0x4f0;
        undefined1 field_0x4f1;
        undefined1 field_0x4f2;
        undefined1 field_0x4f3;
        undefined1 field_0x4f4;
        undefined1 field_0x4f5;
        undefined1 field_0x4f6;
        undefined1 field_0x4f7;
        undefined1 field_0x4f8;
        undefined1 field_0x4f9;
        undefined1 field_0x4fa;
        undefined1 field_0x4fb;
        undefined1 field_0x4fc;
        undefined1 field_0x4fd;
        undefined1 field_0x4fe;
        undefined1 field_0x4ff;
        int dwHeartbeatTick;
        int nExpLoss;
        int nExp;
        int dwLangId;
        int field_0x510;
        int field_0x514;
    };

    struct D2GameNpcStrc {
        int nMonStatsId;
        struct D2InventoryStrc * pInventory;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        bool bGamble;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        bool bHireling;
        undefined field_0x22;
        bool bNormalShop;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        pointer ItemList;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
    };

    struct D2UnitDataPlayerStrc {
        char * pCharName;
        struct D2SeedStrc qwSeed;
        struct D2BitBufferStrc * pQuestRecordPool1;
        struct D2BitBufferStrc * pQuestRecordPool2;
        struct D2BitBufferStrc * pQuestRecordPool3;
        struct D2BitBufferStrc * pQuestRecordPool4;
        struct D2PlayerWaypointsStrc * pWaypoint1;
        struct D2PlayerWaypointsStrc * pWaypoint2;
        struct D2PlayerWaypointsStrc * pWaypoint3;
        struct D2PlayerWaypointsStrc * pWaypoint4;
        undefined4 field_0x2c;
        undefined4 field_0x30;
        struct D2UnitDataPlayerArenaStrc * pArena;
        void * pPlayerList;
        undefined4 field_0x3c;
        undefined4 field_0x40;
        struct D2UnitDataPlayerPetsStrc * pPets;
        undefined4 field_0x48;
        undefined4 field_0x4c;
        undefined4 field_0x50;
        undefined4 field_0x54;
        undefined4 field_0x58;
        undefined4 field_0x5c;
        struct D2UnitDataPlayerInteractedNPCStrc * pInteractedNPCs[3];
        int nInteractedNPCsRelated;
        undefined4 leftSkill;
        undefined4 rightSkill;
        undefined4 leftSkillItemID;
        undefined4 rightSkillItemID;
        undefined4 field_0x80;
        undefined4 field_0x84;
        undefined4 field_0x88;
        undefined4 field_0x8c;
        undefined4 field_0x90;
        undefined4 field_0x94;
        struct D2PartyDataStrc * pPartyData;
        struct D2ClientStrc * pClient;
        undefined4 field_0xa0;
        undefined4 field_0xa4;
        undefined4 field_0xa8;
        undefined4 field_0xac;
        undefined4 field_0xb0;
        undefined4 field_0xb4;
        undefined4 field_0xb8;
        undefined4 field_0xbc;
        undefined4 field_0xc0;
        undefined4 field_0xc4;
        undefined4 field_0xc8;
        undefined4 field_0xcc;
        undefined4 field_0xd0;
        undefined4 field_0xd4;
        undefined4 field_0xd8;
        undefined4 field_0xdc;
        undefined4 field_0xe0;
        undefined4 field_0xe4;
        undefined4 field_0xe8;
        undefined4 field_0xec;
        undefined4 field_0xf0;
        undefined4 field_0xf4;
        undefined4 field_0xf8;
        undefined4 field_0xfc;
        undefined4 field_0x100;
        undefined4 field_0x104;
        undefined4 field_0x108;
        undefined4 field_0x10c;
        undefined4 field_0x110;
        undefined4 field_0x114;
        undefined4 field_0x118;
        undefined4 field_0x11c;
        undefined4 field_0x120;
        undefined4 field_0x124;
        undefined4 field_0x128;
        undefined4 field_0x12c;
        undefined4 field_0x130;
        undefined4 field_0x134;
        undefined4 field_0x138;
        undefined4 field_0x13c;
        undefined4 field_0x140;
        undefined4 field_0x144;
        undefined4 field_0x148;
        undefined4 field_0x14c;
        undefined4 field_0x150;
        undefined4 field_0x154;
        undefined4 field_0x158;
        undefined4 field_0x15c;
        undefined4 field_0x160;
        undefined4 field_0x164;
        undefined4 field_0x168;
    };

    struct D2MonsterAiGeneralStrc {
        int nFunctionId;
        void (* fpFunction)(struct D2GameStrc *, struct D2UnitStrc *, struct D2AiParamStrc *);
        int nAiFlags;
        int nOwnerGUID;
        enum eD2UnitType eOwnerType;
        int dwArg0;
        int dwArg1; /* Created by retype action */
        int dwArg2; /* Created by retype action */
        struct D2MonsterAiCmdStrc * pCmdCurrent;
        struct D2MonsterAiCmdStrc * pCmdLast;
        struct D2GameStrc * pGame;
        int nOwnerGUIDEx;
        enum eD2UnitType eOwnerTypeEx;
        struct D2MonsterDataMinionList * pMinionList;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        int nGenericSpawnerSpecific;
    };

    struct D2CUnitEventStrc {
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        struct D2CUnitEventStrc * pNext; /* Created by retype action */
        struct D2CUnitEventStrc * pPrev; /* Created by retype action */
    };

    struct D2GameStrc {
        pointer field_0x0; /* probably pGameTbl, passed from D2Client or D2Server... */
        int field_0x4; /* seed from the D2Client Game Marshal iirc */
        undefined4 field_0x8; /* +08 to +14 is some stuff inited by the module(D2Client, D2Server) Marshalling the Game(s) */
        undefined4 field_0xc; /* +08 to +14 is some stuff inited by the module(D2Client, D2Server) Marshalling the Game(s) */
        undefined4 field_0x10; /* +08 to +14 is some stuff inited by the module(D2Client, D2Server) Marshalling the Game(s) */
        undefined4 field_0x14; /* +08 to +14 is some stuff inited by the module(D2Client, D2Server) Marshalling the Game(s) */
        LPCRITICAL_SECTION lpCriticalSection;
        struct D2PoolManagerStrc * pMemoryPool;
        undefined4 field_0x20;
        undefined4 field_0x24;
        WORD nServerToken;
        char szGameName[16];
        char szGamePassword[16];
        char szGameDescription[32];
        enum eD2HostGameType nGameType;
        undefined1 field_0x6b;
        undefined1 field_0x6c;
        byte nDifficulty;
        undefined1 field_0x6e;
        undefined1 field_0x6f;
        BOOL bExpansion;
        enum eD2GSGameType eGameType;
        WORD wItemFormat;
        undefined2 field_0x7a;
        struct D2SeedStrc pInitSeed; /* LoSeed set when GameSeed is created, HiSeed set when ObjectRegion is created */
        BOOL bInitSeed;
        struct D2ClientStrc * pClient; /* ptClientLastJoined */
        int nClientsCount;
        int dwSpawnedPlayers;
        int dwSpawnedMonsters;
        int dwSpawnedObjects;
        int dwSpawnedMissiles;
        int dwSpawnedItems;
        int dwSpawnedTiles;
        int dwGameFrame; /* Current Frame (FrameCounter) */
        int dwCycleLastSecond;
        int dwCycleCount;
        int dwTickCount;
        struct D2EventControlStrc * pEventControl;
        struct D2DrlgActStrc * pAct[5];
        struct D2SeedStrc pGameSeed;
        struct D2ServerUnitInactiveStrc * pInactive[5];
        dword dwMonSeed;
        struct D2MonsterRegionStrc * pMonsterRegion[1024];
        void * pObjectControl;
        struct D2QuestControlStrc * pQuestControl;
        struct D2UnitNodeStrc * pUnitNodes[10];
        struct D2UnitStrc * pUnitList[5][128];
        struct D2UnitStrc * pWarpTileList;
        DWORD fUniqueSpawn[128];
        struct D2GameNpcControlStrc * pNpcControl;
        void * pArenaCtrl;
        void * pPartyControl;
        BYTE nBossFlagList[64];
        DWORD nPathCount[17];
        int nPathCountCount;
        BOOL bUpdateStatsTick;
        int dwStatsTick;
        int dwLastUpdateTick;
        int dwThreadPriority;
        int dwUpdateTick;
        int dwUnknown;
        int dwServerGame;
        struct D2GameStrc * pPrev;
        struct D2GameStrc * pNext;
        int dwException; /* has for exceptions 1 = NULL deref, 2 = 0xC0000001 deref, 3 = Assert with blank Msg, 4 = Alloc 1.7Gb of Mem(lol) */
        int field_0x1de0;
        int field_0x1de4;
        BOOL bKilledUberBaal;
        BOOL bKilledUberDiablo;
        BOOL bKilledUberMephisto;
    };

    struct D2GameNpcArrayStrc {
        struct D2GameNpcStrc pNpc[64];
    };

    struct D2DrlgActStrc { /* Structure is aligned to 4 bytes */
        enum eD2LevelId eD2LevelId;
        struct D2DrlgActEnvironmentStrc * pEnvironment;
        enum eD2LevelId nLevelId; /* Created by retype action */
        int dwInitSeed;
        struct D2DrlgRoomStrc * pRoom; /* Created by retype action */
        char nActNo;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        struct D2DrlgActSub18Strc pActSub18;
        struct D2DrlgActMiscStrc * pActMisc; /* Created by retype action */
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        BOOL bClientSide;
        undefined field_0x54;
        undefined field_0x55;
        undefined field_0x56;
        undefined field_0x57;
        BOOL bHasCorpse; /* Created by retype action */
        struct D2PoolManagerStrc * pMemory; /* Created by retype action */
    };

    struct D2SkillListStrc {
        struct D2PoolManagerStrc * pMemory;
        struct D2SkillStrc * pFirstSkill;
        struct D2SkillStrc * pLeftSkill;
        struct D2SkillStrc * pRightSkill;
        struct D2SkillStrc * pCurrentSkill;
        struct D2LightMapStrc * pLight;
    };

    struct D2DrlgRoomCollisionMap { /* We need to find wehre it is allocated and cofnirm its size */
        POINT WorldPosition;
        POINT WorldSize;
        POINT RoomPosition;
        POINT RoomSize;
        WORD * pMapStart;
        WORD * pMapEnd;
    };

    struct D2MonsterAiStrc {
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
    };

    struct D2GameNpcControlStrc {
        int nNpcCount;
        struct D2GameNpcArrayStrc * pNpc;
        struct D2SeedStrc sSeed;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
    };

    union D2UnitDataUnion {
        struct D2UnitDataPlayerStrc * pUnitDataPlayer;
        struct D2UnitDataMonsterStrc * pUnitDataMonster;
        struct D2UnitDataObjectStrc * pUnitDataObject;
        struct D2UnitDataMissileStrc * pUnitDataMissile;
        struct D2UnitDataItemStrc * pUnitDataItem;
    };

    struct D2UnitStrc {
        enum eD2UnitType eUnitType;
        int nClassId; /* Created by retype action */
        struct D2PoolManagerStrc * pMemory; /* Created by retype action */
        int nUnitGUID; /* Created by retype action */
        DWORD dwMode;
        union D2UnitDataUnion pUnitData;
        DWORD dwAct; /* Created by retype action */
        struct D2DrlgActStrc * pDrlgAct;
        struct D2SeedStrc sSeed;
        int nInitSeed;
        union D2PathUnion pPath;
        pointer pAnimSeq; /* to be defined */
        int nSeqFrameCount;
        int nSeqFrame;
        int nSeqAnimRate;
        int nSeqMode; /* Created by retype action */
        int nGfxCurrentFrame;
        int nFrameCount;
        short nAnimSpeed;
        short nActionFrame;
        pointer pAnimData;
        pointer pGfxInfo;
        int nOutlineFrame;
        struct D2StatListExStrc * pStatsEx;
        struct D2InventoryStrc * pInventory; /* Created by retype action */
        struct D2LightMapStrc * pLightMap;
        int nLightRadiusX;
        undefined field_0x6c;
        undefined field_0x6d;
        short nUpdateType;
        struct D2UnitStrc * pUpdateUnit;
        undefined field_0x74;
        undefined field_0x75;
        undefined field_0x76;
        undefined field_0x77;
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        struct D2GameStrc * pGame; /* Created by retype action */
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        union D2UnitEvent pUnitEvent;
        enum eD2UnitType eOwnerType;
        int nOwnerGUID;
        enum eD2UnitType eKillerType;
        int nKillerGUID;
        struct D2HoverTextStrc * pHoverText;
        struct D2SkillListStrc * pSkillsList;
        pointer pCombat;
        undefined field_0xb0;
        undefined field_0xb1;
        undefined field_0xb2;
        undefined field_0xb3;
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        char * szRewardItemCode;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        enum eD2UnitFlagsC4 eFlagsC4; /* Created by retype action */
        DWORD dwFlags0xC8; /* Created by retype action */
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        int nNodeTableIndex; /* Created by retype action */
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        struct D2ServerCmdStrc * pServerCmd;
        struct D2TimerStrc * pTimer; /* Created by retype action */
        struct D2UnitStrc * pUnitNext_0;
        struct D2UnitStrc * pUnitNext;
        struct D2UnitStrc * pRoomFirstUnit;
        struct D2SUnitMsgStrc * SUnitMsgActual;
        struct D2SUnitMsgStrc * SUnitMsgQueue;
    };

    struct D2StatListExStrc {
        struct D2StatListStrc sStatList;
        struct D2StatListExStrc * pActive;
        struct D2StatListExStrc * pInactive;
        struct D2UnitStrc * pOwner;
        struct D2StatInfoStrc sStatInfo2;
        struct D2StatInfoStrc sStatInfo3;
        struct D2StateFlags * pStateFlags;
        pointer fpCallback;
        struct D2GameStrc * pGame;
    };

    struct D2DrlgRoomExSub64LogicStrc {
        int field_0x0;
        int nSub30Size; /* Created by retype action */
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        struct D2DrlgRoomExSub64Sub30LogicStrc * pDrlgRoomExSub64Sub30; /* Created by retype action */
    };

    struct D2InventoryGridInfoStrc {
        struct D2UnitStrc * pItem;
        struct D2UnitStrc * pLastItem;
        byte bWidth;
        byte bHeight;
        short field_0xa;
        struct D2InventoryGridStrc * pInventoryGrid;
    };

    struct D2QuestArgStrc {
        struct D2GameStrc * pGame;
        int nEvent;
        struct D2UnitStrc * pTarget;
        struct D2UnitStrc * pPlayer;
        int field_0x10;
        union uD2QuestArgStrcUnion field_0x14;
    };

    struct D2UnitDataPlayerArenaStrc {
        undefined4 field_0x0;
        undefined4 field_0x4;
    };

    struct D2DrlgLevelStrc {
        enum eD2DrlgType eDrlgType;
        uint dwFlags;
        int nRoomExSize;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        struct D2DrlgRoomExStrc * pRoomExFirst; /* Created by retype action */
        union D2DrlgLevelDataUnion pDrlgLevelData;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        struct D2DrlgCoordsStrc sCoordinatesAndSize;
        char aUnknown0x2C[384];
        struct D2DrlgLevelStrc * pLevelNext;
        struct D2DrlgLevelSub1B0Strc * pDrglLevelSub1B0; /* Created by retype action */
        struct D2DrlgActMiscStrc * pDrlgActMisc; /* Created by retype action */
        undefined field_0x1b8;
        undefined field_0x1b9;
        undefined field_0x1ba;
        undefined field_0x1bb;
        pointer pUnknownStructure0x1BC;
        int nLevelType;
        struct D2SeedStrc sSeed; /* Created by retype action */
        pointer pIAmStructUnknownSize_0x1CC;
        enum eD2LevelId eD2LevelId;
        undefined field_0x1d4;
        undefined field_0x1d5;
        undefined field_0x1d6;
        undefined field_0x1d7;
        int nUnknown0x1D8;
        int nUnknown0x1DC;
        char aUnknown0x1E0[76];
        pointer ppToArrayProbably_0x122C;
    };

    struct D2PoolBlockStrc {
        BYTE * pCommit;
        DWORD * pUsage;
        size_t nBlocks;
        struct D2PoolBlockStrc * pPrev;
        struct D2PoolBlockStrc * pNext;
        struct D2PoolStrc * pPool;
    };

    struct D2DrlgRoomExSub64Sub30LogicStrc {
        int nRoomExPosY;
        int nRoomExPosX;
        int nRoomExPosYPlusSizeX; /* Created by retype action */
        int nRoomExPosXPlusSizeY;
        int nRoomExPosY2;
        int nRoomExPosX2;
        int nRoomExPosYPlusSizeX2;
        int nRoomExPosXPlusSizeY2;
        int field_0x20;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        int nValueFromDrlgLevelOffset_0x1DC;
        struct D2DrlgRoomExSub64Sub30LogicStrc * pNext; /* Created by retype action */
    };

    struct D2TimerStrc {
    };

    union D2DrlgRoomExDataUnion {
        struct D2DrlgRoomExDataOutRoom * pRoomExDataOutRoom; /* DRLG Type = RandomMaze */
        struct D2DrlgRoomExDataPreset * pRoomExDataPreset; /* DRLG Type = PresetArea */
    };

    struct D2LightMapStrc {
        enum eD2UnitType eUnitType;
        DWORD nUnitGUID;
        BOOL bUnknown;
        int nLightType;
        int field_0x10;
        int field_0x14;
        int nRadiusX;
        int nRadiusY;
        int field_0x20;
        byte nGamma;
        byte nRed;
        byte nGreen;
        byte nBlue;
        struct D2LightMapStrc * pPrev;
        int field_0x2c;
        int * pSub0x30;
    };

    struct D2QuestTimerStrc {
        int (* pfUpdate)(struct D2GameStrc *, struct D2QuestDataStrc *);
        struct D2QuestDataStrc * pQuest;
        int dwTicks;
        int dwTimeout;
        struct D2QuestTimerStrc * pNext;
    };

    struct D2PoolBlockEntryStrc {
        struct D2PoolBlockStrc * pBlock;
        void * pCommit;
    };

    struct D2DrlgLevelDataWildernessLevel { /* DRLGTYPE_WildernessLevel */
        undefined field_0x0;
        undefined field_0x1;
        undefined field_0x2;
        undefined field_0x3;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        undefined field_0x8;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        undefined field_0x10;
        undefined field_0x11;
        undefined field_0x12;
        undefined field_0x13;
        undefined field_0x14;
        undefined field_0x15;
        undefined field_0x16;
        undefined field_0x17;
        undefined field_0x18;
        undefined field_0x19;
        undefined field_0x1a;
        undefined field_0x1b;
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        undefined field_0x20;
        undefined field_0x21;
        undefined field_0x22;
        undefined field_0x23;
        undefined field_0x24;
        undefined field_0x25;
        undefined field_0x26;
        undefined field_0x27;
        undefined field_0x28;
        undefined field_0x29;
        undefined field_0x2a;
        undefined field_0x2b;
        undefined field_0x2c;
        undefined field_0x2d;
        undefined field_0x2e;
        undefined field_0x2f;
        undefined field_0x30;
        undefined field_0x31;
        undefined field_0x32;
        undefined field_0x33;
        undefined field_0x34;
        undefined field_0x35;
        undefined field_0x36;
        undefined field_0x37;
        undefined field_0x38;
        undefined field_0x39;
        undefined field_0x3a;
        undefined field_0x3b;
        undefined field_0x3c;
        undefined field_0x3d;
        undefined field_0x3e;
        undefined field_0x3f;
        undefined field_0x40;
        undefined field_0x41;
        undefined field_0x42;
        undefined field_0x43;
        undefined field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        undefined field_0x48;
        undefined field_0x49;
        undefined field_0x4a;
        undefined field_0x4b;
        undefined field_0x4c;
        undefined field_0x4d;
        undefined field_0x4e;
        undefined field_0x4f;
        undefined field_0x50;
        undefined field_0x51;
        undefined field_0x52;
        undefined field_0x53;
        undefined field_0x54;
        undefined field_0x55;
        undefined field_0x56;
        undefined field_0x57;
        undefined field_0x58;
        undefined field_0x59;
        undefined field_0x5a;
        undefined field_0x5b;
        undefined field_0x5c;
        undefined field_0x5d;
        undefined field_0x5e;
        undefined field_0x5f;
        undefined field_0x60;
        undefined field_0x61;
        undefined field_0x62;
        undefined field_0x63;
        undefined field_0x64;
        undefined field_0x65;
        undefined field_0x66;
        undefined field_0x67;
        undefined field_0x68;
        undefined field_0x69;
        undefined field_0x6a;
        undefined field_0x6b;
        undefined field_0x6c;
        undefined field_0x6d;
        undefined field_0x6e;
        undefined field_0x6f;
        undefined field_0x70;
        undefined field_0x71;
        undefined field_0x72;
        undefined field_0x73;
        undefined field_0x74;
        undefined field_0x75;
        undefined field_0x76;
        undefined field_0x77;
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        undefined field_0x80;
        undefined field_0x81;
        undefined field_0x82;
        undefined field_0x83;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        undefined field_0x90;
        undefined field_0x91;
        undefined field_0x92;
        undefined field_0x93;
        undefined field_0x94;
        undefined field_0x95;
        undefined field_0x96;
        undefined field_0x97;
        undefined field_0x98;
        undefined field_0x99;
        undefined field_0x9a;
        undefined field_0x9b;
        undefined field_0x9c;
        undefined field_0x9d;
        undefined field_0x9e;
        undefined field_0x9f;
        undefined field_0xa0;
        undefined field_0xa1;
        undefined field_0xa2;
        undefined field_0xa3;
        undefined field_0xa4;
        undefined field_0xa5;
        undefined field_0xa6;
        undefined field_0xa7;
        undefined field_0xa8;
        undefined field_0xa9;
        undefined field_0xaa;
        undefined field_0xab;
        undefined field_0xac;
        undefined field_0xad;
        undefined field_0xae;
        undefined field_0xaf;
        undefined field_0xb0;
        undefined field_0xb1;
        undefined field_0xb2;
        undefined field_0xb3;
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        undefined field_0xb8;
        undefined field_0xb9;
        undefined field_0xba;
        undefined field_0xbb;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        undefined field_0xc4;
        undefined field_0xc5;
        undefined field_0xc6;
        undefined field_0xc7;
        undefined field_0xc8;
        undefined field_0xc9;
        undefined field_0xca;
        undefined field_0xcb;
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        undefined field_0xd0;
        undefined field_0xd1;
        undefined field_0xd2;
        undefined field_0xd3;
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        undefined field_0xd8;
        undefined field_0xd9;
        undefined field_0xda;
        undefined field_0xdb;
        undefined field_0xdc;
        undefined field_0xdd;
        undefined field_0xde;
        undefined field_0xdf;
        undefined field_0xe0;
        undefined field_0xe1;
        undefined field_0xe2;
        undefined field_0xe3;
        undefined field_0xe4;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        undefined field_0xe8;
        undefined field_0xe9;
        undefined field_0xea;
        undefined field_0xeb;
        undefined field_0xec;
        undefined field_0xed;
        undefined field_0xee;
        undefined field_0xef;
        undefined field_0xf0;
        undefined field_0xf1;
        undefined field_0xf2;
        undefined field_0xf3;
        undefined field_0xf4;
        undefined field_0xf5;
        undefined field_0xf6;
        undefined field_0xf7;
        undefined field_0xf8;
        undefined field_0xf9;
        undefined field_0xfa;
        undefined field_0xfb;
        undefined field_0xfc;
        undefined field_0xfd;
        undefined field_0xfe;
        undefined field_0xff;
        undefined field_0x100;
        undefined field_0x101;
        undefined field_0x102;
        undefined field_0x103;
        undefined field_0x104;
        undefined field_0x105;
        undefined field_0x106;
        undefined field_0x107;
        undefined field_0x108;
        undefined field_0x109;
        undefined field_0x10a;
        undefined field_0x10b;
        undefined field_0x10c;
        undefined field_0x10d;
        undefined field_0x10e;
        undefined field_0x10f;
        undefined field_0x110;
        undefined field_0x111;
        undefined field_0x112;
        undefined field_0x113;
        undefined field_0x114;
        undefined field_0x115;
        undefined field_0x116;
        undefined field_0x117;
        undefined field_0x118;
        undefined field_0x119;
        undefined field_0x11a;
        undefined field_0x11b;
        undefined field_0x11c;
        undefined field_0x11d;
        undefined field_0x11e;
        undefined field_0x11f;
        undefined field_0x120;
        undefined field_0x121;
        undefined field_0x122;
        undefined field_0x123;
        undefined field_0x124;
        undefined field_0x125;
        undefined field_0x126;
        undefined field_0x127;
        undefined field_0x128;
        undefined field_0x129;
        undefined field_0x12a;
        undefined field_0x12b;
        undefined field_0x12c;
        undefined field_0x12d;
        undefined field_0x12e;
        undefined field_0x12f;
        undefined field_0x130;
        undefined field_0x131;
        undefined field_0x132;
        undefined field_0x133;
        undefined field_0x134;
        undefined field_0x135;
        undefined field_0x136;
        undefined field_0x137;
        undefined field_0x138;
        undefined field_0x139;
        undefined field_0x13a;
        undefined field_0x13b;
        undefined field_0x13c;
        undefined field_0x13d;
        undefined field_0x13e;
        undefined field_0x13f;
        undefined field_0x140;
        undefined field_0x141;
        undefined field_0x142;
        undefined field_0x143;
        undefined field_0x144;
        undefined field_0x145;
        undefined field_0x146;
        undefined field_0x147;
        undefined field_0x148;
        undefined field_0x149;
        undefined field_0x14a;
        undefined field_0x14b;
        undefined field_0x14c;
        undefined field_0x14d;
        undefined field_0x14e;
        undefined field_0x14f;
        undefined field_0x150;
        undefined field_0x151;
        undefined field_0x152;
        undefined field_0x153;
        undefined field_0x154;
        undefined field_0x155;
        undefined field_0x156;
        undefined field_0x157;
        undefined field_0x158;
        undefined field_0x159;
        undefined field_0x15a;
        undefined field_0x15b;
        undefined field_0x15c;
        undefined field_0x15d;
        undefined field_0x15e;
        undefined field_0x15f;
        undefined field_0x160;
        undefined field_0x161;
        undefined field_0x162;
        undefined field_0x163;
        undefined field_0x164;
        undefined field_0x165;
        undefined field_0x166;
        undefined field_0x167;
        undefined field_0x168;
        undefined field_0x169;
        undefined field_0x16a;
        undefined field_0x16b;
        undefined field_0x16c;
        undefined field_0x16d;
        undefined field_0x16e;
        undefined field_0x16f;
        undefined field_0x170;
        undefined field_0x171;
        undefined field_0x172;
        undefined field_0x173;
        undefined field_0x174;
        undefined field_0x175;
        undefined field_0x176;
        undefined field_0x177;
        undefined field_0x178;
        undefined field_0x179;
        undefined field_0x17a;
        undefined field_0x17b;
        undefined field_0x17c;
        undefined field_0x17d;
        undefined field_0x17e;
        undefined field_0x17f;
        undefined field_0x180;
        undefined field_0x181;
        undefined field_0x182;
        undefined field_0x183;
        undefined field_0x184;
        undefined field_0x185;
        undefined field_0x186;
        undefined field_0x187;
        undefined field_0x188;
        undefined field_0x189;
        undefined field_0x18a;
        undefined field_0x18b;
        undefined field_0x18c;
        undefined field_0x18d;
        undefined field_0x18e;
        undefined field_0x18f;
        undefined field_0x190;
        undefined field_0x191;
        undefined field_0x192;
        undefined field_0x193;
        undefined field_0x194;
        undefined field_0x195;
        undefined field_0x196;
        undefined field_0x197;
        undefined field_0x198;
        undefined field_0x199;
        undefined field_0x19a;
        undefined field_0x19b;
        undefined field_0x19c;
        undefined field_0x19d;
        undefined field_0x19e;
        undefined field_0x19f;
        undefined field_0x1a0;
        undefined field_0x1a1;
        undefined field_0x1a2;
        undefined field_0x1a3;
        undefined field_0x1a4;
        undefined field_0x1a5;
        undefined field_0x1a6;
        undefined field_0x1a7;
        undefined field_0x1a8;
        undefined field_0x1a9;
        undefined field_0x1aa;
        undefined field_0x1ab;
        undefined field_0x1ac;
        undefined field_0x1ad;
        undefined field_0x1ae;
        undefined field_0x1af;
        undefined field_0x1b0;
        undefined field_0x1b1;
        undefined field_0x1b2;
        undefined field_0x1b3;
        undefined field_0x1b4;
        undefined field_0x1b5;
        undefined field_0x1b6;
        undefined field_0x1b7;
        undefined field_0x1b8;
        undefined field_0x1b9;
        undefined field_0x1ba;
        undefined field_0x1bb;
        undefined field_0x1bc;
        undefined field_0x1bd;
        undefined field_0x1be;
        undefined field_0x1bf;
        undefined field_0x1c0;
        undefined field_0x1c1;
        undefined field_0x1c2;
        undefined field_0x1c3;
        undefined field_0x1c4;
        undefined field_0x1c5;
        undefined field_0x1c6;
        undefined field_0x1c7;
        undefined field_0x1c8;
        undefined field_0x1c9;
        undefined field_0x1ca;
        undefined field_0x1cb;
        undefined field_0x1cc;
        undefined field_0x1cd;
        undefined field_0x1ce;
        undefined field_0x1cf;
        undefined field_0x1d0;
        undefined field_0x1d1;
        undefined field_0x1d2;
        undefined field_0x1d3;
        undefined field_0x1d4;
        undefined field_0x1d5;
        undefined field_0x1d6;
        undefined field_0x1d7;
        undefined field_0x1d8;
        undefined field_0x1d9;
        undefined field_0x1da;
        undefined field_0x1db;
        undefined field_0x1dc;
        undefined field_0x1dd;
        undefined field_0x1de;
        undefined field_0x1df;
        undefined field_0x1e0;
        undefined field_0x1e1;
        undefined field_0x1e2;
        undefined field_0x1e3;
        undefined field_0x1e4;
        undefined field_0x1e5;
        undefined field_0x1e6;
        undefined field_0x1e7;
        undefined field_0x1e8;
        undefined field_0x1e9;
        undefined field_0x1ea;
        undefined field_0x1eb;
        undefined field_0x1ec;
        undefined field_0x1ed;
        undefined field_0x1ee;
        undefined field_0x1ef;
        undefined field_0x1f0;
        undefined field_0x1f1;
        undefined field_0x1f2;
        undefined field_0x1f3;
        undefined field_0x1f4;
        undefined field_0x1f5;
        undefined field_0x1f6;
        undefined field_0x1f7;
        undefined field_0x1f8;
        undefined field_0x1f9;
        undefined field_0x1fa;
        undefined field_0x1fb;
        undefined field_0x1fc;
        undefined field_0x1fd;
        undefined field_0x1fe;
        undefined field_0x1ff;
        undefined field_0x200;
        undefined field_0x201;
        undefined field_0x202;
        undefined field_0x203;
        undefined field_0x204;
        undefined field_0x205;
        undefined field_0x206;
        undefined field_0x207;
        undefined field_0x208;
        undefined field_0x209;
        undefined field_0x20a;
        undefined field_0x20b;
        undefined field_0x20c;
        undefined field_0x20d;
        undefined field_0x20e;
        undefined field_0x20f;
        undefined field_0x210;
        undefined field_0x211;
        undefined field_0x212;
        undefined field_0x213;
        undefined field_0x214;
        undefined field_0x215;
        undefined field_0x216;
        undefined field_0x217;
        undefined field_0x218;
        undefined field_0x219;
        undefined field_0x21a;
        undefined field_0x21b;
        undefined field_0x21c;
        undefined field_0x21d;
        undefined field_0x21e;
        undefined field_0x21f;
        undefined field_0x220;
        undefined field_0x221;
        undefined field_0x222;
        undefined field_0x223;
        undefined field_0x224;
        undefined field_0x225;
        undefined field_0x226;
        undefined field_0x227;
        undefined field_0x228;
        undefined field_0x229;
        undefined field_0x22a;
        undefined field_0x22b;
        undefined field_0x22c;
        undefined field_0x22d;
        undefined field_0x22e;
        undefined field_0x22f;
        undefined field_0x230;
        undefined field_0x231;
        undefined field_0x232;
        undefined field_0x233;
        undefined field_0x234;
        undefined field_0x235;
        undefined field_0x236;
        undefined field_0x237;
        undefined field_0x238;
        undefined field_0x239;
        undefined field_0x23a;
        undefined field_0x23b;
        undefined field_0x23c;
        undefined field_0x23d;
        undefined field_0x23e;
        undefined field_0x23f;
        undefined field_0x240;
        undefined field_0x241;
        undefined field_0x242;
        undefined field_0x243;
        undefined field_0x244;
        undefined field_0x245;
        undefined field_0x246;
        undefined field_0x247;
        undefined field_0x248;
        undefined field_0x249;
        undefined field_0x24a;
        undefined field_0x24b;
        undefined field_0x24c;
        undefined field_0x24d;
        undefined field_0x24e;
        undefined field_0x24f;
        undefined field_0x250;
        undefined field_0x251;
        undefined field_0x252;
        undefined field_0x253;
        undefined field_0x254;
        undefined field_0x255;
        undefined field_0x256;
        undefined field_0x257;
        undefined field_0x258;
        undefined field_0x259;
        undefined field_0x25a;
        undefined field_0x25b;
        undefined field_0x25c;
        undefined field_0x25d;
        undefined field_0x25e;
        undefined field_0x25f;
        undefined field_0x260;
        undefined field_0x261;
        undefined field_0x262;
        undefined field_0x263;
        struct D2DrlgRoomExStrc * pDrlgRoomEx; /* Created by retype action */
    };

    struct D2HoverTextStrc {
        int field_0x0;
        int field_0x4;
        byte nLanguageCode;
        undefined field_0x9;
        undefined field_0xa;
        undefined field_0xb;
        int field_0xc;
        char szMessage[256];
    };

    struct D2NPCMessageTableStrc {
        struct D2NPCMessageStrc pMessages[16];
        int nMessagesCount;
    };

    struct D2DrlgRoomExStrc {
        struct D2DrlgRoomExSub00Strc * psSub00;
        int nSeed;
        struct D2DrlgRoomExStrc * * ppDrlgRoomsExNear;
        undefined field_0xc;
        undefined field_0xd;
        undefined field_0xe;
        undefined field_0xf;
        int field_0x10;
        struct D2SeedStrc sSeed; /* Created by retype action */
        undefined field_0x1c;
        undefined field_0x1d;
        undefined field_0x1e;
        undefined field_0x1f;
        union D2DrlgRoomExDataUnion pRoomExData; /* Created by retype action */
        struct D2DrlgRoomExStrc * pRoomExNext;
        int dwDrlgRoomExFlags; /* Created by retype action */
        int nDrlgRoomsExNearCount;
        struct D2DrlgRoomStrc * pDrlgRoom;
        struct D2DrlgCoordsStrc sCoordinatesAndSize; /* Created by retype action */
        char field_0x44;
        undefined field_0x45;
        undefined field_0x46;
        undefined field_0x47;
        int nPresetType; /* Created by retype action */
        struct D2DrlgRoomExSub4CRoomTileStrc * pRoomTile;
        int dwFlags_Dt1Mask; /* Created by retype action */
        struct D2DrlgRoomExSub54RoomTileStrc * pRoomExSub54; /* Created by retype action */
        struct D2DrlgLevelStrc * pLevel; /* Created by retype action */
        struct D2PresetUnitStrc * pPresetUnit;
        undefined field_0x60;
        undefined field_0x61;
        undefined field_0x62;
        undefined field_0x63;
        struct D2DrlgRoomExSub64LogicStrc * pDrlgRoomExSub64Logic; /* Created by retype action */
        undefined4 pTileProject; /* This field seems like its same as in ActMisc_0xC = pTileProject */
        undefined field_0x6c;
        undefined field_0x6d;
        undefined field_0x6e;
        undefined field_0x6f;
        undefined field_0x70;
        undefined field_0x71;
        undefined field_0x72;
        undefined field_0x73;
        undefined field_0x74;
        undefined field_0x75;
        undefined field_0x76;
        undefined field_0x77;
        undefined field_0x78;
        undefined field_0x79;
        undefined field_0x7a;
        undefined field_0x7b;
        undefined field_0x7c;
        undefined field_0x7d;
        undefined field_0x7e;
        undefined field_0x7f;
        undefined field_0x80;
        undefined field_0x81;
        undefined field_0x82;
        undefined field_0x83;
        undefined field_0x84;
        undefined field_0x85;
        undefined field_0x86;
        undefined field_0x87;
        undefined field_0x88;
        undefined field_0x89;
        undefined field_0x8a;
        undefined field_0x8b;
        undefined field_0x8c;
        undefined field_0x8d;
        undefined field_0x8e;
        undefined field_0x8f;
        undefined field_0x90;
        undefined field_0x91;
        undefined field_0x92;
        undefined field_0x93;
        undefined field_0x94;
        undefined field_0x95;
        undefined field_0x96;
        undefined field_0x97;
        undefined field_0x98;
        undefined field_0x99;
        undefined field_0x9a;
        undefined field_0x9b;
        undefined field_0x9c;
        undefined field_0x9d;
        undefined field_0x9e;
        undefined field_0x9f;
        undefined field_0xa0;
        undefined field_0xa1;
        undefined field_0xa2;
        undefined field_0xa3;
        undefined field_0xa4;
        undefined field_0xa5;
        undefined field_0xa6;
        undefined field_0xa7;
        undefined field_0xa8;
        undefined field_0xa9;
        undefined field_0xaa;
        undefined field_0xab;
        undefined field_0xac;
        undefined field_0xad;
        undefined field_0xae;
        undefined field_0xaf;
        undefined field_0xb0;
        undefined field_0xb1;
        undefined field_0xb2;
        undefined field_0xb3;
        undefined field_0xb4;
        undefined field_0xb5;
        undefined field_0xb6;
        undefined field_0xb7;
        undefined field_0xb8;
        undefined field_0xb9;
        undefined field_0xba;
        undefined field_0xbb;
        undefined field_0xbc;
        undefined field_0xbd;
        undefined field_0xbe;
        undefined field_0xbf;
        undefined field_0xc0;
        undefined field_0xc1;
        undefined field_0xc2;
        undefined field_0xc3;
        undefined field_0xc4;
        undefined field_0xc5;
        undefined field_0xc6;
        undefined field_0xc7;
        undefined field_0xc8;
        undefined field_0xc9;
        undefined field_0xca;
        undefined field_0xcb;
        undefined field_0xcc;
        undefined field_0xcd;
        undefined field_0xce;
        undefined field_0xcf;
        undefined field_0xd0;
        undefined field_0xd1;
        undefined field_0xd2;
        undefined field_0xd3;
        undefined field_0xd4;
        undefined field_0xd5;
        undefined field_0xd6;
        undefined field_0xd7;
        undefined field_0xd8;
        undefined field_0xd9;
        undefined field_0xda;
        undefined field_0xdb;
        undefined field_0xdc;
        undefined field_0xdd;
        undefined field_0xde;
        undefined field_0xdf;
        undefined field_0xe0;
        undefined field_0xe1;
        undefined field_0xe2;
        undefined field_0xe3;
        undefined field_0xe4;
        undefined field_0xe5;
        undefined field_0xe6;
        undefined field_0xe7;
        undefined field_0xe8;
        undefined field_0xe9;
        undefined field_0xea;
        undefined field_0xeb;
    };

    struct D2DrlgRoomExSub00Strc {
        struct D2DrlgRoomExStrc * pRoomEx;
        undefined field_0x4;
        undefined field_0x5;
        undefined field_0x6;
        undefined field_0x7;
        BOOL bIsDrlgTypePresetArea;
        int nNextCount;
        struct D2DrlgCoordsStrc * psCoordinatesAndSize;
        struct D2DrlgRoomExSub00Strc * pSub00Next; /* Created by retype action */
    };

    struct D2SUnitEventStrc {
        int nItemEventId;
        undefined4 field_0x4;
        undefined4 field_0x8;
        enum eD2Skills eSkill;
        undefined4 field_0x10;
        BOOL (* fpItemEventFunc)(struct D2GameStrc *, int, struct D2UnitStrc *, struct D2UnitStrc *, void *, enum eD2Skills, int);
        struct D2SUnitEventStrc * pNext;
        struct D2SUnitEventStrc * pPrev;
    };

    struct D2QuestControlStrc {
        struct D2QuestDataStrc * pQuestData;
        BOOL bExecuting;
        BOOL bPickedSet;
        struct D2BitBufferStrc * pQuestFlags;
        struct D2QuestTimerStrc * pTimer;
        int nTickcount;
        struct D2SeedStrc sSeed;
        int field_0x20;
    };




}

#endif //CHARON_GHIDRA_H
