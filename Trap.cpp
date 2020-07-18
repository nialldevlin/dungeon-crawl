#include "Trap.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

Trap::Trap(int gridW, int gridL)
{
    this->damage = 100;
    srand(time(NULL));
    this->xPos = rand() % (gridW + 1);
    this->yPos = rand() % (gridL + 1);

}


Trap::Trap(int gridW, int gridL, int damage)
{
    this->damage = damage;
    srand(time(NULL));
    this->xPos = rand() % (gridW + 1);
    this->yPos = rand() % (gridL + 1);
}


Trap::~Trap()
{
    //dtor
}

void Trap::setXPos(int xPos)
{
    this->xPos = xPos;
}

void Trap::setYPos(int yPos)
{
    this->yPos = yPos;
}

void Trap::setDamage(int damage)
{
    this->damage = damage;
}

int Trap::getXPos()
{
    return this->xPos;
}

int Trap::getYPos()
{
    return this->yPos;
}

int Trap::getDamage()
{
    return this->damage;
}
