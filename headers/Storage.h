//
// Created by jaenster on 21/10/2020.
//

#ifndef CHARON_STORAGE_H
#define CHARON_STORAGE_H

#include "remote.h"

namespace Storage {

    namespace Buffers {
        enum Type {
            Belt = 2,
            Inventory = 3,
            Trade = 5,
            Cube = 6,
            Stash = 7,
        };
        D2::UiFlag::UiFlag UINeeded[] = {
                D2::UiFlag::None, // 0
                /*equipment*/D2::UiFlag::None, // 1
                /*belt*/D2::UiFlag::None, // 2
                /*inventory*/D2::UiFlag::None, // 3
                D2::UiFlag::None,
                /*trade*/D2::UiFlag::TradePrompt, // 5
                /*Cube*/D2::UiFlag::Cube, // 6
                /*Stash*/D2::UiFlag::Stash, // 7
        };
    }

    void ClickItem(Buffers::Type buffer, unsigned short x, unsigned short y, D2::Types::UnitAny *targetItem) {

        D2::Types::InventoryLayout *layout = D2::Layout::Inventory;
        switch(buffer) {
            case Buffers::Trade:
                layout = D2::Layout::Trade;
                break;
            case Buffers::Cube:
                layout = D2::Layout::Cube;
                break;
            case Buffers::Stash:
                layout = D2::Layout::Stash;
                break;
            default:
                break;
        }

        D2::ClickItemLeft(D2::PlayerUnit, D2::PlayerUnit->pInventory, x, y, targetItem, layout);
    }


    typedef DWORD gid;

    typedef std::map<gid, D2::Types::UnitAny *> itemCollection;
    typedef std::map<unsigned int, D2::Types::UnitAny *> itemCollectionCoordinated;

    class Container : private itemCollection {
    private:
        typedef std::vector<bool> vector1d;
        typedef std::vector<vector1d> vector2d;

        vector2d getHeatmap();

        bool canFit(vector2d &vector, int x, int y, unsigned char sizeX, unsigned char sizeY);

    protected:
        Buffers::Type bufferId;
        int width;
        int height;

        void update();

    public:
        itemCollection *getItems();

        itemCollectionCoordinated myCoordMap();

        Container *moveTo(D2::Types::UnitAny *item);

        bool findSpot(D2::Types::UnitAny *item, Coord &coord);

        Container(Buffers::Type bufferId, int width, int height);
    };

    extern Container *belt;
    extern Container *inventory;
    extern Container *trade;
    extern Container *cube;
    extern Container *stash;

}
#endif //CHARON_STORAGE_H
