#include "World.h"
#include <stdio.h>
#include <conio.h>

World::World()
{
    //ctor
}

World::~World()
{
    //dtor
}
//function that checks the position of the player and with a conditional goes through the map.
void World::Travel()
{
    int xpos, ypos, newChoice;
    xpos=player.getXPos();
    ypos=player.getYPos();
    string choice;

    //BEACH
    if(xpos==0 && ypos==0){
        cout<<endl;
        cout<<"You find yourself at the beginning. "<<endl;
        cout<<"You can take 3 paths, west, north or south, you can't go east because of the beach, you are not a dolphin."<<endl;
        do{
            cout<<"Which path do you want to take? ";
            getline(cin, choice);
            newChoice=game.transformChoice(choice);
            switch(newChoice){
                case 2: game.help(); break;
                case 3: game.quit(); break;
                case 4: inventory.getInventory(); break;
                case 5: cout<<"You can't go east."<<endl; break;
                case 6: player.setXPosNeg(); break;
                case 7: player.setYPosPlus(); break;
                case 8: player.setYPosNeg(); break;
                case 10: system("cls"); break;
                case 11: dropItems();  break;
                default:
                    cout<<"This command is not in the program, please enter a correct one."<<endl;
                break;
            }
        }while(newChoice!=6 && newChoice!=7 && newChoice!=8);
        cout<<"---------------------------------------------------------------------------"<<endl;
        Travel();

    }
    //ESPLANADE
    else if(xpos==-1 && ypos==0){
        cout<<endl;
        cout<<"You arrive to a large esplanade, at your far left you spot a forest(west)\nat your back a cave(south), on your front(north) you see what seems to be a house"<<endl;
        cout<<"and on your right the beach where you waked up(east).";
        do{
            cout<<"Where do you want to go? "; getline(cin, choice);
            newChoice=game.transformChoice(choice);
            switch(newChoice){
                case 2: game.help(); break;
                case 3: game.quit(); break;
                case 4: inventory.getInventory(); break;
                case 5: player.setXPosPlus(); break;
                case 6: player.setXPosNeg(); break;
                case 7: player.setYPosPlus(); break;
                case 8: player.setYPosNeg(); break;
                case 10: system("cls"); break;
                 case 11: dropItems();  break;
                default:
                    cout<<"This command is not in the program, please enter a correct one."<<endl;
                break;
            }
        }while(newChoice!=5 && newChoice!=6 && newChoice!=7 && newChoice!=8);
        cout<<"---------------------------------------------------------------------------"<<endl;
        Travel();

    }
    //CAVE
    else if(xpos==-1 && ypos==-1){
        cout<<endl;
        cout<<"You decide to enter the dark and creepy cave, but since you are just a normie and don't know the basic survival principals,"<<endl;
        cout<<"you fall into a hole and you break your neck. \nYou can't move and less go to the top since you are now a"<<endl;
        cout<<"disabled. You die in 2 hours. I think it's a pretty good ending for someone that nobody expects nothing."<<endl;
        cout<<"Think that way, you are now on the newspapers! Congratulations, you archived something in life."<<endl;
        getch();
        cout<<"What a disappointment.";
        system("cls");
        cout<<"Thanks for playing!"<<endl;
        getch();
        game.quit();

    }
    //HOUSE
    else if(xpos==-1 && ypos==1){
        cout<<endl;
        cout<<"A nice house appears right in front of your eyes. The roof is half buried and some"<<endl;
        cout<<"homeless has piss in the entrance stairs."<<endl;
        do{
            cout<<" Do you want to go inside? (yes/no)";
            getline(cin, choice);
            newChoice=game.transformChoice(choice);
            switch(newChoice){
                case 1:
                    cout<<"Right in the entrance of the house, you see a giant staircase, an old one. At the right is a massive mirror, it might be almost 2 meters long."<<endl;
                    do{
                        cout<<"Do you want to inspect it? (yes/no)";
                        getline(cin, choice);
                        newChoice=game.transformChoice(choice);
                        switch(newChoice){
                            case 1:
                                cout<<endl;
                                cout<<"You see what appears to be a vague figure of a person standing still, it seems to be a very depressive and loser person."<<endl;
                                cout<<"Oh wait, its you."<<endl;
                                cout<<"What did you expect to see in a mirror?"<<endl;
                                getch();
                            break;
                            case 2: game.help(); break;
                            case 3: game.quit(); break;
                            case 4: inventory.getInventory(); break;
                            case 9: break;
                            case 10: system("cls"); break;
                            case 11: dropItems();  break;
                            default:
                                cout<<"This command is not in the program, please enter a correct one."<<endl;
                            break;
                            }
                    }while(newChoice !=1 && newChoice !=9);
                    cout<<"You proceed to exit the house."<<endl;
                break;
                case 2: game.help(); break;
                case 3: game.quit(); break;
                case 4: inventory.getInventory(); break;
                case 9: break;
                case 10: system("cls"); break;
                case 11: dropItems();  break;
                default:
                    cout<<"This command is not in the program, please enter a correct one."<<endl;
                break;
            }
        }while(newChoice !=1 && newChoice!=9);
        cout<<endl;
        cout<<"You have four options, you go to the esplanade(south), you go to the beach(east),"<<endl;
        cout<<"you can go to a wooden bridge(north), you go to a dark lake(west)."<<endl;
        do{
            cout<<"Where do you want to go? "; getline(cin, choice);
            newChoice=game.transformChoice(choice);
            switch(newChoice){
                case 2: game.help(); break;
                case 3: game.quit(); break;
                case 4: inventory.getInventory(); break;
                case 5: player.setXPosPlus(); break;
                case 6: player.setXPosNeg(); break;
                case 7: player.setYPosPlus(); break;
                case 8: player.setYPosNeg(); break;
                case 10: system("cls"); break;
                case 11: dropItems();  break;
                default:
                    cout<<"This command is not in the program, please enter a correct one."<<endl;
                break;
            }
        }while(newChoice!=5 && newChoice!=6 && newChoice!=7 && newChoice!=8);
        cout<<"---------------------------------------------------------------------------"<<endl;
        Travel();
    }
    //BEACH TOP
    else if(xpos==0 && ypos==1){
        cout<<endl;
        cout<<"The beach is very long, you find yourself in a beach with not much to see."<<endl;
        cout<<"But far in the distance you see a lighthouse."<<endl;
        do{
            cout<<"What is your next movement? You can go to the lighthouse(north), go to the old house(west) or follow the beach(south) "; getline(cin, choice);
            newChoice=game.transformChoice(choice);
            switch(newChoice){
                case 2: game.help(); break;
                case 3: game.quit(); break;
                case 4: inventory.getInventory(); break;
                case 5: cout<<"You can't go east."<<endl; break;
                case 6: player.setXPosNeg(); break;
                case 7: player.setYPosPlus(); break;
                case 8: player.setYPosNeg(); break;
                case 10: system("cls"); break;
                case 11: dropItems();  break;
                default:
                    cout<<"This command is not in the program, please enter a correct one."<<endl;
                break;
            }
        }while(newChoice!=6 && newChoice!=7 && newChoice!=8);
        cout<<"---------------------------------------------------------------------------"<<endl;
        Travel();
    }
    //LIGHTHOUSE
    else if(xpos==0 && ypos==2){
        cout<<endl;
        cout<<"A pretty new lighthouse appears in front of your eyes, it's strange that everything in this place is rusty and old,"<<endl;
        cout<<"but this lighthouse is new."<<endl;
        cout<<"It causes nothing to you since you are not capable of seeing the situation since you can't even figure \nout what is one plus one. "<<endl;
        do{
            cout<<"Do you want to go inside?(yes/no)"; getline(cin, choice);
            newChoice=game.transformChoice(choice);
            switch(newChoice){
                case 1:
                { //when we declare variables inside a switch case, we have to put curly brackets.
                    if(inventory.getIfItemInInventoryByName("key")==1){
                        cout<<endl;
                        cout<<"You found a key in the ground, what a convenient place to leave a key don't you think?"<<endl;
                        cout<<"What a coincidence, that you are an adventurer and you find a key."<<endl;
                        cout<<"You don't find it in a pocket or I don't know, maybe the owner has it."<<endl;
                        cout<<"No. \nYou found it on the middle of the ground on a lighthouse. \nWell..."<<endl;
                        do{
                            cout<<"Do you want to pick it or not?(yes/no) ";getline(cin, choice);
                            newChoice=game.transformChoice(choice);
                            switch(newChoice){
                                case 1:
                                    cout<<"You made a common sense choice and you pick the key since you will need it in the future, to open a chest or something. "<<endl;
                                    getch();
                                    inventory.addItemInInventory(Item("key","It's a golden key, with some strange inscription."));
                                    cout<<"It's a golden key, with some strange inscription."<<endl;
                                    getch();
                                break;
                                case 2: game.help(); break;
                                case 3: game.quit(); break;
                                case 4: inventory.getInventory(); break;
                                case 9:
                                    cout<<"For some God knows why reason, your tinny brain has decided that is not a good idea to pick a inofensive key of the ground... ok, whatever.";
                                    getch();
                                    cout<<"I'm so tired of looking at this...";
                                    getch();
                                    cout<<"I need some vacations.";
                                    getch();
                                break;
                                case 10: system("cls"); break;
                                case 11: dropItems();  break;
                                default:
                                    cout<<"This command is not in the program, please enter a correct one."<<endl;
                                break;
                            }
                        }while(newChoice!=1 && newChoice!=9);
                    }else{
                        cout<<"There is nothing in here, you already pick the key, what do you expect to find? Santa?"<<endl;
                    }
                }
                break;
                case 2: game.help(); break;
                case 3: game.quit(); break;
                case 4: inventory.getInventory(); break;
                case 9: break;
                case 10: system("cls"); break;
                case 11: dropItems();  break;
                default:
                    cout<<"This command is not in the program, please enter a correct one."<<endl;
                break;
            }
        }while(newChoice!=1 && newChoice!=9);
        cout<<endl;
        cout<<"From here you can only go back to the beach."<<endl;
        cout<<"Don't worry, I know you are too lazy to type one word, so I will teleport you to the previous spot."<<endl;
        cout<<"I know, I'm amazing. The magic of programmation."<<endl;
        player.setYPosNeg();
        cout<<"---------------------------------------------------------------------------"<<endl;
        Travel();
    }
    //BEACHBOTTOM
    else if(xpos==0 && ypos==-1){
        cout<<endl;
        cout<<"A ending path is in front of you, there is nothing much, just a bunch of logs and a pair of seaweeds."<<endl;

        //check if object still in the place
        if(inventory.getIfItemInInventoryByName("sheet")==1){
            do{

                cout<<"There is something more on the ground, do you want to inspect it? (yes/no)";
                getline(cin, choice);
                newChoice=game.transformChoice(choice);
                switch(newChoice){
                    case 1:
                        cout<<"You look to the thing on the ground but is pretty buried. Its your dignity! Hahaha!"<<endl;
                        getch();
                        cout<<"Just kidding, it's a piece of sheet. You grave it."<<endl;
                        inventory.addItemInInventory(Item("sheet","You have to beat this! You can pass the test! "));
                        cout<<"It seems to fit with your other note. You can check your inventory anytime you want."<<endl;
                        getch();
                    break;
                    case 2: game.help(); break;
                    case 3: game.quit(); break;
                    case 4: inventory.getInventory(); break;
                    case 9: break;
                    case 10: system("cls"); break;
                    case 11: dropItems();  break;
                    default:
                        cout<<"This command is not in the program, please enter a correct one."<<endl;
                    break;
                }
            }while(newChoice!=1 && newChoice!=9);

        }else{
            cout<<"There was a piece of sheet but you already pick it"<<endl;
        }
        cout<<endl;
        cout<<"From here you can only go back to the beach."<<endl;
        cout<<"Don't worry, I know you are too lazy to type one word, so I will teleport you to the previous spot."<<endl;
        cout<<"I know, I'm amazing. The magic of programmation."<<endl;
        player.setYPosPlus();
        cout<<"---------------------------------------------------------------------------"<<endl;
        Travel();
    }
    //BRIDGE
    else if(xpos==-1 && ypos==2){
        cout<<endl;
        cout<<"A large bridge is in front of your eyes, with strong decision you walk on it. "<<endl;
        cout<<"When you are just in the middle, one of the ropes break suddenly and you fell in the infinite abyss."<<endl;
        getch();
        cout<<"Pum, you are dead.";
        system("cls");
        cout<<"Thanks for playing!"<<endl;
        getch();
        game.quit();
    }
    //FOREST
    else if(xpos==-2 && ypos==0){
        cout<<endl;
        cout<<"The forest is dark and wet. A strange sensation goes through all your body and enters your bones. "<<endl;
        cout<<"You know something is wrong, but you don't know what. "<<endl;
        cout<<"You have two options, you go to the shed at your left(west) or go to the esplanade(east) "<<endl;
        do{
            cout<<"What do you want to do? ";getline(cin, choice);
            newChoice=game.transformChoice(choice);
            switch(newChoice){
                case 2: game.help(); break;
                case 3: game.quit(); break;
                case 4: inventory.getInventory(); break;
                case 5: player.setXPosPlus(); break;
                case 6: player.setXPosNeg(); break;
                case 7: cout<<"You can't go north"<<endl;break;
                case 8: cout<<"You can't go south"<<endl;break;
                case 10: system("cls"); break;
                case 11: dropItems();  break;
                default:
                    cout<<"This command is not in the program, please enter a correct one."<<endl;
                break;
            }
        }while(newChoice!=5 && newChoice!=6);
        cout<<"---------------------------------------------------------------------------"<<endl;
        Travel();
    }
    //SHED
    else if(xpos==-3 && ypos==0){
        cout<<endl;
        cout<<"A small brown shed in front of you."<<endl;
        cout<<"You hear a soft whispering. "<<endl;
        do{
            cout<<"Do you want to open the door?(yes/no) "; getline(cin, choice);
            newChoice=game.transformChoice(choice);
            switch(newChoice){
                case 1:
                    if(inventory.getIfItemInInventoryByName("key")==1){
                        cout<<"The door won't open, it's close, maybe you can find a key."<<endl;
                        getch();
                    }else{
                        if(npc.getIfTalked()==0){
                            cout<<endl;
                            cout<<"You open the door with your key. Right in front you see a woman."<<endl;
                            getch();
                            cout<<"She's old and it's stuck in the wall. What is this abomination?"<<endl;
                            getch();
                            cout<<"This is a clear violation of copyright. It's like the 1st game of Dark Souls..."<<endl;
                            getch();
                            cout<<"Well... anyway, she is almost dead. You approach to her and she says:"<<endl;
                            getch();
                            cout<<" - \"Young, come here, I have no time left...\""<<endl;
                            getch();
                            cout<<"She is dead...she just died..."<<endl;
                            getch();
                            cout<<"..."<<endl;
                            getch();
                            cout<<"..."<<endl;
                            getch();
                            cout<<"Life happens, you go out"<<endl;
                            npc.setTalked(1);
                        }else if(npc.getIfTalked()==1){
                            cout<<"The dead body of the old woman still remains in the room."<<endl;
                            cout<<"Don't be creepy and leave please..."<<endl;
                        }
                    }
                break;
                case 2: game.help(); break;
                case 3: game.quit(); break;
                case 4: inventory.getInventory(); break;
                case 9: break;
                case 10: system("cls"); break;
                case 11: dropItems();  break;
                default:
                    cout<<"This command is not in the program, please enter a correct one."<<endl;
                break;
            }
        }while(newChoice!=1 && newChoice!=9);
        getch();
        player.setXPosPlus();
        cout<<"---------------------------------------------------------------------------"<<endl;
        Travel();
    }
    //LAKE
    else if(xpos==-2 && ypos==1){
        cout<<endl;
        cout<<"One creepy and huge lake is in the place."<<endl;
        cout<<"You have the feeling that you have arrived to the end of your journey. "<<endl;
        cout<<"You have two options, go north and face your destiny, or go east and explore more. "<<endl;

        do{
            cout<<"What's your choice? "<<endl; getline(cin, choice);
            newChoice=game.transformChoice(choice);
            switch(newChoice){
                case 2: game.help(); break;
                case 3: game.quit(); break;
                case 4: inventory.getInventory(); break;
                case 5: player.setXPosPlus(); break;
                case 6: cout<<"You can't go west"<<endl; break;
                case 7:
                    cout<<"Are you sure? This might be the end of your adventure.(yes/no) "; getline(cin, choice);
                    newChoice=game.transformChoice(choice);
                    switch(newChoice){
                        case 1: player.setYPosPlus(); break;
                        case 2: game.help(); break;
                        case 3: game.quit(); break;
                        case 4: inventory.getInventory(); break;
                        case 9: break;
                        case 10: system("cls"); break;
                        case 11: dropItems();  break;
                        default:
                            cout<<"This command is not in the program, please enter a correct one."<<endl;
                        break;
                    }
                break;
                case 8: cout<<"You can't go south"<<endl; break;
                case 10: system("cls"); break;
                case 11: dropItems();  break;
                default:
                    cout<<"This command is not in the program, please enter a correct one."<<endl;
                break;
            }
        }while(newChoice!=5 && newChoice!=6 && newChoice!=1);
        cout<<"---------------------------------------------------------------------------"<<endl;
        Travel();
    }
    else if(xpos==-2&&ypos==2){//since it's a short combat we put it in here, otherwise whe make a separate class only for combats.
        int option;
        cout<<"You hear a voice, a very dark one."<<endl;
        cout<<endl;
        cout<<" - \"Who is the fool who dares to enter my dungeon and try to defeat me?\""<<endl;
        getch();
        cout<<"Asks the strange voice."<<endl;
        getch();
        cout<<"With strong stupidity and nonsense but very vigorous, you proceed to take one step ahead. "<<endl;
        getch();
        cout<<"SUDDENLY A MASSIVE MONSTER APEARS IN FRONT OF YOU. OMG IT'S HUGE!"<<endl;
        cout<<"Have you seen the size of this dude? He's gonna rip your ass off man."<<endl;
        getch();
        cout<<"Sorry...He is big, but you are stronger"<<endl;
        cout<<"By the magic of the fairy of the woods you have a pokedex in your hands and tells the stats of your opponent"<<endl;
        getch();
        Enemy enemy("Final Boss",10000,10,1000);
        enemy.getInfoEnemy();
        getch();
        cout<<" - \"Do you know who I am? I am the entrance exam of the AAA master. HAHAHAHA.\""<<endl;
        cout<<"- \"You are going to fail this test! You are not going to enter!\""<<endl;
        getch();
        cout<<"With this being said, the combat starts, you go first"<<endl;
        cout<<"What do you want to do?"<<endl;
        cout<<"1. Hit it with your super strong sword"<<endl;
        cout<<"2. Shoot it with the hood's glock"<<endl;
        cout<<"3. Talk to him and try to kill it with your boredom"<<endl;
        cin>>option;
        do{
            switch(option){
                case 1:
                    cout<<endl;
                    cout<<"You attack with your sword, it's kind of effective. "<<endl;
                    enemy.hitEnemy(100);
                    enemy.getInfoEnemy();
                    getch();
                    cout<<endl;
                break;
                case 2:
                    cout<<endl;
                    cout<<"You attack with your pistol, it's very of effective. "<<endl;
                    enemy.hitEnemy(1000);
                    enemy.getInfoEnemy();
                    getch();
                    cout<<endl;
                break;
                case 3:
                    cout<<endl;
                    cout<<"You attack with your boredom, some random person fell sleep. "<<endl;
                    enemy.hitEnemy(1);
                    enemy.getInfoEnemy();
                    getch();
                    cout<<endl;
                break;
            }
        }while(option!=1 && option!=2 && option!=3);
        //check stats
        cout<<" - \"Now it's my turn fool!\""<<endl;
        getch();
        cout<<"The final boss punches you and yo go straight against the wall and every part of you flies away."<<endl;
        getch();
        cout<<"You can't be more dead"<<endl;
        getch();
        cout<<"YOU DON'T PASS THE ENTRANCE EXAM"<<endl;
        getch();
        system("cls");
        cout<<"Thanks for playing!"<<endl;
        getch();
        game.quit();

    }



}

void World::dropItems(){
    string choice;
    int newChoice;
    if(inventory.getInventoryEmpty()==false)
        {
            cout<<"You don't have items yet."<<endl;
        } else{
            cout<<"Which item do you want to drop? Think that you will lose it forever." ;
            inventory.getInventory();
            getline(cin, choice);
            newChoice=game.transformChoice(choice);
            switch(newChoice){
                case 50:
                    if(inventory.getIfItemInInventoryByName("key")==0){
                        inventory.removeItem("key");
                        cout<<"Key dropped"<<endl;
                    }
                    else{
                        cout<<"No such item in the inventory"<<endl;
                    }
                    break;
                    case 51:
                        if(inventory.getIfItemInInventoryByName("sheet")==0){
                            inventory.removeItem("sheet");
                        }
                        else{
                            cout<<"No such item in the inventory"<<endl;
                            cout<<"Sheet dropped"<<endl;
                        }
                        break;
                        default: cout<<"No s in the inventory"<<endl;break;
            }
        }
}
