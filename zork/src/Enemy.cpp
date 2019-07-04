#include "Enemy.h"
#include <string.h>

using namespace std;

Enemy::Enemy(string name, int HP, int damageMin, int damageMax )
{
    this->name=name;
    this->HP=HP;
    this->damageMin=damageMin;
    this->damageMax=damageMax;
}

Enemy::~Enemy()
{
    //dtor
}

void Enemy::getInfoEnemy() const
{
    cout<<"\t - .:STATS:. - "<<endl;
    cout<<" -> Name: "<<this->name<<endl;
    cout<<" -> HP: "<<this->HP<<endl;
    cout<<" -> Damage: "<<(this->damageMin+this->damageMax)/2<<endl;
}

void Enemy::hitEnemy(int damage){
    this->HP=(HP-damage);
}
