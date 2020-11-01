#include <iostream>
#include <unordered_map>
#include <headers/remote.h>
#include <headers/feature.h>
#include <cmath> // hypot
#include <array>

namespace Path {

    typedef unsigned short uint16;
    bool bTest = false;

    class Level;

    class Level {
        uint16 height;
        uint16 width;
        uint16 posX;
        uint16 posY;

        Level(D2::Types::Level *lvl) {
            height = lvl->dwSizeX * 5;
            width = lvl->dwSizeY * 5;
            posX = (lvl->dwPosX == -1 ? 0 : lvl->dwPosX * 5);
            posY = (lvl->dwPosY == -1 ? 0 : lvl->dwPosY * 5);
        }
    };


    void calcPathTo(D2::Types::Level *lvl, uint16 x, uint16 y, uint16 xx, uint16 yy) {
        using D2::Types::Room1;
        struct Point {
        public:
            std::array<Point *, 8> getNeighbours(Point *end) {
                std::array<Point *, 8> neighbours = {
                        // First row
                        new Point(this->x - 1, this->y - 1, end, this),
                        new Point(this->x - 1, this->y, end, this),
                        new Point(this->x - 1, this->y + 1, end, this),
                        // second row
                        new Point(this->x, this->y - 1, end, this),
                        new Point(this->x, this->y + 1, end, this),
                        // last row
                        new Point(this->x + 1, this->y - 1, end, this),
                        new Point(this->x + 1, this->y, end, this),
                        new Point(this->x + 1, this->y + 1, end, this),

                };


                return neighbours;
            }

            long double getDistance(const Point *other) {
                return hypot(other->x - this->x, other->y - this->y);
            }

            uint16 x;
            uint16 y;
            long double g;
            long double h;
            DWORD hash;
            Point *parent = nullptr;
        private:
            void calcHash() {
                this->hash = (x << 16) + y;
            }

        public:

            Point(uint16 x, uint16 y, Point *end, Point *parent) {
                this->x = x;
                this->y = y;
                this->g = getDistance(end);
                this->h = 0;
                this->calcHash();
                this->parent = parent;
            }

            Point(uint16 x, uint16 y) {
                this->x = x;
                this->y = y;
                this->g = 0;
                this->h = 0;
                this->calcHash();
            }

            bool operator==(const Point *other) const {
                return this && other && other->hash == this->hash;
            };
        };

        auto hash = [](const Point &n) { return n.hash; };
        auto equal = [](const Point &l, const Point &r) { return l.hash == r.hash; };

        std::unordered_map<DWORD, Point *> open(128);
        std::unordered_map<DWORD, Point *> closed(128);

        Point *start = new Point(x, y);
        Point *end = new Point(xx, yy);
        start->g = start->getDistance(end);

        open[start->hash] = start;

        uint16 loops = 10000;
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
                return;
            }

            if (*winner == end) {
                // Found =O

                struct SimplePoint {
                    uint16 x;
                    uint16 y;

                    SimplePoint(uint16 x, uint16 y) {
                        this->x=x;
                        this->y=y;
                    }
                };
                std::vector<SimplePoint> path;

                Point* current = winner;
                while(current) {
                    path.push_back(SimplePoint(current->x,current->y));
                    current = current->parent;
                }

                break;
            }

            // store the winner in closed set, so we wont check it again
            closed[winner->hash] = winner;
            // remove it from the open map
            open.erase(winner->hash);


            // get all neighbours
            std::array<Point*, 8> arr = winner->getNeighbours(end);
            for (int i = 0; i < 8; i++) {
                unsigned int hash = arr[i]->hash;
                if (closed.find(hash) == closed.end()) {
                    open[arr[i]->hash] = arr[i];
                }
            }
        }


    }

    void calcPathTo(uint16 x, uint16 y, uint16 xx, uint16 yy) {
        return calcPathTo(D2::PlayerUnit->pPath->pRoom1->pRoom2->pLevel, x, y, xx, yy);
    }

    void calcPathTo(uint16 x, uint16 y) {
        return calcPathTo(D2::PlayerUnit->pPath->xPos, D2::PlayerUnit->pPath->yPos, x, y);
    }

    class : public Feature {
    public:

        void init() {
            gamelog << COLOR(4) << "Installing path" << std::endl;
        }


        void gameLoop() {
            if (bTest) {
                bTest = false;
                std::cout << "calculate '" << std::endl;
                calcPathTo(5095, 5024);

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
                        }
                    }
            }
            return true;
        }

    } feature;

}
