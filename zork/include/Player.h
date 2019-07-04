#ifndef PLAYER_H
#define PLAYER_H
#include "Inventory.h"
#include "Enemy.h"

using namespace std;


class Player
{
    private:
        string name;
        int health;
        int shield;
        int damageMin;
        int damageMax;
        int xpos;
        int ypos;
        Inventory inventory;

    public:
        Player();
        virtual ~Player();

    //functions


    //getter
    const string& getName() const {return this->name; }
    const int& getHealth() const {return this->health; }
    const int& getShield() const {return this->shield; }
    const int& getMinDamage() const {return this->damageMin; }
    const int& getMaxDamage() const {return this->damageMax; }
    const int& getXPos() const {return this->xpos; }
    const int& getYPos() const {return this->ypos; }

    void getHeroStats();
    //setters
    void setName(string name);
    void setYPosPlus();
    void setYPosNeg();
    void setXPosPlus();
    void setXPosNeg();

};

#endif // PLAYER_H
