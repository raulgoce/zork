#ifndef WORLD_H
#define WORLD_H
#include "Item.h"
#include "Player.h"
#include "Game.h"
#include "NPC.h"

class World
{
    public:
        World();
        virtual ~World();
        void getRoom();
        void Travel();
        void dropItems();

    protected:

    public:
        Player player;
        NPC npc;
        Inventory inventory;
        Game game;
        int newChoice;

};
#endif // WORLD_H
