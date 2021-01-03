#define _USE_MATH_DEFINES

#include "headers/feature.h"
#include "headers/hook.h"
#include "headers/remote.h"
#include "headers/CustomPacket.h"
#include <vector>
#include <cmath>

const DPOINT popupoffset{ -1, -1 };
const double popupSpreadArc = 60.0, flyspeed = 120.0, flyduration = 0.6, timescale = 1 / flyduration, gravityAccel = -flyspeed * flyduration;
const double popupArcStart = M_PI * (180.0 - popupSpreadArc) / 360.0, popupArcEnd = M_PI * (180.0 + popupSpreadArc) / 360.0;

FlyingText::FlyingText(D2::Types::LivingUnit* unit, int value, char color) {
    this->unit = unit;
    this->color = color;
    this->value = value;
    this->counter = GetTickCount64();
    double angle = randDoubleInRange(popupArcStart, popupArcEnd);
    this->delta = DPOINT{ cos(angle), sin(angle) };
    this->pos = unit->pos();
}

std::vector<FlyingText> FlyingTexts;

namespace MonsterDrawing {
    class : public Feature {
    public:
        void oogDraw() {
            if (FlyingTexts.size()) {
                FlyingTexts.clear();
            }
        }

        void valueFromServer(D2::Types::LivingUnit* unit, int value, char color) {
            if (Settings["infoPopups"]) {
                FlyingTexts.push_back(FlyingText(unit, value, color));
            }
        }

        void gameUnitPostDraw() {
            for (size_t i = 0; i < FlyingTexts.size(); ++i) {
                FlyingText* current = &FlyingTexts[i];

                double secondsElapsed = (double)(GetTickCount64() - current->counter) / 1000.0;
                double t = secondsElapsed * timescale;
                double ox = current->delta.x * t * flyspeed;
                double oy = current->delta.y * t * flyspeed + t * t * gravityAccel;

                if (secondsElapsed > flyduration) {
                    FlyingTexts.erase(FlyingTexts.begin() + (i--));
                    continue;
                }

                std::wstring numberStr = std::to_wstring(current->value);
                std::wstring symbol = current->value < 0 ? L"-" : L"+";
                std::wstring currentText = symbol + numberStr;
                POINT pos = current->pos.toScreen();

                DWORD fontno = current->font, old = D2::SetFont(fontno), width, height = D2::GetTextSize(currentText.c_str(), &width, &fontno);
                D2::DrawGameText(currentText.c_str(), pos.x + (int)ox - (int)(width / 2), pos.y - (int)oy - (height / 2), current->color, false);
                D2::SetFont(old);
            }
        }
    } feature;

}
