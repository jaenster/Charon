//
// Created by jaenster on 21/10/2020.
//



#include "headers/feature.h"
#include "headers/hook.h"
#include "headers/Storage.h"

namespace Storage {

    Container::Container(Buffers::Type bufferId, int width, int height) : itemCollection() {
        this->bufferId = bufferId;
        this->width = width;
        this->height = height;
    }

    void Container::update() {
        //ToDo; get items
    }

    itemCollection *Container::getItems() {
        //ToDO; update on demand
        this->update();
        return this;
    }

    itemCollectionCoordinated Container::myCoordMap() {
        itemCollectionCoordinated myMap;

        itemCollection *items = this->getItems();

        for (auto &obj: *items) {
            D2::Types::UnitAny *unit = obj.second;

            Coord coord = unit->getCoord();
            myMap[coord.location] = unit;
        }
        return myMap;
    }

    Container *Container::moveTo(D2::Types::UnitAny *item) {
        Coord coord;
        if (this->findSpot(item, coord)) {
            D2::UiFlag::UiFlag flag = Buffers::UINeeded[this->bufferId];
            if (flag && !D2::GetUiFlag(flag)) {
                throw std::exception("UIFLag active for Container::moveTo");
            }

            ClickItem(this->bufferId,coord.x, coord.y,item);
        }
        return this;
    }

    bool Container::findSpot(D2::Types::UnitAny *item, Coord &coord) {

        this->update();

        vector2d heatmap = this->getHeatmap();
        unsigned char sizeX = item->getSizeX();
        unsigned char sizeY = item->getSizeY();

        for (int x = 0; x < this->width; x++) {
            for (int y = 0; y < this->height; y++) {

                // If this is a freespot
                if (heatmap[x][y]) {
                    if (this->canFit(heatmap, x, y, sizeX, sizeY)) {
                        coord.x = x;
                        coord.y = y;
                        return true;
                    }
                }
            }
        }

        return NULL;
    }

    Container::vector2d Container::getHeatmap() {
        vector2d heatmap(this->width, vector1d(this->height));
        for (int x = 0; x < this->width; x++) {
            for (int y = 0; y < this->height; y++) {
                heatmap[x][y] = true; // mark as free spot
            }
        }

        for (auto &obj: *this) {
            D2::Types::UnitAny *unit = obj.second;
            Coord coord = unit->getCoord();
            auto sizeX = unit->getSizeX();
            auto sizeY = unit->getSizeY();

            // for the entire size of the item, mark it as taken
            for (int x = coord.x; x < coord.x + sizeX; x++) {
                for (int y = coord.y; y < coord.y + sizeY; y++) {
                    heatmap[x][y] = false;
                }
            }
        }

        return heatmap;
    }

    bool Container::canFit(Container::vector2d &vector, int iX, int iY, unsigned char sizeX, unsigned char sizeY) {
        for (int x = iX; x < iX + sizeX; x++) {
            for (int y = iY; y < iY + sizeY; y++) {
                if (!vector[x][y]) {
                    return false;
                }
            }
        }
        return false;
    }

    Container *belt = new Container(Buffers::Belt, 4, 4);
    Container *inventory = new Container(Buffers::Inventory, 10, 4);
    Container *trade = new Container(Buffers::Trade, 10, 4);
    Container *cube = new Container(Buffers::Cube, 4, 6);
    Container *stash = new Container(Buffers::Stash, 6, 8);


    class : public Feature {
    public:
        void init() {
            //gamelog << COLOR(4) << "Installing template" << std::endl;
        }
    } feature;

}
