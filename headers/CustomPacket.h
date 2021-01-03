//
// Created by jaenster on 20/12/2020.
//

#include "headers/feature.h"
#include "headers/common.h"
#include "headers/hook.h"
#include "headers/remote.h"
#include "headers/ghidra.h"

template<class PacketStructure>
class CustomPacketServerSide {

protected:
    void SetupValues(char packetId, void* handler, DWORD unitHandler) {
        if (!handler) handler = D2::NET_D2GS_CLIENT_IncomingReturn;
        MemoryPatch(0x7114d0 + (packetId * 12) + 0) << (DWORD)handler;
        MemoryPatch(0x7114d0 + (packetId * 12) + 4) << BYTE(sizeof(PacketStructure));
        MemoryPatch(0x7114d0 + (packetId * 12) + 8) << unitHandler;

        // size array client
        MemoryPatch(0x730ae8 + (packetId * 4)) << BYTE(sizeof(PacketStructure));
    }

public:
    CustomPacketServerSide(char packetId, void* handler) {
        SetupValues(packetId, handler, 0x00);
    }

    void sendPacket(Ghidra::D2ClientStrc* pClient, PacketStructure *packet) {
        size_t packetSize = sizeof(PacketStructure);
        __asm {
            pushad; // safety

            mov EDI, pClient;
            push packetSize; //11
            push packet;
            call D2::NET_D2GS_SERVER_SendPacket_Helper;

            popad; // safety
        }
    }

};

template<class PacketStructure>
class CustomUnitPacketServerSide : protected CustomPacketServerSide<PacketStructure> {
    CustomUnitPacketServerSide(char packetId, void* handler) {
        CustomPacketServerSide<PacketStructure>::SetupValues(packetId, (DWORD) 0x00, handler);
    }
};

#pragma pack(push, 1)
struct FlyingTextPacket {
    char packetId;
    unsigned char unitType;
    DWORD unitId;
    char color;
    int value;
};
#pragma pack(pop)

extern CustomPacketServerSide<FlyingTextPacket>* FlyingTextPacketHandler;
