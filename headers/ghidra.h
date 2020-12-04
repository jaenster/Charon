#ifndef CHARON_GHIDRA_H
#define CHARON_GHIDRA_H


namespace Ghidra {
    typedef unsigned char   undefined;

    typedef unsigned long long    GUID;
    typedef unsigned int    ImageBaseOffset32;
    typedef unsigned char    byte;
    typedef unsigned int    dword;
    typedef long long    longlong;
    typedef unsigned char    uchar;
    typedef unsigned int    uint;
    typedef unsigned int    uint3;
    typedef unsigned long    ulong;
    typedef unsigned long long    ulonglong;
    typedef unsigned char    undefined1;
    typedef unsigned short    undefined2;
    typedef unsigned int    undefined3;
    typedef unsigned int    undefined4;
    typedef unsigned long long    undefined5;
    typedef unsigned long long    undefined6;
    typedef unsigned long long    undefined8;
    typedef unsigned short    ushort;
    typedef unsigned short    word;
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
        DRLGTYPE_RandomMaze=1,
        DRLGTYPE_WildernessLevel=3,
        DRLGTYPE_PresetArea=2
    } eD2DrlgType;

    typedef struct D2LevelDefsColor D2LevelDefsColor, *PD2LevelDefsColor;

    typedef enum eD2LevelId {
        LEVEL_OuterSteppes=104,
        LEVEL_FarOasis=43,
        LEVEL_Crypt=18,
        LEVEL_RuinedTemple=94,
        LEVEL_UpperKurast=81,
        LEVEL_PitLevel2=16,
        LEVEL_HaremLevel1=50,
        LEVEL_FrozenTundra=117,
        LEVEL_PitLevel1=12,
        LEVEL_ArreatPlateau=112,
        LEVEL_HaremLevel2=51,
        LEVEL_Barracks=28,
        LEVEL_PalaceCellarLevel1=52,
        LEVEL_AncientsWay=118,
        LEVEL_RogueEncampment=1,
        LEVEL_StonyField=4,
        LEVEL_PalaceCellarLevel3=54,
        LEVEL_PalaceCellarLevel2=53,
        LEVEL_HallsOfVaught=124,
        LEVEL_IcyCellar=119,
        LEVEL_Tristram=38,
        LEVEL_SpiderForest=76,
        LEVEL_KurastDocktown=75,
        LEVEL_Mausoleum=19,
        LEVEL_ClawViperTempleLevel2=61,
        LEVEL_ForgottenTower=20,
        LEVEL_ClawViperTempleLevel1=58,
        LEVEL_ArreatSummit=120,
        LEVEL_MaggotLairLevel3=64,
        LEVEL_MaggotLairLevel2=63,
        LEVEL_BlackMarsh=6,
        LEVEL_MatronsDen=133,
        LEVEL_SpiderCave=84,
        LEVEL_DenOfEvil=8,
        LEVEL_UberTristram=136,
        LEVEL_TheWorldstoneChamber=132,
        LEVEL_LostCity=44,
        LEVEL_None=0,
        LEVEL_FlayerJungle=78,
        LEVEL_FrozenRiver=114,
        LEVEL_CityOfTheDamned=106,
        LEVEL_CanyonOfTheMagi=46,
        LEVEL_Cathedral=33,
        LEVEL_ChaosSanctuary=108,
        LEVEL_DisusedReliquary=99,
        LEVEL_DrifterCavern=116,
        LEVEL_RockyWaste=41,
        LEVEL_FogottenSands=134,
        LEVEL_ForgottenTemple=97,
        LEVEL_GlacialTrail=115,
        LEVEL_RuinedFane=98,
        LEVEL_DarkWood=5,
        LEVEL_HoleLevel1=11,
        LEVEL_InnerCloister=32,
        LEVEL_BurialGrounds=17,
        LEVEL_HoleLevel2=15,
        LEVEL_BloodMoor=2,
        LEVEL_ColdPlains=3,
        LEVEL_SpiderCavern=85,
        LEVEL_BloodyFoothills=110,
        LEVEL_RiverOfFlame=107,
        LEVEL_TowerCellarLevel3=23,
        LEVEL_TowerCellarLevel4=24,
        LEVEL_GreatMarsh=77,
        LEVEL_InfernalPit=127,
        LEVEL_TowerCellarLevel5=25,
        LEVEL_DryHills=42,
        LEVEL_FlayerDungeonLevel2=89,
        LEVEL_HallsOfTheDeadLevel2=57,
        LEVEL_FlayerDungeonLevel3=91,
        LEVEL_HallsOfTheDeadLevel1=56,
        LEVEL_TheWorldstoneKeepLevel1=128,
        LEVEL_FlayerDungeonLevel1=88,
        LEVEL_HallsOfTheDeadLevel3=60,
        LEVEL_TheWorldstoneKeepLevel3=130,
        LEVEL_TheWorldstoneKeepLevel2=129,
        LEVEL_ThePandemoniumFortress=103,
        LEVEL_TalRashasTomb1=66,
        LEVEL_JailLevel2=30,
        LEVEL_StonyTombLevel2=59,
        LEVEL_TalRashasTomb7=72,
        LEVEL_Abaddon=125,
        LEVEL_JailLevel1=29,
        LEVEL_LowerKurast=79,
        LEVEL_TalRashasTomb6=71,
        LEVEL_TowerCellarLevel1=21,
        LEVEL_TowerCellarLevel2=22,
        LEVEL_MaggotLairLevel1=62,
        LEVEL_TalRashasTomb3=68,
        LEVEL_TalRashasTomb2=67,
        LEVEL_TalRashasTomb5=70,
        LEVEL_ValleyOfSnakes=45,
        LEVEL_JailLevel3=31,
        LEVEL_StonyTombLevel1=55,
        LEVEL_TalRashasTomb4=69,
        LEVEL_Travincal=83,
        LEVEL_LutGholein=40,
        LEVEL_UndergroundPassageLevel2=14,
        LEVEL_DuranceOfHateLevel1=100,
        LEVEL_FurnaceofPain=135,
        LEVEL_DuranceOfHateLevel2=101,
        LEVEL_DuranceOfHateLevel3=102,
        LEVEL_Harrogath=109,
        LEVEL_ThroneOfDestruction=131,
        LEVEL_UndergroundPassageLevel1=10,
        LEVEL_ArcaneSanctuary=74,
        LEVEL_PitOfAcheron=126,
        LEVEL_OuterCloister=27,
        LEVEL_MonasteryGate=26,
        LEVEL_A2SewersLevel3=49,
        LEVEL_TamoeHighland=7,
        LEVEL_A3SewersLevel2=93,
        LEVEL_A3SewersLevel1=92,
        LEVEL_HallsOfPain=123,
        LEVEL_KurastBazaar=80,
        LEVEL_PlainsOfDespair=105,
        LEVEL_HallsOfAnguish=122,
        LEVEL_MooMooFarm=39,
        LEVEL_A2SewersLevel1=47,
        LEVEL_DisusedFane=95,
        LEVEL_A2SewersLevel2=48,
        LEVEL_SwampyPitLevel3=90,
        LEVEL_NihlathaksTemple=121,
        LEVEL_SwampyPitLevel2=87,
        LEVEL_SwampyPitLevel1=86,
        LEVEL_KurastCauseway=82,
        LEVEL_CaveLevel1=9,
        LEVEL_CaveLevel2=13,
        LEVEL_DurielsLair=73,
        LEVEL_ForgottenReliquary=96,
        LEVEL_CrystalizedPassage=113,
        LEVEL_CatacombsLevel4=37,
        LEVEL_CatacombsLevel1=34,
        LEVEL_AncientTunnels=65,
        LEVEL_CatacombsLevel3=36,
        LEVEL_CatacombsLevel2=35,
        LEVEL_FrigidHighlands=111
    } eD2LevelId;

    typedef struct D2ParsedChestTreasureClassStrc D2ParsedChestTreasureClassStrc, *PD2ParsedChestTreasureClassStrc;

    struct D2StatesTxt {
        short state;
        short overlay[4];
        short castoverlay;
        short removerlay;
        short pgsvoverlay;
        int nosend:1;
        int aura:1;
        int hide:1;
        int transform:1;
        int pgsv:1;
        int active:1;
        int remhit:1;
        int damblue:1;
        int damred:1;
        int attblue:1;
        int attred:1;
        int curse:1;
        int curable:1;
        int plrstaydeath:1;
        int monstaydeath:1;
        int bossstaydeath:1;
        int disguise:1;
        int restrict:1;
        int blue:1;
        int armblue:1;
        int rfblue:1;
        int rcblue:1;
        int rlblue:1;
        int rpblue:1;
        int stambarblue:1;
        int armred:1;
        int rfred:1;
        int rcred:1;
        int rlred:1;
        int rpred:1;
        int exp:1;
        int shatter:1;
        int life:1;
        int udead:1;
        int green:1;
        int nooverlays:1;
        int noclear:1;
        int bossinv:1;
        int meleeonly:1;
        int notondead:1;
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
        int enabled:1;
        int nolimit:1;
        int carry1:1;
        int ladder:1;
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
        int sendother:1;
        int signed:1;
        int damagerelated:1;
        int itemspecific:1;
        int direct:1;
        int updateanimrate:1;
        int fmin:1;
        int fcallback:1;
        int saved:1;
        int csvsigned:1;
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
        struct D2ParsedTreasureClassStrc * ChestA;
        struct D2ParsedTreasureClassStrc * ChestB;
        struct D2ParsedTreasureClassStrc * ChestC;
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
        void * field_0x0;
        void * field_0x4;
    };

    struct D2SeedStrc {
        int nSeedLow;
        int nSeedHigh;
    };

    struct D2DataTableTxtStrc {
        struct D2PlayerClassTxt * pTxtPlayerClass;
        struct D2TxtLinkStrc * pTxtPlayerClassLink;
        struct D2BodyLocsTxt * pTxtBodyLocs;
        struct D2TxtLinkStrc * pTxtBodyLocsLink;
        struct D2StorePageTxt * pTxtStorePage;
        struct D2TxtLinkStrc * pTxtStorePageLink;
        struct D2ElemTypesTxt * pTxtElemTypes;
        struct D2TxtLinkStrc * pTxtElemTypesLink;
        struct D2HitClassTxt * pTxtHitClass;
        struct D2TxtLinkStrc * pTxtHitClassLink;
        struct D2MonModeTxtSmall * pTxtMonMode;
        struct D2TxtLinkStrc * pTxtMonModeLink;
        struct D2PlrModeTxt * pTxtPlrMode;
        struct D2TxtLinkStrc * pTxtPlrModeLink;
        struct D2SkillCalcTxt * pTxtSkillCalc;
        struct D2TxtLinkStrc * pTxtSkillCalcLink;
        pointer pSkillsCodeUnk1;
        int nSkillsCodeUnk2;
        int nSkillsCodeUnk3;
        pointer pSkillsDescCodeUnk1;
        int nSkillsDescCodeUnk2;
        int nSkillsDescCodeUnk3;
        struct D2MissCalcTxt * pTxtMissCalc;
        struct D2TxtLinkStrc * pTxtMissCalcLink;
        pointer pMissCodeUnk1;
        int nMissCodeUnk2;
        int nMissCodeUnk3;
        struct D2SkillsHeaderTxt * pTxtSkillsHeader;
        struct D2TxtLinkStrc * pTxtSkillsHeaderLink;
        struct D2EventsTxt * pTxtEvents;
        struct D2TxtLinkStrc * pTxtEventsLink;
        struct D2CompCodeTxt * pTxtCompCode;
        struct D2TxtLinkStrc * pTxtCompCodeLink;
        int nTxtCompCodeSize;
        struct D2MonAiTxt * pTxtMonAi;
        struct D2TxtLinkStrc * pTxtMonAiLink;
        int nTxtMonAiSize;
        struct D2TxtLinkStrc * sTxtItemsLink;
        pointer pItemsCodeUnk1;
        int nItemsCodeUnk2;
        int nItemsCodeUnk3;
        struct D2PropertiesTxt * pTxtProperties;
        struct D2TxtLinkStrc * pTxtPropertiesLink;
        int nTxtPropertiesSize;
        struct D2TxtLinkStrc * pTxtRunesLink;
        struct D2HireDescTxt * pTxtHireDesc;
        struct D2TxtLinkStrc * pTxtHireDescLink;
        struct D2StatesTxt * pTxtStates;
        struct D2TxtLinkStrc * pTxtStatesLink;
        int nTxtStatesSize;
        struct D2StatesDataTbls * pStatesDataTbls;
        struct D2StatesDataTbls * pSingleStateDataTbl[40];
        struct D2AllStatesDataTbl * pAllStatesDataTblFlag0x04;
        int nAllStatesDataTblFlag0x04Size;
        struct D2AllStatesDataTbl * pAllStatesDataTblFlag0x0B;
        int nAllStatesDataTblFlag0x0BSize;
        struct D2AllStatesDataTbl * pAllStatesDataTblFlag0x10;
        int nAllStatesDataTblFlag0x10Size;
        struct D2AllStatesDataTbl * pAllStatesDataTblFlag0x05;
        int nAllStatesDataTblFlag0x05Size;
        struct D2AllStatesDataTbl * pStatesItemTypesDataTbl;
        int nStatesItemTypesDataTblSize;
        struct D2SoundsTxt * pTxtSounds;
        struct D2TxtLinkStrc * pTxtSoundsLink;
        int nTxtSoundsSize;
        struct D2HirelingTxt * pTxtHireling;
        int nTxtHirelingSize;
        int nTxtHirelingIdLines[512];
        struct D2NpcTxt * pTxtNpc;
        int nTxtNpcSize;
        struct D2ColorsTxt * pTxtColors;
        struct D2TxtLinkStrc * pTxtColorsLink;
        struct D2TxtLinkStrc * pTxtMonsterTblsLink;
        struct D2ParsedTreasureClassStrc * pParsedTreasureClass;
        int nParsedTreasureClassSize;
        struct D2ParsedDifficultyTreasureClassStrc pParsedTreasureClassDiffActChestABC;
        struct D2MonStatsTxt * pTxtMonStats;
        struct D2TxtLinkStrc * pTxtMonStatsLink;
        int nTxtMonStatsSize;
        struct D2MonSoundsTxt * pTxtMonSounds;
        struct D2TxtLinkStrc * pTxtMonSoundsLink;
        int nTxtMonSoundsSize;
        struct D2MonStats2Txt * pTxtMonStats2;
        struct D2TxtLinkStrc * pTxtMonStats2Link;
        int nTxtMonStats2Size;
        struct D2MonPlaceTxt * pTxtMonPlace;
        struct D2TxtLinkStrc * pTxtMonPlaceLink;
        int nTxtMonPlaceSize;
        struct D2MonPresetTxtPlace * pTxtMonPresetPlace;
        struct D2MonPresetTxt * pTxtMonPresetPerAct[5];
        int pTxtMonPresetPerActId[5];
        struct D2SuperUniquesTxt * pTxtSuperUniques;
        struct D2TxtLinkStrc * pTxtSuperUniquesLink;
        int nTxtSuperUniquesSize;
        short aTxtSuperUniquesHardcoded[66];
        struct D2MissilesTxt * pTxtMissiles;
        struct D2TxtLinkStrc * pTxtMissilesLink;
        int nTxtMissilesSize;
        struct D2MonLvlTxt * pTxtMonLvl;
        int nTxtMonLvlSize;
        struct D2MonSeqTxt * pTxtMonSeq;
        struct D2TxtLinkStrc * pTxtMonSeqLink;
        int nTxtMonSeqSize;
        struct D2MonSeqMonsterTbls * pMonSeqMonsterTbls;
        int nMonSeqMonsterTblsSize;
        struct D2SkillDescTxt * pTxtSkillDesc;
        struct D2TxtLinkStrc * pTxtSkillDescLink;
        int nTxtSkillDescSize;
        struct D2SkillsTxt * pTxtSkills;
        struct D2TxtLinkStrc * pTxtSkillsLink;
        int nTxtSkillsCount;
        struct D2SkillsPerClassCounter * pSkillsPerClassCounter;
        int nSkillCountMaxPerClass;
        struct D2SkillsPerClassStrc * pSkillsPerClassStrc;
        int nPassiveSkillsCount;
        struct D2PassiveSkillsPerClassStrc * pPassiveSkillsPerClassStrc;
        struct D2TxtLinkStrc * pTxtOverlayLink;
        struct D2OverlayTxt * pTxtOverlay;
        int nTxtOverlaySize;
        struct D2CharStatsTxt * pTxtCharStats;
        int nTxtCharStatsSize;
        struct D2ItemStatCostTxt * pTxtItemStatCost;
        struct D2TxtLinkStrc * pTxtItemStatCostLink;
        int nTxtItemStatCostSize;
        short * pItemStatCostDescPriority;
        int nItemStatCostDescPrioritySize;
        struct D2MonEquipTxt * pTxtMonEquip;
        int nTxtMonEquipSize;
        struct D2PetTypeTxt * pTxtPetType;
        struct D2TxtLinkStrc * pTxtPetTypeLink;
        int nTxtPetTypeSize;
        struct D2TxtLinkStrc * pTxtItemTypesLink;
        struct D2ItemTypesTxt * pTxtItemTypes;
        int nTxtItemTypesSize;
        int nTxtItemTypesUnknownSize;
        pointer pTxtItemTypesUnknown;
        struct D2TxtLinkStrc * pTxtSetsLink;
        struct D2SetsTxt * pTxtSets;
        int nTxtSetsSize;
        struct D2TxtLinkStrc * pTxtSetItemsLink;
        struct D2SetItemsTxt * pTxtSetItems;
        int nTxtSetItemsSize;
        struct D2TxtLinkStrc * pTxtUniqueItemsLink;
        struct D2UniqueItemsTxt * pTxtUniqueItems;
        int nTxtUniqueItemsSize;
        struct D2TxtLinkStrc * pTxtMonPropLink;
        struct D2MonPropTxt * pTxtMonProp; /* structure need to be checked if it spawns properly */
        int nTxtMonPropSize;
        struct D2TxtLinkStrc * pTxtMonTypeLink;
        struct D2MonTypeTxt * pTxtMonType;
        int nTxtMonTypeSize;
        pointer pTxtMonTypeUnknown; /* Allocated inside of MonType */
        int nTxtMonTypeUnknownSize; /* Allocated inside of MonType */
        struct D2TxtLinkStrc * pTxtMonUmodLink;
        struct D2MonUModTxt * pTxtMonUmod;
        int nTxtMonUmodSize;
        struct D2LevelsTxt * pTxtLevels;
        int nTxtLevelsSize;
        struct D2LevelDefsTxt * pTxtLevelDefs;
        struct D2LvlPrestTxt * pTxtLvlPrest;
        int nTxtLvlPrestSize;
        int nTxtItemStatCostStuff;
        int nTxtItemStatCostStuffShiftedUnknonw;
        undefined4 pAnimTbls;
        struct D2ExperienceTxt * pTxtExperience;
        struct D2DifficultyLevelsTxt * pTxtDifficultyLevels;
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
        int LastCollide:1;
        int Explosion:1;
        int Pierce:1;
        int CanSlow:1;
        int CanDestroy:1;
        int ClientSend:1;
        int GetHit:1;
        int SoftHit:1;
        int ApplyMastery:1;
        int ReturnFire:1;
        int Town:1;
        int SrcTown:1;
        int NoMultiShot:1;
        int NoUniqueMod:1;
        int Half2HSrc:1;
        int MissileSkill:1;
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
        char noGfxHitTest:1;
        char noMap:1;
        char noOvly:1;
        char isSel:1;
        char alSel:1;
        char noSel:1;
        char shiftSel:1;
        char corpseSel:1;
        char revive:1;
        char isAtt:1;
        char small:1;
        char large:1;
        char soft:1;
        char critter:1;
        char shadow:1;
        char noUniqueShift:1;
        char compositeDeath:1;
        char inert:1;
        char objCol:1;
        char deadCol:1;
        char unflatDead:1;
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
        void * field_0x4;
        void * pUnknownPointer;
        struct D2TxtLinkNodeStrc * pTxtLinkNode;
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
        struct D2SetItemsTxt * pTxtSetItems[6];
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
        struct D2TxtLinkNodeStrc * pPrevious;
        struct D2TxtLinkNodeStrc * pNext;
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
        struct D2MonSeqTxt * pMonSeqTxt;
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
        struct D2ParsedTreasureClassSub0x28Strc * field_0x28;
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
        int isSpawn:1;
        int isMelee:1;
        int noRatio:1;
        int opendoors:1;
        int SetBoss:1;
        int BossXfer:1;
        int boss:1;
        int primeevil:1;
        int npc:1;
        int interact:1;
        int inTown:1;
        int lUndead:1;
        int hUndead:1;
        int demon:1;
        int flying:1;
        int killable:1;
        int switchai:1;
        int nomultishot:1;
        int neverCount:1;
        int petIgnore:1;
        int deathDmg:1;
        int genericSpawn:1;
        int zoo:1;
        int placespawn:1;
        int inventory:1;
        int enabled:1;
        int NoShldBlock:1;
        int noaura:1;
        int rangedtype:1;
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
        int Place:1;
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
        struct D2SkillsTxt * pRecord;
        struct D2SkillStrc * pNext;
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


}

#endif //CHARON_GHIDRA_H
