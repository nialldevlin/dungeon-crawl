#ifndef GRID_H
#define GRID_H

#include "Enemy.h"
#include "Trap.h"
#include "Player.h"
#include <string>
#include <vector>

using namespace std;

class Grid
{
    public:
        Grid();
        Grid(int width, int length);
        Grid(int width, int length, int numEnemies, int numTraps);
        virtual ~Grid();

        void makeGrid();
        void displayGrid();

        void setWidth(int width);
        void setLength(int length);
        void setNumEnemies(int num);
        void setNumTraps(int num);

        int getWidth();
        int getLength();
        int getNumEnemies();
        int getNumTraps();

        int* uniqueRandList(int size);

    protected:

    private:
        int width, length;
        int numEnemies;
        int numTraps;
        int default_value = 0;

        vector<vector<int>> grid;

        vector<int> traps[2];
};

#endif // GRID_H
