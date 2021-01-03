#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/CustomPacket.h"

CustomPacketServerSide<FlyingTextPacket>* FlyingTextPacketHandler;

void __fastcall D2ClientIncoming0x3d(FlyingTextPacket* pBytes) {
    for (D2::Types::PlayerUnit* unit : D2::ServerSideUnits.players.all()) {
        if (unit->dwUnitId == pBytes->unitId && unit->dwType == pBytes->unitType) {
            for (Feature* f = Features; f; f = f->next) {
                f->valueFromServer(unit, pBytes->value, pBytes->color);
            }

            return;
        }
    }

    for (D2::Types::NonPlayerUnit* unit : D2::ServerSideUnits.nonplayers.all()) {
        if (unit->dwUnitId == pBytes->unitId && unit->dwType == pBytes->unitType) {
            for (Feature* f = Features; f; f = f->next) {
                f->valueFromServer(unit, pBytes->value, pBytes->color);
            }

            return;
        }
    }
}

namespace CustomPacket {
    class : public Feature {
    public:
        void init() {
            // register packet 0x3D
            FlyingTextPacketHandler = new CustomPacketServerSide<FlyingTextPacket>(0x3d, D2ClientIncoming0x3d, nullptr);
        }
    } feature;

}
