#define _USE_MATH_DEFINES

#pragma once

#include "D2Structs.h"
#include <map>
#include <cmath>

extern DPOINT xvector, yvector;
void DrawRectangle(POINT a, POINT b, DWORD dwColor);
void DrawLine(POINT a, POINT b, DWORD dwColor);
void DrawDot(POINT pos, DWORD dwColor = 30);
int randIntInRange(int low, int high);
double randDoubleInRange(double low, double high);
