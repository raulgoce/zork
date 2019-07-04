#ifndef ENEMY_H
#define ENEMY_H
#include <string.h>
#include <iostream>
using namespace std;

class Enemy
{
    private:
        string name;
        int HP;
        int damageMin;
        int damageMax;

    public:
        Enemy(string name,int HP, int damageMin, int damageMax);
        virtual ~Enemy();


        inline bool isDead(){return this->HP<0;}
        void getInfoEnemy() const;
        void hitEnemy(int damage);
};

#endif // ENEMY_H
