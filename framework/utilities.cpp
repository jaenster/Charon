#define _USE_MATH_DEFINES

#include "../headers/D2Structs.h"
#include "../headers/common.h"
#include "../headers/feature.h"
#include "../headers/utilities.h"
#include "../headers/remote.h"
#include <iostream>
#include <cmath>


REMOTEFUNC(void __stdcall, D2Drawline, (int X1, int Y1, int X2, int Y2, DWORD dwColor, DWORD dwAlpha), 0x4F6380)
REMOTEFUNC(void __stdcall, D2DrawRectangle, (int X1, int Y1, int X2, int Y2, DWORD dwColor, DWORD dwAlpha), 0x4F6340)
REMOTEFUNC(long __fastcall, GetMouseXOffset, (), 0x45AFC0)
REMOTEFUNC(long __fastcall, GetMouseYOffset, (), 0x45AFB0)
REMOTEREF(POINT, AutomapOffset, 0x7A5198)
REMOTEREF(int, Divisor, 0x711254)

namespace D2 {
    int ScreenWidth = 0, ScreenHeight = 0;

    namespace Defs {
        typedef POINT p_t;
    }
}

DPOINT xvector = { 16.0, 8.0 }, yvector = { -16.0, 8.0 };

DPOINT::DPOINT(double x, double y) {
    this->x = x;
    this->y = y;
}

DPOINT getPosition(D2::Types::UnitAny* pUnit) {
    if (pUnit->dwType == D2::UnitType::OBJECT || pUnit->dwType == D2::UnitType::ROOMTILE) {
        return { (double)pUnit->pObjectPath->dwPosX, (double)pUnit->pObjectPath->dwPosY };
    }

    if (pUnit->dwType == D2::UnitType::ITEM) {
        return { (double)pUnit->pItemPath->dwPosX, (double)pUnit->pItemPath->dwPosY };
    }

    return { (double)pUnit->pPath->xPos + (double)pUnit->pPath->xOffset / 65536.0, (double)pUnit->pPath->yPos + (double)pUnit->pPath->yOffset / 65536.0 };
}

void DrawRectangle(POINT a, POINT b, DWORD dwColor) {
    if (
        a.x >= 0 && a.x < D2::ScreenWidth ||
        b.x >= 0 && b.x < D2::ScreenWidth ||
        a.y >= 0 && a.y < D2::ScreenHeight ||
        b.y >= 0 && b.y < D2::ScreenHeight
    ) {
        D2DrawRectangle(a.x, a.y, b.x, b.y, dwColor, 0xFF);
    }
}

void DrawLine(POINT a, POINT b, DWORD dwColor) {
    if (
        a.x >= 0 && a.x < D2::ScreenWidth ||
        b.x >= 0 && b.x < D2::ScreenWidth ||
        a.y >= 0 && a.y < D2::ScreenHeight ||
        b.y >= 0 && b.y < D2::ScreenHeight
    ) {
        D2Drawline(a.x, a.y, b.x, b.y, dwColor, 0xFF);
    }
}

void DrawDot(POINT pos, DWORD dwColor) {
    DrawLine({ pos.x - 1, pos.y }, { pos.x + 1, pos.y }, dwColor);
    DrawLine({ pos.x, pos.y - 1 }, { pos.x, pos.y + 1 }, dwColor);
}

DPOINT DPOINT::operator +(const DPOINT& p) {
    return { x + p.x, y + p.y };
}

DPOINT DPOINT::operator -(const DPOINT& p) {
    return { x - p.x, y - p.y };
}

DPOINT DPOINT::operator /(const double d) {
    return { x / d, y / d };
}

double DPOINT::distanceTo(DPOINT target) {
    DPOINT v = target - *this;
    return sqrt(v.x * v.x + v.y + v.y);
}

DPOINT getTargetPosition(D2::Types::UnitAny* pUnit) {
    if (pUnit->dwType == D2::UnitType::OBJECT || pUnit->dwType == D2::UnitType::ITEM) {
        return getPosition(pUnit);
    }

    return { (double)pUnit->pPath->xTarget, (double)pUnit->pPath->yTarget };
}

POINT DPOINT::toScreen(POINT screenadjust) {
    return {
        screenadjust.x + (long)(x * xvector.x + y * yvector.x) - GetMouseXOffset(),
        screenadjust.y + (long)(x * xvector.y + y * yvector.y) - GetMouseYOffset()
    };
}

POINT DPOINT::toAutomap(POINT screenadjust) {
    return {
        screenadjust.x + (long)((x * xvector.x + y * yvector.x) / (double)Divisor) - AutomapOffset.x + 8,
        screenadjust.y + (long)((x * xvector.y + y * yvector.y) / (double)Divisor) - AutomapOffset.y - 8
    };
}

void DPOINT::DrawAutomapX(DWORD dwColor, double size) {
    DrawLine(DPOINT(x - size, y).toAutomap(), DPOINT(x + size, y).toAutomap(), dwColor);
    DrawLine(DPOINT(x, y - size).toAutomap(), DPOINT(x, y + size).toAutomap(), dwColor);
}

void DPOINT::DrawWorldX(DWORD dwColor, double size) {
    DrawLine(DPOINT(x - size, y).toScreen(), DPOINT(x + size, y).toScreen(), dwColor);
    DrawLine(DPOINT(x, y - size).toScreen(), DPOINT(x, y + size).toScreen(), dwColor);
}

void DPOINT::DrawAutomapDot(DWORD dwColor) {
    DrawLine(this->toAutomap({ -1, 0 }), this->toAutomap({ 1, 0 }), dwColor);
    DrawLine(this->toAutomap({ 0, -1 }), this->toAutomap({ 0, 1 }), dwColor);
}

void DPOINT::DrawWorldDot(DWORD dwColor) {
    DrawLine(this->toScreen({ -1, 0 }), this->toScreen({ 1, 0 }), dwColor);
    DrawLine(this->toScreen({ 0, -1 }), this->toScreen({ 0, 1 }), dwColor);
}

namespace D2 {
    namespace Types {

        void UnitAny::DrawAutomapX(DWORD dwColor, double size) { return this->pos().DrawAutomapX(dwColor, size); }
        void UnitAny::DrawWorldX(DWORD dwColor, double size) { return this->pos().DrawWorldX(dwColor, size); }
        void UnitAny::DrawAutomapDot(DWORD dwColor) { return this->pos().DrawAutomapDot(dwColor); }
        void UnitAny::DrawWorldDot(DWORD dwColor) { return this->pos().DrawWorldDot(dwColor); }

        double UnitAny::distanceTo(UnitAny* pTarget) {
            return this->pos().distanceTo(pTarget->pos());
        }

        std::vector<PresetUnit*> Room2::getAllPresetUnits() {
            std::vector<PresetUnit*> ret;

            for (D2::Types::PresetUnit* unit = this->pPreset; unit != NULL; unit = unit->pPresetNext) {
                ret.push_back(unit);
            }

            return ret;
        }

        std::vector<Room1*> Level::getAllRoom1() {
            std::vector<Room1*> ret;

            for (D2::Types::Room2* room = this->pRoom2First; room != NULL; room = room->pRoom2Next) {
                if (room->pRoom1) {
                    ret.push_back(room->pRoom1);
                }
            }

            return ret;
        }

        std::vector<Room2*> Level::getAllRoom2() {
            std::vector<Room2*> ret;

            for (D2::Types::Room2* room = this->pRoom2First; room != NULL; room = room->pRoom2Next) {
                ret.push_back(room);
            }

            return ret;
        }

        DPOINT PresetUnit::pos(Room2* pRoom, DPOINT adjust) {
            return { adjust.x + (double)pRoom->dwPosX * 5 + (double)this->dwPosX, adjust.y + (double)pRoom->dwPosY * 5 + (double)this->dwPosY };
        }

        DPOINT UnitAny::pos(DPOINT adjust) {
            if (this->dwType == 2 || this->dwType == 5) {
                return { adjust.x + (double)this->pObjectPath->dwPosX, adjust.y + (double)this->pObjectPath->dwPosY };
            }

            if (this->dwType == 4) {
                return { adjust.x + (double)this->pItemPath->dwPosX, adjust.y + (double)this->pItemPath->dwPosY };
            }

            return { adjust.x + (double)this->pPath->xPos + (double)this->pPath->xOffset / 65536.0, adjust.y + (double)this->pPath->yPos + (double)this->pPath->yOffset / 65536.0 };
        }

        DPOINT UnitAny::getTargetPos(DPOINT adjust) {
            if (this->dwType == 2 || this->dwType == 4) {
                return this->pos();
            }

            return { (double)this->pPath->xTarget, (double)this->pPath->yTarget };
        }

        Room1* LivingUnit::getRoom1() {
            if (this->pPath && this->pPath->pRoom1) {
                return this->pPath->pRoom1;
            }

            return nullptr;
        }

        Room2* LivingUnit::getRoom2() {
            if (this->pPath && this->pPath->pRoom1 && this->pPath->pRoom1->pRoom2) {
                return this->pPath->pRoom1->pRoom2;
            }

            return nullptr;
        }

        Level* LivingUnit::getLevel() {
            if (this->pPath && this->pPath->pRoom1 && this->pPath->pRoom1->pRoom2 && this->pPath->pRoom1->pRoom2->pLevel) {
                return this->pPath->pRoom1->pRoom2->pLevel;
            }

            return nullptr;
        }

        DWORD LivingUnit::unitHP() {
            return D2::GetUnitStat(this, 6, 0) >> 8;
        }

        bool LivingUnit::isPlayerFriendly() {
            return D2::GetUnitStat(this, 172, 0) == 2;
        }

        bool LivingUnit::isPlayerHostile() {
            return D2::GetUnitStat(this, 172, 0) == 0;
        }

        bool LivingUnit::isAttackable() {
            return this->dwFlags & 0x4;
        }

        bool LivingUnit::isPlayerEnemy() {
            return this->unitHP() > 0 && this->isPlayerHostile() && this->isAttackable();
        }

        WORD CollMap::getCollision(DWORD localx, DWORD localy, WORD mask) {
            return pMapStart[localx + localy * dwSizeGameX] & mask;
        }

        WORD Room1::getCollision(DWORD localx, DWORD localy, WORD mask) {
            return Coll->pMapStart[localx + localy * Coll->dwSizeGameX] & mask;
        }

        WORD Room2::getCollision(DWORD localx, DWORD localy, WORD mask) {
            return pRoom1->Coll->pMapStart[localx + localy * pRoom1->Coll->dwSizeGameX] & mask;
        }

        DWORD Room2::getWorldX() {
            return pRoom1->dwXStart;
        }

        DWORD Room2::getWorldY() {
            return pRoom1->dwYStart;
        }

        DWORD Room2::getWorldWidth() {
            return pRoom1->dwXSize;
        }

        DWORD Room2::getWorldHeight() {
            return pRoom1->dwYSize;
        }

        Coord UnitAny::getCoord() {
            return Coord(GetUnitX(this), GetUnitY(this));
        }

        unsigned char UnitAny::getSizeX() {
            unsigned char result = 0;
            switch(this->dwType) { //TODo; fix for other types
                case D2::UnitType::ITEM:
                    result = GetItemText(this->dwTxtFileNo)->bInvWidth;
                    break;
                case UnitType::PLAYER:
                case UnitType::MONSTER:
                case UnitType::OBJECT:
                case UnitType::MISSILE:
                case UnitType::ROOMTILE:
                    break;
            }
            return result;
        }

        unsigned char UnitAny::getSizeY() {
            unsigned char result = 0;
            switch(this->dwType) { //TODo; fix for other types
                case D2::UnitType::ITEM: // Item
                    result = GetItemText(this->dwTxtFileNo)->bInvWidth;
                    break;
                case UnitType::PLAYER:
                case UnitType::MONSTER:
                case UnitType::OBJECT:
                case UnitType::MISSILE:
                case UnitType::ROOMTILE:
                    break;
            }
            return result;
        }
    }
}
