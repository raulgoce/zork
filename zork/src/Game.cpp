#include "Player.h"
#include "Game.h"


Game::Game()
{
    option=0;
    playing=true;
}

Game::~Game()
{
    //dtor
}


//funcion que muestra por pantalla la introduccion a nuestro juego
void Game::help(){
    cout<<"Before you start your little adventure, you have to know a few things. Not that much, just that if you"<<endl;
    cout<<"want to quit, type \"quit\" , if you want to see your inventory type \"inventory\", if you want to clear the \nscreen type \"clear\" and if you want help press \"help\". \nHave fun! "<<endl;
    system("pause");
    system("cls");
}

void Game::quit(){
    this->playing=false;
    exit(0);
}


void Game::intro(){
    cout<<"You suddenly wake up in the middle of a beach, you have nothing and remember less. \n";
    cout<<"With you is a empty backpack."<<endl;
    cout<<"In the mighty confusion of your awaken you find a note that says:\n";
    cout<<"!!Hurry up"<<endl;
}


void Game::secondIntro(string * name){
    cout<<endl<<endl;
    cout<<"\t !!Hurry up "<<*name<<" you have to finish it!! Don't waste time!"<<endl;
    cout<<endl<<endl;
    cout<<"You don't understand a thing of whats going on, as usual, but this note seemed important."<<endl;
    cout<<"This note wakes up your interest, but you are lost as hell."<<endl;
}


int Game::transformChoice(string choice)
{
	if(choice=="yes"||choice=="y"||choice=="Y"||choice=="YES"){
		return 1;
	}else if(choice=="help"||choice=="h"||choice=="H"||choice=="HELP"){
		return 2;
	}else if(choice=="quit"||choice=="q"||choice=="Q"||choice=="QUIT"||choice=="exit"||choice=="EXIT"){
		return 3;
	}else if(choice=="inventory"||choice=="i"||choice=="I"||choice=="INVENTORY"||choice=="inv"){
		return 4;
	}else if(choice=="east"||choice=="e"||choice=="E"||choice=="EAST"){
		return 5;
	}else if(choice=="west"||choice=="w"||choice=="W"||choice=="WEST"){
		return 6;
	}else if(choice=="north"||choice=="n"||choice=="N"||choice=="NORTH"){
		return 7;
	}else if(choice=="south"||choice=="s"||choice=="S"||choice=="SOUTH"){
		return 8;
	}else if(choice=="no"||choice=="NO"){
		return 9;
	}
	else if(choice=="clear"||choice=="CLEAR"||choice=="C"||choice=="c"){
        return 10;
	}
	else if(choice=="drop"||choice=="d"||choice=="DROP"){
        return 11;
	}
	else if(choice=="key"||choice=="KEY"){
        return 50;
	}
	else if(choice=="sheet"||choice=="SHEET"){
        return 51;
	}
}
