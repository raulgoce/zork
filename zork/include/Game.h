#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include <ctime>

using namespace std;


class Game
{
    public:
        string choice;
        Game();
        virtual ~Game();
    //getters
    //we define our function inline to improve our code
    inline bool getPlaying() const{return this->playing; }
    //functions
    void startGame();
    void menu(); //main menu
    void help();//function to get some help commands
    void quit();//function to quit whenever the player type quit or q
    void intro(); //function to introduce our user to the game
    void secondIntro(string* name);
    int transformChoice(string choice);

    //Atributes
    private:
        int option;
        bool playing;
        Player player;
};

#endif // GAME_H
