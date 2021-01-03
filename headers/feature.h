#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#include <windows.h>
#include <vector>
#include <string>
#include <unordered_map>
#include <functional>
#include <sstream>
#include "utilities.h"
#include "headers/ghidra.h"

struct FlyingText {
	D2::Types::LivingUnit* unit;
	ULONGLONG counter;
	char color;
	int value;
	DWORD font = 4;
	DPOINT pos{ 0, 0 };
	DPOINT delta{ 0, 0 };

	FlyingText(D2::Types::LivingUnit* unit, int value, char color);
};

extern std::vector<FlyingText> FlyingTexts;

typedef std::wstringstream& InputStream;
typedef std::function<BOOL(std::wstring, InputStream)> InputCallback;
typedef std::unordered_map<std::wstring, InputCallback> InputCallbackMap;
typedef InputCallbackMap::iterator InputMapIterator;
typedef std::pair<std::wstring, InputCallback> InputCallbackPair;

// A hotkey is like a command
typedef std::function<BOOL(LPARAM lParam)> HotkeyCallback;
typedef std::unordered_map<int, HotkeyCallback> HotkeyCallbackMap;
typedef HotkeyCallbackMap::iterator HotkeyMapIterator;

typedef std::function<std::wstring()> AutomapInfoCallback;
typedef std::vector<AutomapInfoCallback> AutomapInfoCallbackList;

class Feature {
public:
	Feature* next;
	std::vector<std::string> mpq;
	Feature();
	~Feature();
	virtual void init();
	virtual void postInit();
	virtual void deinit();
	virtual void gameLoop();
	virtual void oogLoop();
	virtual void gameServerLoop(D2::Types::IncompleteGameData* pGame);
	virtual bool windowMessage(HWND, UINT, WPARAM, LPARAM);
	virtual bool keyEvent(DWORD, bool, DWORD);
	virtual bool chatInput(InputStream);
	virtual void gameUnitPreDraw();
	virtual void gameUnitPostDraw();
	virtual void gameAutomapPreDraw();
	virtual void gameAutomapPostDraw();
	virtual void gamePostDraw();
	virtual void oogPostDraw();
	virtual void allPostDraw();
	virtual void allFinalDraw();
	virtual void preDraw();
	virtual void roomInit(D2::Types::IncompleteGameData* pGame, D2::Types::Room1* pRoom1);
	virtual void serverExpAward(DWORD exp, Ghidra::D2UnitStrc* pUnit, Ghidra::D2GameStrc* pGame);
	virtual void valueFromServer(D2::Types::LivingUnit* unit, int value, char color);
};

extern Feature* Features;

typedef std::unordered_map<std::string, DWORD> StateMap;

extern HotkeyCallbackMap HotkeyCallbacks;
extern AutomapInfoCallbackList AutomapInfoHooks;
extern InputCallbackMap ChatInputCallbacks;
extern StateMap State;
extern StateMap Settings;
void LoadSettings();
void SaveSettings();

namespace DebugMode {
	enum DebugModeTypes {
		NORMAL = 0,
		DARK = 1,
		HIDDEN = 2,
	};
}
