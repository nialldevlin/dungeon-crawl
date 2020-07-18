#ifndef TRAP_H
#define TRAP_H


class Trap
{
    public:
        Trap(int gridW, int gridL);
        Trap(int gridW, int gridL, int damage);
        virtual ~Trap();

        void setXPos(int xPos);
        void setYPos(int yPos);
        void setDamage(int damage);

        int getXPos();
        int getYPos();
        int getDamage();

    protected:
        int xPos, yPos;
        int damage;

    private:

};


#endif // TRAP_H
