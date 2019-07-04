#include <iostream>
#include <conio.h>
#include "Game.h"
#include "Player.h"
#include "Enemy.h"
#include "World.h"

using namespace std;

//main function
int main()
{
    Game game;
    World world;
    Player player;
    string name="";
    //INTRO
    game.help();
    game.intro();
    do{
         cout<<"What is your name, naive unknown? " ;getline(cin, name); //ask the name of the player
    }while(name.empty());

    player.setName(name);
    game.secondIntro(&name);

    //CORE
    world.Travel();
    getch();

    return 0;
}
