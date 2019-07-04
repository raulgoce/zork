#include "Player.h"

Player::Player()
{
    this-> name = "";
    this-> health = 100;
    this-> shield = 10;
    this-> damageMin = 1;
    this-> damageMax = 10;
    this-> xpos = 0;
    this-> ypos = 0;
}

Player::~Player()
{
    //dtor
}

void Player::getHeroStats(){
    cout<<"\t\t - HERO STATS - "<<endl;
    cout<<"- Name: "<<name<<endl;
    cout<<"- Health: "<<health<<endl;
    cout<<"- Shield: "<<shield<<endl;
    cout<<"- Avarage Damage: "<<(damageMax+damageMin)/2<<endl;
    cout<<"- Position: ["<<xpos<<"]["<<ypos<<"]"<<endl<<endl;
}

void Player::setName(string name)
{
    this->name=name;
}

void Player::setYPosPlus()
{
    this->ypos++;
}
void Player::setXPosPlus()
{
    this->xpos++;
}
void Player::setYPosNeg()
{
    this->ypos--;
}
void Player::setXPosNeg()
{
    this->xpos--;
}
