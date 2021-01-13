






/*
This file is generated, do not edit by hand. 
Consult readme.md
*/








#pragma once
#include "./enums.h"
#include "./naked.h"
namespace Ghidra {
typedef char string;
typedef unsigned int pointer;
typedef RTL_CRITICAL_SECTION CRITICAL_SECTION;
typedef unsigned int uint;
typedef uint size_t;
typedef unsigned char uchar;
typedef uchar BYTE;
typedef unsigned long ulong;
typedef ulong DWORD;
typedef int BOOL;
typedef unsigned char undefined;
typedef unsigned int undefined4;
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;
typedef unsigned short ushort;
typedef ushort WORD;
typedef unsigned short undefined2;
typedef  void (*callback_void2pfAutoMap)(D2RoomStrc*) ;
typedef  void (*callback_void3pfTownAutoMap)(enum eD2LevelId, int, int, int) ;
typedef  void (*callback_void9pCallback)(D2RoomStrc*) ;
typedef unsigned int dword;
typedef  void (*callback_void1fpQuestStateHandler15)(D2QuestDataStrc*, D2QuestArgStrc*) ;
typedef  bool (*callback_bool5fpStatusFilter)(D2QuestDataStrc*, D2UnitStrc*, D2BitBufferStrc*, D2BitBufferStrc*, BYTE*) ;
typedef  bool (*callback_bool6fpActiveFilter)(D2QuestDataStrc*, int, D2UnitStrc*, D2BitBufferStrc*, D2UnitStrc*) ;
typedef  bool (*callback_bool7fpSequenceFilter)(D2QuestDataStrc*, D2UnitStrc*, D2BitBufferStrc*, D2BitBufferStrc*, BYTE*) ;
typedef  int (*callback_int10pfUpdate)(D2GameStrc*, D2QuestDataStrc*) ;
typedef  void (*callback_void4fpAiFunction)(D2GameStrc*, D2UnitStrc*, D2AiParamStrc*) ;
typedef  void (*callback_void8fpFunction)(D2GameStrc*, D2UnitStrc*, D2AiParamStrc*) ;
typedef wchar_t WCHAR;
typedef  BOOL (*callback_BOOL11fpItemEventFunc)(D2GameStrc*, int, D2UnitStrc*, D2UnitStrc*, void* , enum eD2Skills, int) ;
typedef char CHAR;
typedef uint UINT_PTR;
typedef UINT_PTR SOCKET;
typedef ushort u_short;
typedef void* HANDLE;
typedef  void (*callback_void30fpSID_StartAdVex3)(char* , char* , char* , int) ;
typedef  BOOL (*callback_BOOL100fpDraw)(D2ControlStrc*) ;
typedef  BOOL (*callback_BOOL101fpDrawEx)(D2ControlStrc*) ;
typedef UINT_PTR WPARAM;
typedef  BOOL (*callback_BOOL102fpPush)(D2ControlMsg*) ;
typedef  BOOL (*callback_BOOL103fpMouse)(D2ControlMsg*) ;
typedef  BOOL (*callback_BOOL104fpListCheck)(D2ControlMsg*) ;
typedef  BOOL (*callback_BOOL105fpKey)(D2ControlMsg*) ;
typedef  BOOL (*callback_BOOL106fpOnPress)(D2ControlStrc*) ;
typedef  BOOL (*callback_BOOL107fpDrawAnim)(D2ControlStrc*) ;
typedef  BOOL (*callback_BOOL108fpOnPressCallback)(D2ControlStrc*) ;
struct D2PoolBlockStrc{
	BYTE* pCommit; 
	DWORD* pUsage; 
	size_t nBlocks; 
	D2PoolBlockStrc* pPrev; 
	D2PoolBlockStrc* pNext; 
	D2PoolStrc* pPool; 
};

struct D2PoolStrc{
	CRITICAL_SECTION pSync; 
	size_t nBlockSize; 
	size_t nBlocks; 
	size_t nSize; 
	size_t nAllocBlock; 
	D2PoolBlockStrc* pBlocks; 
	D2PoolBlockStrc* pTail; 
};

struct D2PoolBlockEntryStrc{
	D2PoolBlockStrc* pBlock; 
	void* pCommit; 
};

struct D2PoolManagerStrc{
	int nPoolId; /* related to pool count..*/
	CRITICAL_SECTION pSync; 
	size_t nPools; 
	D2PoolStrc pPools[40]; 
	size_t nBlocks; 
	size_t nTotalBlocks; 
	D2PoolBlockEntryStrc* pBlocks; 
	BYTE* pOverflow[1023]; 
	DWORD dwMemory; 
	char szName[32]; 
};

struct D2SeedStrc{
	int nSeedLow; 
	int nSeedHigh; 
};

struct D2BitBufferStrc{
	char* pBuffer; 
	size_t nBitsInBuffer; 
	size_t nCufferPos; 
	size_t nBitsAtPos; 
	BOOL bEnd; 
};

struct D2WaypointStrc{
	short field_0x0[2]; 
	undefined _0[12]; // compressed
};

struct D2UnitDataPlayerArenaStrc{
	undefined4 _0[2]; // compressed
};

struct D2PetStrc{
	int flag; 
	undefined4 _0[2]; // compressed
};

struct D2UnitDataPlayerPetsStrc{
	D2PetStrc* pPet; 
};

struct D2UnitDataPlayerInteractedNPCStrc{
	D2BitBufferStrc* pIntro; 
	D2BitBufferStrc* pIntro2; 
	D2BitBufferStrc* pIntro3; 
};

struct D2PartyDataStrc{
	undefined4 nUnitGUID; 
	undefined4 nUnitLife_Maybe; 
	enum eD2LevelId nUnitArea_Maybe; 
	undefined4 field_0xc; 
	D2PartyDataStrc* pPrev; 
};

struct D2EventEntryStrc{
	undefined _0[28]; // compressed
	D2EventEntryStrc* pNext; 
	undefined _1[16]; // compressed
};

struct D2EventStrc{
	D2EventEntryStrc aEvents[600]; 
	D2EventStrc* pNext; 
	D2EventStrc* pPrev; 
};

struct D2EventControlStrc{
	undefined _0[2588]; // compressed
	D2EventStrc* pEvent; 
};

struct D2DrlgEnvironmentStrc{
	int pTimeIndex; 
	int nEnvironmentData; 
	int pTicks; 
	int nGlobalLightIntensity; 
	DWORD dwTickCount; /* Created by retype action*/
	int nUnused; /* Created by retype action*/
	byte nGlobalLightRed; 
	byte nGlobalLightGreen; 
	byte nGlobalLightBlue; 
	undefined field_0x1b; 
	float fCos; 
	float fLast; 
	float fSin; 
	int nTimeRate; 
	int field_0x2c; 
	BOOL pEclipse; 
	undefined _0[4]; // compressed
};

struct D2TileLibraryHashRefStrc{
	D2TileLibraryEntryStrc* pTile; 
	D2TileLibraryHashRefStrc* pPrev; 
};

struct D2TileLibraryHashNodeStrc{
	int nIndex; 
	int nSubIndex; 
	int nOrientation; 
	D2TileLibraryHashRefStrc* pRef; 
	D2TileLibraryHashNodeStrc* pPrev; 
};

struct D2TileLibraryHashStrc{
	D2TileLibraryHashNodeStrc* pNodes[128]; 
};

struct D2TileRecordStrc{
	char szLibraryName[260]; 
	void* pLibrary; 
	D2TileLibraryHashStrc* pHashBlock; 
	D2TileRecordStrc* pPrev; 
};

struct D2TileLibraryEntryStrc{
	int nDirection; 
	short nRoofHeight; 
	short nFlags; 
	int nHeight; 
	int nWidth; 
	int field_0x10; 
	int nOrientation; 
	int nIndex; 
	int nSubIndex; 
	int nFrame_Rarity; 
	int field_0x24; 
	BYTE dwTileFlags[4]; 
	int dwBlockOffset_pBlock; 
	int nBlockSize; 
	int nBlocks; 
	D2TileRecordStrc* pParent; 
	short field_0x3c; 
	short nCacheIndex; 
	int _0[4]; // compressed
};

struct D2DrlgTileDataStrc{
	int nWorldCoordsXMin; 
	int nWorldCoordsYMin; 
	int nWorldCoordsXMax; 
	int nWorldCoordsYMax; 
	undefined _0[8]; // compressed
	D2TileLibraryEntryStrc* pTileLibraryEntry; /* Created by retype action*/
	int field_0x1c; 
	undefined _1[16]; // compressed
};

struct D2DrlgRoomTilesStrc{
	D2DrlgTileDataStrc* pTilesWalls; 
	int nTilesWallsSize; 
	D2DrlgTileDataStrc* pTilesFloors; 
	int nTilesFloorsSize; 
	D2DrlgTileDataStrc* pTilesRoofs; 
	int nTilesRoofsSize; 
};

struct D2DrlgCoordsStrc{
	POINT WorldPosition; 
	POINT WorldSize; 
};

struct D2DrlgRoomExSub00Strc{
	D2RoomExStrc* pRoomEx; 
	undefined _0[4]; // compressed
	BOOL bIsDrlgTypePresetArea; 
	int nNextCount; 
	D2DrlgCoordsStrc* psCoordinatesAndSize; 
	D2DrlgRoomExSub00Strc* pSub00Next; /* Created by retype action*/
};

struct D2DrlgGridStrc{
	int* pCellsFlags; 
	int* pCellsRowOffsets; 
	int nWidth; 
	int nHeight; 
	int field_0x10; 
};

struct D2DrlgVertexStrc{
	int nPosX; 
	int nPosY; 
	byte nDirection; 
	int dwFlags; 
	D2DrlgVertexStrc* pNext; 
};

struct D2DrlgOutdoorRoomStrc{
	D2DrlgGridStrc pOrientationGrid; 
	D2DrlgGridStrc pWallGrid; 
	D2DrlgGridStrc pFloorGrid; 
	D2DrlgGridStrc pCellGrid; 
	D2DrlgVertexStrc* pVertex; 
	int dwFlags; 
	int dwFlagsEx; 
	int _0[2]; // compressed
	int nSubType; 
	int nSubTheme; 
	int nSubThemePicked; /* Created by retype action*/
};

struct D2DrlgRoomExDataPresetWorldCoordinatesBurialGrounds{
	POINT PointsList[6]; /* My guess is thats a list of points where BloodRaven is moving to*/
};

struct D2DrlgRoomExDataPreset{
	int Def; 
	undefined _0[236]; // compressed
	D2DrlgRoomExDataPresetWorldCoordinatesBurialGrounds* sWorldPointsBurialGrounds; 
	int nWorldPointsBurialGroundsSize; /* Created by retype action*/
};

union D2DrlgRoomExDataUnion{
	D2DrlgOutdoorRoomStrc* pRoomExDataOutRoom; /* DRLG Type = RandomMaze*/
	D2DrlgRoomExDataPreset* pRoomExDataPreset; /* DRLG Type = PresetArea*/
};

/* field 0x4C of */
struct D2DrlgRoomExSub4CRoomTileStrc{
	undefined _0[4]; // compressed
	D2DrlgRoomExSub4CRoomTileStrc* pRoomTileNext; 
	undefined _1[16]; // compressed
};

struct D2DrlgRoomExSub54RoomTileStrc{
	undefined4 _0[2]; // compressed
	D2DrlgRoomExSub54RoomTileStrc* nNext; /* Created by retype action*/
	undefined4 _1[2]; // compressed
	D2DrlgRoomTilesStrc Tiles; 
};

struct D2LvlMazeTxt{
	enum eD2LevelId Level; /* ID from D2LevelsTxt*/
	int Rooms[3]; /* the minimum number of .ds1 map sections that will make up the maze in Normal, Nightmare and Hell difficulties.*/
	int SizeX; /* The size in the X\Y direction of any component ds1 map section.*/
	int SizeY; /* The size in the X\Y direction of any component ds1 map section.*/
	int Merge; /* Possibly related to how adjacent .ds1s are connected with each other, but what the different values are for is unknown.*/
};

struct D2LvlPrestTxt{
	int Def; 
	enum eD2LevelId LevelId; 
	int Populate; 
	int Logicals; 
	int Outdoors; 
	int Animate; 
	int KillEdge; 
	int FillBlanks; 
	int Expansion; 
	undefined _0[4]; // compressed
	int SizeX; 
	int SizeY; 
	int AutoMap; 
	int Scan; 
	int Pops; 
	int PopPad; 
	int Files; 
	string File[6]; 
	int Dt1Mask; 
};

struct D2DrlgLevelSub1B0Strc{
	void* field_0x0; 
	int nRandomMapFileSelector; /* Created by retype action*/
	D2LvlPrestTxt* pTxtLevelPrest; 
	undefined _0[4]; // compressed
	int nRealOffsetX; 
	int nRealOffsetY; 
	int nSizeX; 
	int nSizeY; 
	undefined _1[52]; // compressed
	D2DrlgLevelSub1B0Strc* pNext; 
};

struct D2DrlgLevelDataPresetArea{
	D2DrlgLevelSub1B0Strc* pDrlgLevelSub1B0Strc; 
	int nMapVersion; 
};

struct D2DrlgLevelDataWildernessLevel{
	undefined _0[612]; // compressed
	D2RoomExStrc* pDrlgRoomEx; /* Created by retype action*/
};

union D2DrlgLevelDataUnion{
	D2LvlMazeTxt* pTxtLvlMaze; /* when DRLG Type is DRLGTYPE_RandomMaze*/
	D2DrlgLevelDataPresetArea* pDrlgLevelPresetData; /* when DRLG Type is DRLGTYPE_PresetArea*/
	D2DrlgLevelDataWildernessLevel* pDrlgLevelOutdoorsData; /* when DRLG Type is DRLGTYPE_WildernessLevel*/
};

struct D2DrlgActWarpsInfoStrc{
	enum eD2LevelId nLevelId; 
	enum eD2LevelId nTargetArea[8]; 
	int nWarpId[8]; 
	D2DrlgActWarpsInfoStrc* pNext; 
};

struct D2DrlgActMiscSubA0Strc{
	undefined _0[28]; // compressed
	D2DrlgActMiscSubA0Strc* pActMiscSubA0_1; 
	undefined _1[36]; // compressed
	byte nActNo; /* Created by retype action*/
	undefined _2[163]; // compressed
	D2DrlgActMiscSubA0Strc* pActMiscSubA0_2; 
};

struct D2DrlgStrc{
	D2SeedStrc nSeed; 
	int field_0x8; 
	undefined4 pTileProjects; 
	undefined _0[124]; // compressed
	int dwFlags; 
	D2DrlgActWarpsInfoStrc* pWarpsInfo; 
	uint nAct2_RealTombLevel; 
	char field_0x98; 
	undefined _1[3]; // compressed
	D2GameStrc* pGame; 
	D2DrlgActMiscSubA0Strc* apSubA0[5]; 
	undefined _2[52]; // compressed
	int field_0xe8; 
	undefined _3[868]; // compressed
	BYTE nDifficulty; 
	undefined _4[3]; // compressed
	callback_void2pfAutoMap * pfAutoMap; 
	DWORD nInitSeed; 
	undefined _5[8]; // compressed
	DWORD nUnknownZero; 
	undefined _6[4]; // compressed
	D2DrlgActStrc* pAct; 
	uint nSeedLast; 
	uint nAct3_SpecificUnknown; 
	D2PoolManagerStrc* pMemoryPool; 
	D2DrlgLevelStrc* pLevel; 
	char nActNo; 
	undefined _7[3]; // compressed
	uint nAct2_BigTomb; 
	callback_void3pfTownAutoMap * pfTownAutoMap; 
};

struct D2DrlgLevelStrc{
	enum eD2DrlgType eDrlgType; 
	uint dwFlags; 
	int nRoomExSize; 
	undefined _0[4]; // compressed
	D2RoomExStrc* pRoomExFirst; /* Created by retype action*/
	D2DrlgLevelDataUnion pDrlgLevelData; 
	undefined _1[4]; // compressed
	D2DrlgCoordsStrc sCoordinatesAndSize; 
	char aUnknown0x2C[384]; 
	D2DrlgLevelStrc* pLevelNext; 
	D2DrlgLevelSub1B0Strc* pDrglLevelSub1B0; /* Created by retype action*/
	D2DrlgStrc* pDrlgActMisc; /* Created by retype action*/
	undefined _2[4]; // compressed
	pointer pUnknownStructure0x1BC; 
	int nLevelType; 
	D2SeedStrc sSeed; /* Created by retype action*/
	pointer pIAmStructUnknownSize_0x1CC; 
	enum eD2LevelId eD2LevelId; 
	undefined _3[4]; // compressed
	int nUnknown0x1D8; 
	int nLastRoomExCoordsIndex; 
	char aUnknown0x1E0[76]; 
	pointer ppToArrayProbably_0x122C; 
};

struct D2PresetUnitStrc{
	BOOL bUseMonStatsMaybe; 
	int nMonStatsId; 
	int nPosX; 
	D2PresetUnitStrc* pPresetUnitNext; /* Created by retype action*/
	int field_0x10; 
	enum eD2UnitType eD2UnitType; 
	int nPosY; 
	int nFlags; 
	DPOINT pos (D2RoomExStrc* pRoom, DPOINT adjust);
};

struct D2DrlgCoordStrc{
	int nPosX; 
	int nPosY; 
	int nWidth; 
	int nHeight; 
};

struct D2RoomCoordListStrc{
	D2DrlgCoordStrc pBox[2]; 
	BOOL bNode; 
	BOOL nRoomActive; 
	int nIndex; 
	D2RoomCoordListStrc* pNext; /* Created by retype action*/
};

struct D2DrlgCoordListStrc{
	int eFlags; 
	int nListSize; /* Created by retype action*/
	D2DrlgGridStrc sIndexX; 
	D2DrlgGridStrc sIndexY; 
	D2RoomCoordListStrc* pCoord; /* Created by retype action*/
};

struct D2RoomExStrc{
	D2DrlgRoomExSub00Strc* psSub00; 
	int nSeed; 
	D2RoomExStrc** ppDrlgRoomsExNear; 
	undefined _0[4]; // compressed
	int field_0x10; 
	D2SeedStrc sSeed; /* Created by retype action*/
	undefined _1[4]; // compressed
	D2DrlgRoomExDataUnion pRoomExData; /* Created by retype action*/
	D2RoomExStrc* pRoomExNext; 
	int eRoomExFlags; /* Created by retype action*/
	int nDrlgRoomsExNearCount; 
	D2RoomStrc* pRoom; 
	D2DrlgCoordsStrc sCoords; /* Created by retype action*/
	char field_0x44; 
	undefined _2[3]; // compressed
	int nPresetType; /* Created by retype action*/
	D2DrlgRoomExSub4CRoomTileStrc* pRoomTile; 
	int dwFlags_Dt1Mask; /* Created by retype action*/
	D2DrlgRoomExSub54RoomTileStrc* pRoomExSub54; /* Created by retype action*/
	D2DrlgLevelStrc* pLevel; /* Created by retype action*/
	D2PresetUnitStrc* pPresetUnit; 
	undefined _3[4]; // compressed
	D2DrlgCoordListStrc* pDrlgCoordList; /* Created by retype action*/
	undefined4 pTileProject; /* This field seems like its same as in ActMisc_0xC = pTileProject*/
	undefined _4[128]; // compressed
	DWORD getWorldX ();
	DWORD getWorldY ();
	DWORD getWorldWidth ();
	DWORD getWorldHeight ();
	DWORD getCollision (DWORD localx, DWORD localy, WORD mask);
};

struct D2DrlgDeleteStrc{
	enum eD2UnitType eUnitType; 
	int nUnitGUID; 
	D2DrlgDeleteStrc* pNext; 
};

/* We need to find wehre it is allocated and cofnirm its */
struct D2RoomCollisionGridStrc{
	D2DrlgCoordsStrc World; 
	POINT RoomPosition; 
	POINT RoomSize; 
	enum eCollisionFlags* pMapStart; 
	enum eCollisionFlags* pMapEnd; 
};

struct D2DrlgRoomCoordsStrc{
	int dwXStart; 
	int dwYStart; 
	int dwXSize; 
	int dwYSize; 
	short wTileX; 
	short field_0x12; 
	short wTileY; 
	short field_0x16; 
	int _0[2]; // compressed
};

struct D2RoomStrc{
	D2RoomStrc** ppRoomList; 
	undefined _0[4]; // compressed
	D2DrlgRoomTilesStrc* pTilesAll; /* Pointer to Sub54 Sub14 field in RoomEx*/
	int field_0xc; 
	D2RoomExStrc* pRoomEx; 
	undefined _1[4]; // compressed
	D2DrlgDeleteStrc* pDrlgDelete; /* Created by retype action*/
	D2UnitStrc* pUnitUpdate; 
	D2RoomCollisionGridStrc* pCollisionGrid; /* Created by retype action*/
	uint nRoomListCount; /* Created by retype action*/
	int nAllies; 
	D2DrlgActStrc* pDrlgAct; /* Created by retype action*/
	undefined _2[4]; // compressed
	int eFlags; /* Created by retype action*/
	undefined _3[16]; // compressed
	pointer pClients; 
	D2DrlgRoomCoordsStrc sCoords; /* Created by retype action*/
	D2SeedStrc sSeed; 
	D2UnitStrc* pUnitList; 
	int nClientsCount; 
	D2RoomStrc* pDrlgRoomNext; /* Created by retype action*/
};

struct D2DrlgActSub18Strc{
	D2DrlgTileDataStrc* pTileData; 
	int _0[3]; // compressed
	undefined _1[4]; // compressed
	uint dwFlags; 
	int field_0x18; 
	undefined4 field_0x1c; 
	D2DrlgActSub18Strc* pNext; /* Created by retype action*/
	undefined4 field_0x24; 
	byte _2[3]; // compressed
	undefined _3[5]; // compressed
};

/* Structure is aligned to 4 */
struct D2DrlgActStrc{
	enum eD2LevelId eD2LevelId; 
	D2DrlgEnvironmentStrc* pEnvironment; 
	enum eD2LevelId nLevelId; /* Created by retype action*/
	int dwInitSeed; 
	D2RoomStrc* pRoom; /* Created by retype action*/
	char nActNo; 
	undefined _0[3]; // compressed
	D2DrlgActSub18Strc pActSub18; 
	D2DrlgStrc* pDrlg; /* Created by retype action*/
	callback_void9pCallback * pCallback; 
	BOOL bClientSide; 
	undefined _1[4]; // compressed
	BOOL bDrlgDeleteIsSet; /* Created by retype action*/
	D2PoolManagerStrc* pMemory; /* Created by retype action*/
};

struct D2InactiveUnitListStrc{
	int nX; 
	int nY; 
	undefined4 pInactiveItems; 
	undefined4 pInactiveMonsters; 
	undefined4 pInactiveUnits; 
	D2InactiveUnitListStrc* pNext; 
};

struct D2MonsterRegionFieldStrc{
	short spawn; 
	byte field_0x2; 
	undefined _0[49]; // compressed
};

struct D2MonsterRegionStrc{
	char nAct; 
	undefined _0[3]; // compressed
	int nRoomsCount; 
	undefined _1[4]; // compressed
	int nLevelRoomsCount; 
	byte nCounter; 
	byte nTotalRarity; 
	byte nSpawnCount; 
	undefined field_0x13; 
	D2MonsterRegionFieldStrc pMonData[13]; 
	int nMonsterDensity; /* Created by retype action*/
	byte nBossMin; 
	byte nBossMax; 
	byte nMonWander; 
	undefined field_0x2bf; 
	enum eD2LevelId eLevelId; /* Created by retype action*/
	undefined _2[4]; // compressed
	int dwUniqueCount; 
	int dwMonSpawnCount; 
	int dwMonKillCount; 
	undefined _3[4]; // compressed
	bool bQuest; 
	undefined _4[3]; // compressed
	int dwDungeonLevel; 
	int dwDungeonLevelEx; /* Created by retype action*/
};

struct D2QuestGUIDStrc{
	int aPlayerGUID[32]; 
	short nPlayerCount; 
};

struct D2QuestArgStrcUnion1{
	pointer pTextControl; 
	int field_0x4; 
};

struct D2QuestArgStrcUnion2{
	short nNPCNo; 
	undefined _0[2]; // compressed
	short nMessageIndex; 
	undefined _1[2]; // compressed
};

struct D2QuestArgStrcUnion3{
	int nOldLevel; 
	int nNewLevel; 
};

union uD2QuestArgStrcUnion{
	D2QuestArgStrcUnion1 field0; 
	D2QuestArgStrcUnion2 field1; 
	D2QuestArgStrcUnion3 field2; 
};

struct D2QuestArgStrc{
	D2GameStrc* pGame; 
	int nEvent; 
	D2UnitStrc* pTarget; 
	D2UnitStrc* pPlayer; 
	int field_0x10; 
	uD2QuestArgStrcUnion field_0x14; 
};

struct D2QuestDataCallbacksStrc{
	callback_void1fpQuestStateHandler15 * fpQuestStateHandler[15]; 
};

struct D2NPCMessageStrc{
	int nMonStatsId; 
	short nStringIndex; 
	short nPad; 
	BOOL nMenu; 
};

struct D2NPCMessageTableStrc{
	D2NPCMessageStrc pMessages[16]; 
	int nMessagesCount; 
};

struct D2QuestDataStrc{
	int nQuestNoInternal; 
	D2GameStrc* pGame; 
	byte nAct; 
	bool bIsNotIntroduction; 
	bool bIsActive; 
	byte nStateFlagPrev; 
	byte nStateFlag; 
	byte nInitNo; 
	undefined _0[2]; // compressed
	int nSequenceQuestId; 
	int eFlags; 
	void* pQuestSpecificData; /* Each quest has its own substructure here*/
	D2QuestGUIDStrc sQuestGUID; 
	undefined _1[2]; // compressed
	D2QuestDataCallbacksStrc sStateFunctions; 
	D2NPCMessageTableStrc* pNpcMessages; 
	enum eD2Quests nQuestIdReal; 
	enum eD2Quests nSubQuestId; 
	callback_bool5fpStatusFilter * fpStatusFilter; 
	callback_bool6fpActiveFilter * fpActiveFilter; 
	callback_bool7fpSequenceFilter * fpSequenceFilter; 
	D2QuestDataStrc* pPrev; 
};

struct D2QuestTimerStrc{
	callback_int10pfUpdate * pfUpdate; 
	D2QuestDataStrc* pQuest; 
	int dwTicks; 
	int dwTimeout; 
	D2QuestTimerStrc* pNext; 
};

struct D2QuestControlStrc{
	D2QuestDataStrc* pQuestData; 
	BOOL bExecuting; 
	BOOL bPickedSet; 
	D2BitBufferStrc* pQuestFlags; 
	D2QuestTimerStrc* pTimer; 
	int nTickcount; 
	D2SeedStrc sSeed; 
	int field_0x20; 
};

struct D2UnitNodeStrc{
	D2UnitStrc* pUnit; 
	int field_0x4; 
	D2UnitNodeStrc* pPrev; /* Created by retype action*/
	D2UnitNodeStrc* pNext; /* Created by retype action*/
};

struct D2InventoryGridStrc{
	D2UnitStrc* pItem[13]; 
};

struct D2InventoryGridInfoStrc{
	D2UnitStrc* pItem; 
	D2UnitStrc* pLastItem; 
	byte bWidth; 
	byte bHeight; 
	short field_0xa; 
	D2InventoryGridStrc* pInventoryGrid; 
};

struct D2InventoryStrc{
	int dwMagic; 
	D2PoolManagerStrc* pMemory; /* Created by retype action*/
	D2UnitStrc* pOwner; /* Created by retype action*/
	D2UnitStrc* pFirstItem; 
	D2UnitStrc* pLastItem; 
	D2InventoryGridInfoStrc* pGrids; 
	int nGridCount; 
	int dwPrimaryWeaponGUID; 
	D2UnitStrc* pInvOwnerItem; 
	int nOwnerGUID; /* Created by retype action*/
	int nGemCount; 
	undefined4 pUpdates; 
	undefined4 pUpdatesLast; 
	D2DrlgDeleteStrc* pCorpse; 
	D2DrlgDeleteStrc* pCorpseLast; 
	int nCorpseCount; 
};

struct D2GameNpcStrc{
	int nMonStatsId; 
	D2InventoryStrc* pInventory; 
	undefined _0[4]; // compressed
	bool bGamble; 
	undefined _1[20]; // compressed
	bool bHireling; 
	undefined field_0x22; 
	bool bNormalShop; 
	undefined _2[8]; // compressed
	pointer ItemList; 
	undefined _3[20]; // compressed
};

struct D2GameNpcArrayStrc{
	D2GameNpcStrc pNpc[64]; 
};

struct D2GameNpcControlStrc{
	int nNpcCount; 
	D2GameNpcArrayStrc* pNpc; 
	D2SeedStrc sSeed; 
	undefined _0[4]; // compressed
};

struct D2ArenaControlStrc{
	enum eD2LevelId eLevelId; 
	undefined4 field_0x4; 
	enum eD2ArenaFlags eArenaFlags; 
	int nTemplate; /* Created by retype action*/
};

struct D2GameStrc{
	pointer field_0x0; /* probably pGameTbl, passed from D2Client or D2Server...*/
	int field_0x4; /* seed from the D2Client Game Marshal iirc*/
	undefined4 _0[4]; // compressed
	LPCRITICAL_SECTION lpCriticalSection; 
	D2PoolManagerStrc* pMemoryPool; 
	undefined4 _1[2]; // compressed
	WORD nServerToken; 
	char szGameName[16]; 
	char szGamePassword[16]; 
	char szGameDescription[32]; 
	enum eD2HostGameType nGameType; 
	undefined1 _2[2]; // compressed
	byte nDifficulty; 
	undefined1 _3[2]; // compressed
	BOOL bExpansion; 
	enum eD2GSGameType eGameType; 
	WORD wItemFormat; 
	undefined2 field_0x7a; 
	D2SeedStrc pInitSeed; /* LoSeed set when GameSeed is created, HiSeed set when ObjectRegion is created*/
	BOOL bInitSeed; 
	D2ClientStrc* pClient; /* ptClientLastJoined*/
	int nClientsCount; 
	int dwSpawnedPlayers; 
	int dwSpawnedMonsters; 
	int dwSpawnedObjects; 
	int dwSpawnedMissiles; 
	int dwSpawnedItems; 
	int dwSpawnedTiles; 
	int dwGameFrame; /* Current Frame (FrameCounter)*/
	int dwCycleLastSecond; 
	int dwCycleCount; 
	int dwTickCount; 
	D2EventControlStrc* pEventControl; 
	D2DrlgActStrc* pAct[5]; 
	D2SeedStrc pGameSeed; 
	D2InactiveUnitListStrc* pInactiveUnitList[5]; 
	dword dwMonSeed; 
	D2MonsterRegionStrc* pMonsterRegion[1024]; 
	void* pObjectControl; 
	D2QuestControlStrc* pQuestControl; 
	D2UnitNodeStrc* pUnitNodes[10]; 
	D2UnitStrc* pUnitList[5][128]; 
	D2UnitStrc* pWarpTileList; 
	DWORD fUniqueSpawn[128]; 
	D2GameNpcControlStrc* pNpcControl; 
	D2ArenaControlStrc* pArenaCtrl; 
	void* pPartyControl; 
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
	D2GameStrc* pPrev; 
	D2GameStrc* pNext; 
	int dwException; /* has for exceptions 1 = NULL deref, 2 = 0xC0000001 deref, 3 = Assert with blank Msg, 4 = Alloc 1.7Gb of Mem(lol)*/
	int _4[2]; // compressed
	int nUberRelated1; 
	int nUberRelated2; 
	int nUberRelated3; 
};

struct D2PacketListStrc{
	int nSize; 
	char pBytes[80]; 
};

struct D2ClientHotKeyStrc{
	undefined _0[8]; // compressed
};

/* Used to send the server packet 0x18, 0x95, */
struct D2PlayerBasicsData{
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

struct D2ClientStrc{
	int nClientNo; 
	int ConnectionState; 
	byte nClass; 
	undefined1 field_0x9; 
	short fFileFlags; /* nLevelExpLayer*/
	byte nCharTemplate; 
	char szCharName[16]; 
	char szAccName[64]; 
	byte nPad[3]; 
	pointer pClientContainer; 
	undefined1 _0[4]; // compressed
	void* pRealm; 
	int nStartSkill; 
	int _1[2]; // compressed
	int dwMapSeed; 
	undefined1 _2[240]; // compressed
	int nPlayerType; 
	int dwPlayerGUID; 
	D2UnitPlayer* pPlayer; 
	int dwSave; 
	pointer pSaveGame; 
	size_t nSaveOpenSize; 
	size_t nSaveCurrentSize; 
	size_t nFileSize; 
	void* pSavePacketList; 
	int _3[2]; // compressed
	int nAttachedUnitType; 
	int dwAttachedUnitGUID; 
	int _4[2]; // compressed
	D2GameStrc* pGame; 
	int nAct; 
	int dwRoomTicker; 
	D2RoomStrc* pRoom; 
	D2PacketListStrc* pDispatchList; /* D2PacketListStrc**/
	D2PacketListStrc* pPacketList; /* D2PacketListStrc**/
	D2PacketListStrc* pEmpty; /* D2PacketListStrc**/
	int dwPacketsInListMaybe; 
	int _5[15]; // compressed
	pointer pDispatchListEx; /* D2PacketListStrc**/
	int _6[110]; // compressed
	int dwLastWarpFrame[5]; 
	int fClientFlags; 
	int dwTimeOut; 
	D2ClientHotKeyStrc pHotKeys[16]; 
	bool bWeaponSwap; 
	bool bUnused; 
	short wGuildFlags; 
	char szGuildTag[4]; 
	char szGuildName[28]; 
	byte nGuildInfo[3]; 
	byte field_0x483; 
	int dwGolemGUID; 
	int dwCreateTime; 
	D2PlayerBasicsData* pUnknownStruct; /* seconds*/
	short wCurrentLife; 
	short wCurrentMana; 
	short wCurrentStamina; 
	byte nLifePotionPercent; 
	byte nManaPotionPercent; 
	short wXpos; 
	short wYpos; 
	short wTargetXOffset; /* send by packets 0x96, 0x95, 0x18 (last arg) its converted to BYTE*/
	short wTargetYOffset; /* send by packets 0x96, 0x95, 0x18 (last arg) its converted to BYTE*/
	int dwPlayerGold; /* gold carried by the player*/
	int dwCurrentExp; 
	D2ClientStrc* pNext; 
	D2ClientStrc* pServerNext; 
	D2ClientStrc* pNextInListByName; 
	undefined1 _7[76]; // compressed
	int dwHeartbeatTick; 
	int nExpLoss; 
	int nExp; 
	int dwLangId; 
	int _8[2]; // compressed
};

struct D2UnitDataPlayerStrc{
	char* pCharName; 
	D2SeedStrc qwSeed; 
	D2BitBufferStrc* pQuestRecordPool1; 
	D2BitBufferStrc* pQuestRecordPool2; 
	D2BitBufferStrc* pQuestRecordPool3; 
	D2BitBufferStrc* pQuestRecordPool4; 
	D2WaypointStrc* pWaypoint1; 
	D2WaypointStrc* pWaypoint2; 
	D2WaypointStrc* pWaypoint3; 
	D2WaypointStrc* pWaypoint4; 
	int nPortalFlags; 
	undefined4 field_0x30; 
	D2UnitDataPlayerArenaStrc* pArena; 
	void* pPlayerList; 
	undefined4 _0[2]; // compressed
	D2UnitDataPlayerPetsStrc* pPets; 
	undefined4 _1[6]; // compressed
	D2UnitDataPlayerInteractedNPCStrc* pInteractedNPCs[3]; 
	int nInteractedNPCsRelated; 
	enum eD2Skills eRightSkillId; 
	enum eD2Skills eLeftSkillId; 
	int nRightSkillOwnerGUID; 
	int nLeftSkillOwnerGUID; 
	enum eD2Skills eSwitchRightSkillId; 
	enum eD2Skills eSwitchLeftSkillId; 
	int nSwitchRightSkillOwnerGUID; 
	int nSwitchLeftSkillOwnerGUID; 
	int nWeaponGUID; 
	enum eD2Skills eUnknownSkill; 
	D2PartyDataStrc* pPartyData; 
	D2ClientStrc* pClient; 
	undefined4 _2[51]; // compressed
};

struct D2MonStatsTxtTC{
	short TreasureClass1; 
	short TreasureClass2; 
	short TreasureClass3; 
	short TreasureClass4; 
};

struct D2MonStatsTxt{
	ushort Id; 
	short BaseId; 
	short NextInClass; 
	ushort NameStr; 
	ushort DescStr; 
	undefined _0[2]; // compressed
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
	short nMonEquipId; /* Created by retype action*/
	char PartyMin; 
	char PartyMax; 
	char Rarity; 
	char MinGrp; 
	char MaxGrp; 
	char sparsePopulate; 
	short Velocity; 
	short Run; 
	undefined _1[4]; // compressed
	short MissA1; 
	short MissA2; 
	short MissS1; 
	short MissS2; 
	short MissS3; 
	short MissS4; 
	short MissC; 
	short MissSQ; 
	undefined _2[2]; // compressed
	char Align; 
	char TransLvl; 
	char threat; 
	char aidel; 
	char aidelNight; 
	char aidelHell; 
	char aidist; 
	char aidistNight; 
	char aidistHell; 
	undefined field_0x55; 
	short aip1; 
	short aip1Night; 
	short aip1Hell; 
	short aip2; 
	short aip2Night; 
	short aip2Hell; 
	short aip3; 
	short aip3Night; 
	short aip3Hell; 
	short aip4; 
	short aip4Night; 
	short aip4Hell; 
	short aip5; 
	short aip5Night; 
	short aip5Hell; 
	short aip6; 
	short aip6Night; 
	short aip6Hell; 
	short aip7; 
	short aip7Night; 
	short aip7Hell; 
	short aip8; 
	short aip8Night; 
	short aip8Hell; 
	D2MonStatsTxtTC TreasureClass[3]; 
	char TCQuestId; 
	char TCQuestCP; 
	char Drain; 
	char DrainNight; 
	char DrainHell; 
	char ToBlock; 
	char ToBlockNight; 
	char ToBlockHell; 
	char Crit; 
	undefined field_0xa7; 
	short SkillDamage; 
	short Level; 
	short LevelNight; 
	short LevelHell; 
	short MinHP; 
	short MinHPNight; 
	short MinHPHell; 
	short MaxHP; 
	short MaxHPNight; 
	short MaxHPHell; 
	short AC; 
	short ACNight; 
	short ACHell; 
	short A1TH; 
	short A1THNight; 
	short A1THHell; 
	short A2TH; 
	short A2THNight; 
	short A2THHell; 
	short S1TH; 
	short S1THNight; 
	short S1THHell; 
	short Exp; 
	short ExpNighbt; 
	short ExpHell; 
	short A1MinD; 
	short A1MinDNight; 
	short A1MinDHell; 
	short A1MaxD; 
	short A1MaxDNight; 
	short A1MaxDHell; 
	short A2MinD; 
	short A2MinDNight; 
	short A2MinDHell; 
	short A2MaxD; 
	short A2MaxDNight; 
	short A2MaxDHell; 
	short S1MinD; 
	short S1MinDNIght; 
	short S1MinDHell; 
	short S1MaxD; 
	short S1MaxDNight; 
	short S1MaxDHell; 
	char El1Mode; 
	char El2Mode; 
	char El3Mode; 
	char El1Type; 
	char El2Type; 
	char El3Type; 
	char El1Pct; 
	char El1PctNight; 
	char El1PctHell; 
	char El2Pct; 
	char El2PctNight; 
	char El2PctHell; 
	char El3Pct; 
	char El3PctNight; 
	char El3PctHell; 
	undefined field_0x10d; 
	short El1MinD; 
	short El1MinDNight; 
	short El1MinDHell; 
	short El2MinD; 
	short El2MinDNight; 
	short El2MinDHell; 
	short El3MinD; 
	short El3MinDNight; 
	short El3MinDHell; 
	short El1MaxD; 
	short El1MaxDNight; 
	short El1MaxDHell; 
	short El2MaxD; 
	short El2MaxDNight; 
	short El2MaxDHell; 
	short El3MaxD; 
	short El3MaxDNight; 
	short El3MaxDHell; 
	short El1Dur; 
	short El1DurNight; 
	short El1DurHell; 
	short El2Dur; 
	short El2DurNight; 
	short El2DurHell; 
	short El3Dur; 
	short El3DurNight; 
	short El3DurHell; 
	short ResDm; 
	short ResDmNight; 
	short ResDmHell; 
	short ResMa; 
	short ResMaNight; 
	short ResMaHell; 
	short ResFi; 
	short ResFiNight; 
	short ResFiHell; 
	short ResLi; 
	short ResLinight; 
	short ResLiHell; 
	short ResCo; 
	short ResCoNight; 
	short ResCoHell; 
	short ResPo; 
	short ResPoNight; 
	short ResPoHell; 
	char ColdEffect; 
	char ColdEffectNight; 
	short ColdEffectHell; 
	uint SendSkills; 
	short Skill1; 
	short Skill2; 
	short Skill3; 
	short Skill4; 
	short Skill5; 
	short Skill6; 
	short Skill7; 
	short Skill8; 
	char field_unknown_delayRelated[8]; /* Created by retype action*/
	undefined _3[16]; // compressed
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

struct D2MonsterDataComponents{
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

struct D2MonStats2Txt{
	short Id; 
	undefined _0[2]; // compressed
	int noGfxHitTest:1; 
	int noMap:1; 
	int noOvly:1; 
	int isSel:1; 
	int alSel:1; 
	int noSel:1; 
	int shiftSel:1; 
	int corpseSel:1; 
	int revive:1; 
	int isAtt:1; 
	int isSmall:1; 
	int large:1; 
	int soft:1; 
	int critter:1; 
	int shadow:1; 
	int noUniqueShift:1; 
	int compositeDeath:1; 
	int inert:1; 
	int objCol:1; 
	int deadCol:1; 
	int unflatDead:1; 
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
	undefined _1[215]; // compressed
	char TotalPieces; 
	undefined _2[71]; // compressed
};

struct D2AiParamStrc{
	D2MonsterAiGeneralStrc* pMonsterAiGeneral; 
	callback_void4fpAiFunction * fpAiFunction; 
	D2UnitStrc* pTarget; 
	int _0[2]; // compressed
	int nDistanceToTarget; 
	BOOL bEngagedInCombat; 
	D2MonStatsTxt* pMonStats; 
	D2MonStats2Txt* pMonStats2; 
};

struct D2MonsterAiCmdStrc{
	D2MonsterAiCmdStrc* pNext; 
	D2MonsterAiCmdStrc* pPrev; 
	int nCmdArg[5]; 
};

struct D2MonsterDataMinionList{
	int nMinionGUID; 
	D2MonsterDataMinionList* pNext; 
};

struct D2MonsterAiGeneralStrc{
	int nFunctionId; 
	callback_void8fpFunction * fpFunction; 
	int nAiFlags; 
	int nOwnerGUID; 
	enum eD2UnitType eOwnerType; 
	int dwArg0; 
	int dwArg1; /* Created by retype action*/
	int dwArg2; /* Created by retype action*/
	D2MonsterAiCmdStrc* pCmdCurrent; 
	D2MonsterAiCmdStrc* pCmdLast; 
	D2GameStrc* pGame; 
	int nOwnerGUIDEx; 
	enum eD2UnitType eOwnerTypeEx; 
	D2MonsterDataMinionList* pMinionList; 
	undefined _0[4]; // compressed
	int nGenericSpawnerSpecific; 
};

struct D2MonsterModeStrc{
	undefined _0[24]; // compressed
	int _1[2]; // compressed
	byte field_0x20; 
	undefined _2[3]; // compressed
};

struct D2MonsterAiStrc{
	undefined _0[4]; // compressed
};

struct D2UnitDataMonsterStrc{
	D2MonStatsTxt* pMonStatsTxt; 
	D2MonsterDataComponents Components; 
	short nNameSeed; 
	enum D2MonsterDataMonType eMonType; 
	byte eLastMode; 
	int nDuriel; 
	byte MonUModList[9]; 
	undefined field_0x25; 
	short nBossNo; 
	D2MonsterAiGeneralStrc* pMonsterAiGeneral; 
	D2MonsterModeStrc* pMonsterMode; 
	D2MonsterAiStrc* pMonsterAi; 
	undefined4 _0[3]; // compressed
	int nNecroPet; 
	undefined4 _1[3]; // compressed
	pointer pVision; 
	int nAiState; 
	enum eD2LevelId eD2LevelId; 
	int nSummonerFlags; 
};

struct D2ObjectsTxt{
	char Name[64]; 
	WCHAR NameWideString[64]; 
	char Token[2]; 
	undefined field_0xc2; 
	char SpawnMax; 
	bool Selectable[8]; 
	char TrapProb; 
	undefined _0[3]; // compressed
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
	undefined _1[2]; // compressed
	char nTgtFX; 
	char nTgtFY; 
	char nTgtBX; 
	char nTgtBY; 
	char Damage; 
	bool CollisionSubst; 
	undefined _2[2]; // compressed
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
	undefined _3[3]; // compressed
	int AutoMap; 
};

struct D2ShrinesTxt{
	byte Code; 
	undefined _0[3]; // compressed
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

struct D2UnitDataObjectStrc{
	D2ObjectsTxt* pTxtObjectsLine; 
	byte nShrineId; 
	byte nPortalFlags; 
	undefined _0[2]; // compressed
	D2ShrinesTxt* pTxtShrinesLine; 
	undefined _1[44]; // compressed
};

struct D2CoordsShort{
	short nX; 
	short nY; 
};

struct D2UnitDataMissileStrc{
	undefined4 _0[2]; // compressed
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
	D2CoordsShort sCoords; 
	undefined _1[4]; // compressed
};

struct D2UnitDataItemStrc{
	enum eD2ItemQuality eD2ItemQuality; 
	D2SeedStrc sSeed; 
	int nPlayerGUID; 
	int nModSeed; 
	enum eD2ItemCmd eD2ItemCmd; 
	enum eD2ItemFlag eD2ItemFlag; 
	int _0[2]; // compressed
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
	enum EInventoryPage ePage; 
	undefined1 eExchangePage; 
	undefined1 ePreviousPage; 
	byte nEarLevel; 
	bool bVariant; 
	char szPlayerName[16]; 
	short wRuneWordIndex; 
	D2InventoryStrc* pInventory; 
	D2UnitStrc* pPrevItem; 
	D2UnitStrc* pNextItem; 
	enum eD2InventoryGrid eD2InventoryGrid; 
	enum eD2InventoryGridType eD2InventoryGridType; 
	undefined _1[2]; // compressed
	D2UnitStrc* pPrevItemInPage; 
	D2UnitStrc* pNextItemInPage; 
};

union D2UnitDataUnion{
	D2UnitDataPlayerStrc* pUnitDataPlayer; 
	D2UnitDataMonsterStrc* pUnitDataMonster; 
	D2UnitDataObjectStrc* pUnitDataObject; 
	D2UnitDataMissileStrc* pUnitDataMissile; 
	D2UnitDataItemStrc* pUnitDataItem; 
};

/* Used for ITEM, OBJECT, */
struct D2StaticPathStrc{
	D2RoomStrc* pRoom; 
	int nTargetX; 
	int nTargetY; 
	int nPosX; 
	int nPosY; 
	int nUnkX; 
	int nUnkY; 
	byte nDirection; 
};

struct D2DynamicPathCoordsStrc{
	short nOffsetX; 
	short nPosX; 
	short nOffsetY; 
	short nPosY; 
};

union D2DynamicPathCoordsUnion{
	D2DynamicPathCoordsStrc field0; 
	POINT field1; 
};

struct D2PathPointStrc{
	short nX; 
	short nY; 
};

struct D2DynamicPathStrc{
	D2DynamicPathCoordsUnion Coords; 
	POINT Target; 
	short xSP1; 
	short ySP1; 
	short xSP2; 
	short ySP2; 
	short xSP3; 
	short ySP3; 
	D2RoomStrc* pRoom; 
	D2RoomStrc* pRoomNext; 
	int field_0x24; 
	int dwPathPoints; 
	void* field_0x2c; 
	D2UnitStrc* pOwner; 
	int nFlags; /* Created by retype action*/
	int field_0x38; 
	enum eD2PathTypes ePathType; 
	enum eD2PathTypes dwPrevPathType; 
	int dwUnitSize; /* Created by retype action*/
	int dwCollisionPattern; /* Created by retype action*/
	int eCollisionFlag; /* Cast To eCollisionFlags*/
	int field_0x50; 
	short _0[2]; // compressed
	D2UnitStrc* pTargetUnit; /* Created by retype action*/
	enum eD2UnitType eTargetType; 
	int nTargetGUID; 
	byte nDirection; /* Created by retype action*/
	byte nNewDirection; 
	byte nDiffDirection; 
	byte _1[11]; // compressed
	int _2[2]; // compressed
	char field_0x7a[2]; 
	int dwVelocity; 
	int field_0x80; 
	int dwVelocity2; 
	int _3[2]; // compressed
	byte nDist; 
	byte nDistMax; 
	byte field_0x92; 
	byte nStepNum; 
	byte nDistance; 
	byte _4[3]; // compressed
	D2PathPointStrc PathPoints[7]; 
	int _5[73]; // compressed
	D2PathPointStrc pInitCoords; 
	int _6[9]; // compressed
};

union D2PathUnion{
	D2StaticPathStrc* pStaticPath; /* Used for ITEM, OBJECT, WARP*/
	D2DynamicPathStrc* pDynamicPath; /* Used for PLAYER, MONSTER, MISSILE*/
};

struct D2AnimSeqStrc{
	int field_0x0; 
};

struct D2AnimDataRecordStrc{
	char szAnimDataName[8]; 
	int nFrames; 
	int nAnimSpeed; 
	byte pFrameFlags[144]; 
};

struct D2AnimDataStrc{
	D2AnimDataRecordStrc* pRecords; 
	D2AnimDataRecordStrc* pHashTable[256]; 
	D2AnimDataRecordStrc pDefaultRecord; 
};

struct D2StatInfoStrc{
	short wSubIndex; 
	short wStatIndex; 
	int nStatValue; 
};

struct D2StatListStrc{
	D2PoolManagerStrc* pMemory; 
	D2UnitStrc* pUnitAttached; 
	enum eD2UnitType eOwnerType; 
	int nOwnerGUID; 
	enum eD2StatListFlags nFlags; 
	enum eD2States eState; 
	int nTimeout; 
	enum eD2Skills eSkill; 
	int nSkillLevel; 
	D2StatInfoStrc sStatInfo; 
	D2StatListExStrc* pPrevLink; 
	D2StatListExStrc* pNextLink; 
	D2StatListExStrc* pParent; 
	pointer fpExpire; 
};

struct D2StateFlags{
	int nStateBitFlags[6]; 
	undefined _0[24]; // compressed
};

struct D2StatListExStrc{
	D2StatListStrc sStatList; 
	D2StatListExStrc* pActive; 
	D2StatListExStrc* pInactive; 
	D2UnitStrc* pOwner; 
	D2StatInfoStrc sStatInfo2; 
	D2StatInfoStrc sStatInfo3; 
	D2StateFlags* pStateFlags; 
	pointer fpCallback; 
	D2GameStrc* pGame; 
};

struct D2LightMapStrc{
	enum eD2UnitType eUnitType; 
	DWORD nUnitGUID; 
	BOOL bUnknown; 
	int nLightType; 
	int _0[2]; // compressed
	int nRadiusX; 
	int nRadiusY; 
	int field_0x20; 
	byte nGamma; 
	byte nRed; 
	byte nGreen; 
	byte nBlue; 
	D2LightMapStrc* pPrev; 
	int field_0x2c; 
	int* pSub0x30; 
};

struct D2TimerArgStrc{
	int* field_0x0; 
	int nUnitGUID; 
};

struct D2CUnitEventStrc{
	undefined _0[24]; // compressed
	D2CUnitEventStrc* pNext; /* Created by retype action*/
	D2CUnitEventStrc* pPrev; /* Created by retype action*/
};

struct D2SUnitEventStrc{
	int nItemEventId; 
	undefined4 _0[2]; // compressed
	enum eD2Skills eSkill; 
	undefined4 field_0x10; 
	callback_BOOL11fpItemEventFunc * fpItemEventFunc; 
	D2SUnitEventStrc* pNext; 
	D2SUnitEventStrc* pPrev; 
};

union D2UnitEvent{
	D2CUnitEventStrc* pClientEvent; 
	D2SUnitEventStrc* pServerEvent; 
};

struct D2HoverTextStrc{
	int _0[2]; // compressed
	byte nLanguageCode; 
	undefined _1[3]; // compressed
	int field_0xc; 
	char szMessage[256]; 
};

struct D2SkillsTxt{
	short skill; 
	undefined _0[10]; // compressed
	char charclass; 
	undefined _1[3]; // compressed
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
	undefined _2[2]; // compressed
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
	undefined _3[2]; // compressed
	int passivecalc[5]; 
	short passiveevent; 
	short passiveeventfunc; 
	short summon; 
	char pettype; 
	char summode; 
	int petmax; 
	short sumskill[5]; 
	undefined _4[2]; // compressed
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
	short dosounda; 
	short dosoundb; 
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
	undefined _5[2]; // compressed
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
	undefined _6[2]; // compressed
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
	undefined _7[2]; // compressed
	int ToHit; 
	int LevToHit; 
	int ToHitCalc; 
	char HitShift; 
	char SrcDam; 
	undefined _8[2]; // compressed
	int MinDam; 
	int MaxDam; 
	int MinLevDam[5]; 
	int MaxLevDam[5]; 
	int DmgSymPerCalc; 
	enum eSkillEType EType; 
	undefined _9[3]; // compressed
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
	int costmult; 
	int costadd; 
};

struct D2SkillStrc{
	D2SkillsTxt* pRecord; 
	D2SkillStrc* pNext; 
	int nMode; 
	int fFlags; 
	int _0[2]; // compressed
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

struct D2SkillListStrc{
	D2PoolManagerStrc* pMemory; 
	D2SkillStrc* pFirstSkill; 
	D2SkillStrc* pLeftSkill; 
	D2SkillStrc* pRightSkill; 
	D2SkillStrc* pCurrentSkill; 
	D2LightMapStrc* pLight; 
};

struct D2ServerCmdStrc{
	int nBufferArraySize; 
	int nUsedBuffersCount; 
	undefined4 field_0x8; 
	char* aBuffers; 
};

struct D2TimerStrc{
	
};

/* Size is different for each */
struct D2SUnitMsgStrc{
	D2SUnitMsgStrc* pNext; 
	undefined4 nPacketId; 
	byte nArgs[16]; 
};

struct D2UnitStrc{
	enum eD2UnitType eUnitType; 
	int nClassId; /* Created by retype action*/
	D2PoolManagerStrc* pMemory; /* Created by retype action*/
	int nUnitGUID; /* Created by retype action*/
	DWORD nAnimMode; 
	D2UnitDataUnion pUnitData; 
	byte nAct; /* Created by retype action*/
	undefined _0[3]; // compressed
	D2DrlgActStrc* pDrlgAct; 
	D2SeedStrc sSeed; 
	int nInitSeed; 
	D2PathUnion pPath; 
	D2AnimSeqStrc* pAnimSeq; /* to be defined*/
	int nSeqFrameCount; 
	int nSeqFrame; 
	int nSeqAnimSpeed; 
	int nSeqMode; /* Created by retype action*/
	int nGfxCurrentFrame; 
	int nFrameCount; 
	short nAnimSpeed; 
	byte nActionFrame; 
	undefined field_0x4f; 
	D2AnimDataStrc* pAnimData; 
	pointer pGfxInfo; 
	int nOutlineFrame; 
	D2StatListExStrc* pStatsEx; 
	D2InventoryStrc* pInventory; /* Created by retype action*/
	D2LightMapStrc* pLightMap; 
	int nLightRadiusX; 
	undefined _1[2]; // compressed
	short nUpdateType; 
	D2UnitStrc* pUpdateUnit; 
	undefined _2[8]; // compressed
	D2TimerArgStrc* pTimerArg; 
	D2GameStrc* pGame; /* Created by retype action*/
	undefined _3[12]; // compressed
	D2UnitEvent pUnitEvent; 
	enum eD2UnitType eOwnerType; 
	int nOwnerGUID; 
	enum eD2UnitType eKillerType; 
	int nKillerGUID; 
	D2HoverTextStrc* pHoverText; 
	D2SkillListStrc* pSkillsList; 
	pointer pCombat; 
	undefined _4[8]; // compressed
	char* szRewardItemCode; 
	undefined _5[8]; // compressed
	enum eD2UnitFlags eUnitFlags; /* Created by retype action*/
	enum eD2UnitFlagsEx eUnitFlagsEx; /* Created by retype action*/
	undefined _6[4]; // compressed
	int nNodeTableIndex; /* Created by retype action*/
	undefined _7[4]; // compressed
	D2ServerCmdStrc* pServerCmd; 
	D2TimerStrc* pTimer; /* Created by retype action*/
	D2UnitStrc* pUnitNext_0; 
	D2UnitStrc* pUnitNext; 
	D2UnitStrc* pRoomFirstUnit; 
	D2SUnitMsgStrc* SUnitMsgActual; 
	D2SUnitMsgStrc* SUnitMsgQueue; 
	D2UnitPlayer* asPlayer ();
	D2UnitMonster* asMonster ();
	D2UnitMissile* asMissile ();
	D2UnitObject* asObject ();
	D2UnitItem* asItem ();
	D2UnitWarp* asWarp ();
	DPOINT pos ();
	DPOINT pos (DPOINT adjust);
	DPOINT getTargetPos (DPOINT adjust);
};

struct D2CharSelCompStrc{
	uint nFlags; 
	undefined _0[4]; // compressed
	undefined4 field_0x8; 
	uint field_0xc; 
	undefined4 field_0x10; 
	undefined _1[8]; // compressed
	uint field_0x1c; 
	int _2[2]; // compressed
	char _3[4]; // compressed
	undefined _4[12]; // compressed
	undefined4 field_0x38; 
	string field_0x3c[9]; 
	undefined _5[24]; // compressed
	undefined4 field_0x78; 
	undefined _6[60]; // compressed
	int* field_0xb8; 
	undefined _7[8]; // compressed
	undefined* field_0xc4; 
	undefined4 field_0xc8; 
	undefined _8[360]; // compressed
};

struct D2CharSelStrc{
	CHAR field_0x0[256]; 
	WCHAR field_0x100[256]; 
	char szUnk1[16]; 
	char szUnk2[16]; 
	bool field_0x320; 
	undefined field_0x321; 
	undefined2 _0[4]; // compressed
	undefined _1[10]; // compressed
	int field_0x334; 
	D2CharSelCompStrc* pCharSelCompStrc; 
	undefined _2[16]; // compressed
	D2CharSelStrc* pNext; 
};

struct D2QServerClientPacketStrc{
	size_t nPacketSize; 
	D2QServerClientPacketStrc* pQServerClientPacketNext; 
	char pBytes; 
};

struct D2QServerClientStrc{
	undefined _0[4]; // compressed
	D2QServerClientStrc* ptNextClient; /* Created by retype action*/
	int nInterlockedInrement; /* Created by retype action*/
	undefined _1[20]; // compressed
	undefined1 nToken; /* Created by retype action*/
	undefined _2[11]; // compressed
	LPCRITICAL_SECTION ClientCriticalSection; /* Created by retype action*/
	undefined _3[68]; // compressed
	D2QServerClientPacketStrc* pQServerClientPacket; /* Created by retype action*/
	undefined _4[172]; // compressed
};

struct D2QServerClientListStrc{
	D2QServerClientStrc* pQServerClient[16]; 
};

struct D2QServerStrc{
	undefined4 field_0x0; 
	int clientsCount; /* Created by retype action*/
	undefined4 _0[3]; // compressed
	D2QServerClientListStrc* pQServerClientList; /* Created by retype action*/
	undefined4 _1[14]; // compressed
	LPCRITICAL_SECTION CriticalCreatingGame; 
	undefined4 _2[176]; // compressed
	undefined _3[1332]; // compressed
	int nCounterIndex; 
	undefined _4[8]; // compressed
	LPCRITICAL_SECTION lpCriticalSection; /* Created by retype action*/
	undefined _5[20]; // compressed
	enum eD2GSConnectionType eD2GSConnectionType; 
	undefined _6[20]; // compressed
	BOOL nPlayersCount; /* Created by retype action*/
	undefined _7[776]; // compressed
	SOCKET Socket1; 
	undefined _8[12]; // compressed
	u_short Socket1Port; /* Created by retype action*/
	undefined _9[6]; // compressed
	undefined4 _10[2]; // compressed
	undefined _11[20]; // compressed
	undefined4 send0xAFFunc; 
	undefined4 _12[2]; // compressed
	BOOL bUseQServerHack; 
	HANDLE hEmptyEvent; 
	HANDLE hThreadHandle; /* Created by retype action*/
	undefined4 _13[3]; // compressed
	DWORD dwThreadId; 
	undefined4 _14[2]; // compressed
	undefined _15[88]; // compressed
};

struct D2CharSelSaveDataStrc{
	WORD wFlags; 
	undefined _0[254]; // compressed
};

struct D2UnknownSequence{
	pointer _0[4]; // compressed
	pointer someConnectToBnetHandler; 
	pointer _1[8]; // compressed
	callback_void30fpSID_StartAdVex3 * fpSID_StartAdVex3; 
	pointer _2[5]; // compressed
	pointer checkRevisionMaybe; 
	pointer _3[3]; // compressed
	pointer verByte; 
	pointer _4[30]; // compressed
};

struct D2IniConfigStrc{
	char bD2ExpMpqExistsOrLanugageCode[4]; 
	BOOL bCRASHAPP; 
	bool bWINDOW; 
	bool bASPECT; 
	bool b3DFX; 
	bool bOPENGL; 
	bool bRAVE; 
	bool bD3D; 
	bool bPERSPECTIVE; 
	bool bQUALITY; 
	int nGAMMA; 
	bool bVSYNC; 
	int nFRAMERATE; 
	enum eD2GSGameType nGAMETYPE; 
	short nJOINID; 
	char szGAMENAME[24]; 
	char szSERVERIP[24]; 
	char szBATTLENETIP[24]; 
	char szMCPIP[24]; 
	undefined _0[4]; // compressed
	bool bNOPK; 
	bool bOPENC; 
	bool bAMAZON; 
	bool bPALADIN; 
	bool bSORCERESS; 
	bool bNECROMANCER; 
	bool bBARBARIAN; 
	bool bDRUID; 
	bool bASSASSIN; 
	bool bINVINCIBLE; 
	undefined _1[48]; // compressed
	char szNAME[24]; 
	char szREALM[24]; 
	D2CharSelSaveDataStrc CharSelSaveDataStrc; 
	char nCTEMP; 
	enum eD2PlayerClassID eCTEMP_eD2PlayerClassID; 
	enum eD2PlayerStatus eCTEMP_eD2PlayerStatus; 
	bool bNOMONSTERS; 
	int nMONSTERCLASS; 
	bool bMONSTERINFO; 
	int nMONSTERDEBUG; 
	bool bRARE; 
	bool bUNIQUE; 
	undefined _2[2]; // compressed
	int nACT; 
	bool bNOPREDLOAD; 
	bool bDIRECT; 
	bool bLOWEND; 
	bool bNOCOMPRESS; 
	undefined _3[2]; // compressed
	enum eD2ArenaFlags eArenaFlags; 
	undefined _4[3]; // compressed
	undefined1 dificulty; /* Created by retype action*/
	pointer* bTrue; /* ptr to function that returns true?*/
	bool bTXT; 
	bool bLOG; 
	bool bMSGLOG; 
	bool bSAFEMODE; 
	bool bNOSAVE; 
	int nSEED; 
	bool bCHEATS; 
	bool bTEEN; 
	bool bNOSOUND; 
	bool bQuEsTs; 
	undefined field_0x222; 
	bool bBUILD; 
	bool bSOUNDBKG; 
	D2UnknownSequence* pUnknownSequence; 
	undefined _5[4]; // compressed
	char bGameIsSinglePlayerMaybe[24]; 
	char szGamePassword[24]; /* Created by retype action*/
	char szGameDescription[256]; /* Created by retype action*/
	bool bSKIPTOBNET; 
	byte nScreenToShow; /* Created by retype action*/
	undefined _6[108]; // compressed
	enum eD2PlayerStatus eD2PlayerStatus; 
};

struct DC6Block{
	int nFlip; 
	int nWidth; 
	int nHeight; 
	int nOffsetX; 
	int nOffsetY; 
	int nAllocSize; 
	int nNextBlock; 
	int nLength; 
	char data[1]; /*variable size*/
};

struct DC6{
	int nVersion; 
	int nFlags; 
	int nFormat; 
	char nTerm[4]; 
	int nDirections; 
	int nFrames; 
	DC6Block* pBlocks[1]; /*variable size*/
};

struct D2ControlMsg{
	D2ControlStrc* pControl; 
	int uMsg; 
	WPARAM wParam; 
};

struct D2ControlStrc{
	enum eD2FormType eD2FormType; 
	DC6* pDC6; 
	int dwState; 
	int dwPosX; 
	int dwPosY; 
	int dwSizeX; 
	int dwSizeY; 
	callback_BOOL100fpDraw * fpDraw; 
	callback_BOOL101fpDrawEx * fpDrawEx; 
	callback_BOOL102fpPush * fpPush; 
	callback_BOOL103fpMouse * fpMouse; 
	callback_BOOL104fpListCheck * fpListCheck; 
	callback_BOOL105fpKey * fpKey; 
	callback_BOOL106fpOnPress * fpOnPress; 
	callback_BOOL107fpDrawAnim * fpDrawAnim; 
	D2ControlStrc* pNext; 
};

struct FORMS_PredefinedFormStrc{
	enum eD2FormType eD2FormType; 
	int aParams[4]; 
	undefined4 field_0x14; 
	int nLabelAsLocaleStringId; 
	DC6* pDC6; 
	callback_BOOL108fpOnPressCallback * fpOnPressCallback; 
	undefined4 _0[3]; // compressed
};

struct D2BoundingBoxStrc{
	int nLeft; 
	int nBottom; 
	int nRight; 
	int nTop; 
};

}; // ghidra namespace