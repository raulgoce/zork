#ifndef NPC_H
#define NPC_H
#include <iostream>
using namespace std;



class NPC
{
    public:
        NPC();
        virtual ~NPC();

        //getters
        inline int getIfTalked() const { return this->talked; }
        //setters
        inline void setTalked(int talked){this->talked=talked;}

    private:
        bool talked; //since it's just one npc we can do it like that
};

#endif // NPC_H
