#include "Grid.h"
#include "Trap.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

Grid::Grid()
{
    this->width = 10;
    this->length = 10;
    this->numEnemies = 3;
    this->numTraps = 5;
    this->grid.resize(length, vector<int>(width, 0));
    srand(time(NULL));
    this->trap[0].resize(numTraps, )

Grid::Grid(int width, int length, int numEnemies, int numTraps)
{
    this->width = width;
    this->length = length;
    this->numEnemies = numEnemies;
    this->numTraps = numTraps;

}


Grid::~Grid()
{
    //dtor
}

void Grid::makeGrid()
{
    /*
        0 - Empty Space
        1 - Player
        2 - Traps
        3 - Enemy
    */

    for(int t = 0; t < this->numTraps; t++){
        

    }

    /*for(Enemy &enemy : this->enemies) {
        this->grid [ enemy.getXPos() ][ enemy.getYPos() ] = 3;
    }*/

}

void Grid::displayGrid()
{



    for (int i = 0; i < this->grid.size(); i++) { 
        for (int j = 0; j < this->grid[i].size(); j++) 
            switch ( this->grid[i][j] )
            {
                case 0:
                    cout << ".";
                    break;
                case 1:
                    cout << "P";
                    break;
                case 2:
                    cout << "T";
                    break;
                case 3:
                    cout << "E";
                    break;
            }
        cout << endl; 
    } 
}

void Grid::setWidth(int w)
{
    this->width = w;
}

void Grid::setLength(int l)
{
    this->length = l;
}

void Grid::setNumEnemies(int num)
{
    this->numEnemies = num;
}

void Grid::setNumTraps(int num)
{
    this->numTraps = num;
}

int Grid::getWidth()
{
    return this->width;
}

int Grid::getLength()
{
    return this->length;
}

int Grid::getNumEnemies()
{
    return this->numEnemies;
}

int Grid::getNumTraps()
{
    return this->numTraps;
}

int* Grid::uniqueRandList(int size)
{
    int randArray[size];
    for ( int i = 0; i < size; i++ ) {
        
    }
}