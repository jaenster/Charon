#define _USE_MATH_DEFINES

#pragma once

#include "D2Structs.h"
#include <map>
#include <cmath>

class DPOINT {
public:
    double x, y;
    DPOINT operator +(const DPOINT& p);
    DPOINT operator -(const DPOINT& p);
    DPOINT operator /(const double d);
    double length();
};

extern DPOINT xvector, yvector;
void DrawRectangle(POINT a, POINT b, DWORD dwColor);
void DrawLine(POINT a, POINT b, DWORD dwColor);
POINT WorldToScreen(DPOINT pos);
POINT WorldToScreen(D2::Types::Path* path, DPOINT adjust = { 0, 0 });
POINT WorldToAutomap(DPOINT pos);
POINT WorldToAutomap(D2::Types::Path* path, DPOINT adjust = { 0, 0 });
void DrawDot(POINT pos, DWORD dwColor = 30);
void DrawAutomapX(DPOINT arg, DWORD dwColor = 30, double size = 5);
void DrawWorldX(DPOINT arg, DWORD dwColor = 30, double size = 1);
void DrawAutomapX(D2::Types::ItemPath* arg, DWORD dwColor = 30, double size = 5);
void DrawWorldX(D2::Types::ItemPath* arg, DWORD dwColor = 30, double size = 1);
void DrawAutomapX(D2::Types::Path* arg, DWORD dwColor = 30, double size = 5);
void DrawWorldX(D2::Types::Path* arg, DWORD dwColor = 30, double size = 1);
template <int len> void DrawAutomapShape(DPOINT points[len], DWORD dwColor = 30);
template <int len> void DrawWorldShape(DPOINT points[len], DWORD dwColor = 30);
void DrawAutomapRadialShape(DPOINT center, int radius, int sides, DWORD dwColor = 30, double angle = 0);
void DrawAutomapRadialShape(DPOINT center, int radius, int sides, DWORD dwColor, DPOINT target);
void DrawWorldRadialShape(DPOINT center, int radius, int sides, DWORD dwColor = 30, double angle = 0);
void DrawWorldRadialShape(DPOINT center, int radius, int sides, DWORD dwColor, DPOINT target);
DWORD unitHP(D2::Types::UnitAny* unit);
bool isFriendly(D2::Types::UnitAny* unit);
bool isHostile(D2::Types::UnitAny* unit);
bool isAttackable(D2::Types::UnitAny* unit);
bool isEnemy(D2::Types::UnitAny* unit);
DPOINT getPosition(D2::Types::UnitAny* pUnit);
void forUnits(int type, std::function<void(D2::Types::UnitAny* pUnit)> callback, D2::Types::UnitHashTable* tables = nullptr);
std::vector<D2::Types::UnitAny*> getUnits(int type, D2::Types::UnitHashTable* tables = nullptr, std::function<bool(D2::Types::UnitAny* pUnit)> filterCallback = [](D2::Types::UnitAny*) -> bool { return true; });
void forUnitsInRange(int type, DPOINT source, double radius, std::function<void(D2::Types::UnitAny* pUnit)> callback, D2::Types::UnitHashTable* tables = nullptr);
std::vector<D2::Types::UnitAny*> getUnitsInRange(int type, DPOINT source, double radius, D2::Types::UnitHashTable* tables = nullptr, std::function<bool(D2::Types::UnitAny* pUnit)> filterCallback = [](D2::Types::UnitAny*) -> bool { return true; });