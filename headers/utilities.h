#define _USE_MATH_DEFINES

#pragma once

#include "D2Structs.h"
#include <map>
#include <cmath>

extern DPOINT xvector, yvector;
void DrawRectangle(POINT a, POINT b, DWORD dwColor);
void DrawLine(POINT a, POINT b, DWORD dwColor);
void DrawDot(POINT pos, DWORD dwColor = 30);

namespace Path {
    struct SimplePoint {
        unsigned int x;
        unsigned int y;

        SimplePoint(unsigned int x, unsigned int y) {
            this->x = x;
            this->y = y;
        }

        long double getDistance(const SimplePoint *other);
    };
    std::vector<SimplePoint> *calcPathTo(D2::Types::Level *lvl, unsigned short x, unsigned short y, unsigned short xx, unsigned short yy);
    std::vector<SimplePoint> *calcPathTo(unsigned short x, unsigned short y, unsigned short xx, unsigned short yy);
    std::vector<SimplePoint> *calcPathTo(unsigned short x, unsigned short y);
    std::vector<SimplePoint> *calcPathTo(SimplePoint coord);
}
