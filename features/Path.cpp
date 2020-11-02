#include <iostream>
#include <unordered_map>
#include <headers/remote.h>
#include <headers/feature.h>
#include <cmath> // hypot
#include <array>

namespace Path {

    typedef unsigned short uint16;
    bool bTest = false;

    struct SimplePoint {
        uint16 x;
        uint16 y;

        SimplePoint(uint16 x, uint16 y) {
            this->x = x;
            this->y = y;
        }
    };

    SimplePoint toLocation(5089, 5030);
    struct Point;

    struct PointCollection {
        std::unordered_map<DWORD, Point *> maps;
        Point *start;
        Point *end;
        D2::Types::Level *lvl;

        PointCollection(D2::Types::Level *lvl) {
            this->lvl = lvl;
        }

        void addPoint(Point *point);
    };

    struct Point {
    public:

        long double getDistance(const Point *other) {
            return hypot(other->x - this->x, other->y - this->y);
        }

        uint16 x;
        uint16 y;
        uint16 localx;
        uint16 localy;
        PointCollection *collection;
        long double g;
        long double h;
        long double total;
        DWORD hash;
        Point *parent = nullptr;
        int collision;

    private:
        void setup() {
            this->hash = (x << 16) + y;
            for (D2::Types::Room2 *room2 = this->collection->lvl->pRoom2First; room2; room2 = room2->pRoom2Next) {
                if (room2->isInCoord(this->x, this->y)) {
                    auto room1 = room2->pRoom1;
                    this->localx = (this->x - room1->dwXStart);
                    this->localy = (this->y - room1->dwYStart);
                    this->collision = room1->Coll->pMapStart[this->localx +
                                                             this->localy * room1->Coll->dwSizeGameX];
                }
            }
            this->total = this->g + this->h;
            this->collection->addPoint(this);
        }

    public:
        Point(PointCollection *collection, uint16 x, uint16 y, Point *parent) {
            this->x = x;
            this->y = y;
            this->collection = collection;
            this->g = getDistance(this->collection->end);
            this->h = getDistance(this->collection->start);
            this->parent = parent;
            setup();
        }

        Point(PointCollection *collection, uint16 x, uint16 y) {
            this->collection = collection;
            this->x = x;
            this->y = y;
            this->g = 0;
            this->h = 0;
            setup();
        }

        bool operator==(const Point *other) const {
            return this && other && other->hash == this->hash;
        };

        std::array<Point *, 8> getNeighbours() {
            std::array<Point *, 8> neighbours = {
                    // First row
                    new Point(collection, this->x - 1, this->y - 1, this),
                    new Point(collection, this->x - 1, this->y, this),
                    new Point(collection, this->x - 1, this->y + 1, this),
                    // second row
                    new Point(collection, this->x, this->y - 1, this),
                    new Point(collection, this->x, this->y + 1, this),
                    // last row
                    new Point(collection, this->x + 1, this->y - 1, this),
                    new Point(collection, this->x + 1, this->y, this),
                    new Point(collection, this->x + 1, this->y + 1, this),

            };


            return neighbours;
        }
    };

    void PointCollection::addPoint(Point *point) {
        maps[point->hash] = point;
    }

    std::vector<SimplePoint> *_drawPath = nullptr;

    std::vector<SimplePoint> *calcPathTo(D2::Types::Level *lvl, uint16 x, uint16 y, uint16 xx, uint16 yy) {
        std::vector<SimplePoint> *path = new std::vector<SimplePoint>();

        //ToDo; use hash/equal functions to speed up the process
        auto hash = [](const Point &n) { return n.hash; };
        auto equal = [](const Point &l, const Point &r) { return l.hash == r.hash; };

        std::unordered_map<DWORD, Point *> open(128);
        std::unordered_map<DWORD, Point *> closed(128);

        PointCollection pc(lvl);
        Point *start = new Point(&pc, x, y),
                *end = new Point(&pc, xx, yy);

        pc.start = start;
        pc.end = end;

        start->g = start->getDistance(end);

        open[start->hash] = start;

        uint16 loops = 3000;
        auto lowestG = [&]() {
            Point *winner = nullptr;
            for (auto it = open.begin(); it != open.end(); ++it) {
                if (winner == nullptr || winner->g > it->second->g) {
                    winner = it->second;
                }
            }
            return winner;
        };

        while (loops--) {

            // search node that is nearest to the end point
            Point *winner = lowestG();
            if (!winner) {
                break;
            }

            if (*winner == end) {
                // Found =O

                Point *current = winner;

                // empty out the entire thing
                int nodes = 0;
                while (current) {
                    nodes++;
                    path->emplace_back(current->x, current->y);
                    current = current->parent;
                }

                std::cout << "path nodes # " << nodes << std::endl;
                break;
            }

            // store the winner in closed set, so we wont check it again
            closed[winner->hash] = winner;
            // remove it from the open map
            open.erase(winner->hash);


            // get all neighbours
            std::array<Point *, 8> arr = winner->getNeighbours();
            for (int i = 0; i < 8; i++) {
                Point *neighbour = arr[i];
                unsigned int hash = neighbour->hash;
                if (closed.find(hash) == closed.end()) {
                    if (neighbour->collision & 0x4 || neighbour->collision & 0xC09) {
                        continue;
                    } else {
                        open[neighbour->hash] = neighbour;
                    }

                }
            }
        }

        // delete points
        //for (auto it = open.begin(); it != open.end(); ++it) delete it->second;
        //for (auto it = closed.begin(); it != closed.end(); ++it) delete it->second;
        return path;
    }

    std::vector<SimplePoint> *calcPathTo(uint16 x, uint16 y, uint16 xx, uint16 yy) {
        return calcPathTo(D2::PlayerUnit->pPath->pRoom1->pRoom2->pLevel, x, y, xx, yy);
    }

    std::vector<SimplePoint> *calcPathTo(uint16 x, uint16 y) {
        return calcPathTo(D2::PlayerUnit->pPath->xPos, D2::PlayerUnit->pPath->yPos, x, y);
    }

    std::vector<SimplePoint> *calcPathTo(SimplePoint coord) {
        return calcPathTo(coord.x, coord.y);
    }

    class : public Feature {
    public:

        void init() override {
            gamelog << COLOR(4) << "Installing path" << std::endl;
        }


        void gamePostDraw() override {
            if (_drawPath)
                for (auto const point : *_drawPath) {
                    DrawLine(DPOINT(point.x - 1, point.y).toScreen(), DPOINT(point.x + 1, point.y).toScreen(), 0x99);
                    DrawLine(DPOINT(point.x, point.y - 1).toScreen(), DPOINT(point.x, point.y + 1).toScreen(), 0x99);
                }
        }

        void gameLoop() override {
            if (bTest) {
                bTest = false;
                std::cout << "calculate '" << std::endl;
                _drawPath = calcPathTo(toLocation);
            }
        }


        // Just some test shit
        bool windowMessage(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) override {

            switch (uMsg) {
                case WM_KEYDOWN:
                    if (!(lParam & 0x40000000) && wParam != VK_F4) {
                        switch (wParam) {
                            case VK_DELETE:
                                bTest = true;
                                std::cout << D2::PlayerUnit->pPath->xPos << "\t" << D2::PlayerUnit->pPath->yPos
                                          << std::endl;
                                break;
                            case VK_END:
                                std::cout << "to location " << D2::PlayerUnit->pPath->xPos << "\t"
                                          << D2::PlayerUnit->pPath->yPos << std::endl;
                                toLocation.x = D2::PlayerUnit->pPath->xPos;
                                toLocation.y = D2::PlayerUnit->pPath->yPos;
                                break;
                        }
                    }
            }
            return true;
        }

    } feature;

}
