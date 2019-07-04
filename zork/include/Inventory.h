#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"



class Inventory
{
    private:

        int capacity;
        string name;
        int currentItems;
        Item **itemArray=NULL;
        void startInventory(const int capacity);
        void expand();

    public:

        Inventory();
        virtual ~Inventory();
        void addItemInInventory(const Item& item);
        void removeItem(string name);

        //getter
        void getInventory();
       inline void getItemName() const //fucntion to get the name of the items
       {
            for(int i=0;i<currentItems;i++){
                cout<<this->itemArray[i]->getItemName()<<endl;
            }
       }
        inline void getItemDescription() const { //function to get the description of the items
            for(int i=0;i<currentItems;i++){
                cout<<this->itemArray[i]->getItemDescription()<<endl;
            }
        }
        int getIfItemInInventoryByName(string name); //function to get the name of a certain item in the inventory
        bool getInventoryEmpty();

};

#endif // INVENTORY_H
