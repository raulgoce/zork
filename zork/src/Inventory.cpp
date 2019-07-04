#include "Inventory.h"
#include <string>

Inventory::Inventory()
{
    this->capacity=10; //the capacity of our inventory is 10
    this->currentItems=0; //we set our current items to 0 since we just start the game
    this->itemArray= new Item*[capacity];
}

Inventory::~Inventory() //we assign the destruct for our array of items, the inventory.
{
   for(size_t i=0;i<this->currentItems;i++)
   {
       delete this->itemArray[i]; //we have to delete every field of the dynamic array
   }
   delete[] itemArray;
}
void Inventory::startInventory(const int capacity)
{
    for(size_t i=capacity; i<capacity;i++)
    {
        this->itemArray[i]=NULL;
    }
}
 void Inventory::addItemInInventory(const Item& item)//we select the new item
 {
    this->itemArray[this->currentItems++] = new Item(item);//we assign our new item to our inventory
    this->currentItems*=1;
 }


void Inventory::removeItem(string name)
{
    for(int i=0;i<currentItems;i++){
        if(this->itemArray[i]->getItemName()==name){
            delete this->itemArray[i];
            this->itemArray[i] = this->itemArray[this->currentItems - 1];
            this->itemArray[--this->currentItems] = NULL;
        }
    }
}

int Inventory::getIfItemInInventoryByName(string name) //we search for a item in our inventory array with the sequential search, first we define a flag and then we look in our array for the item
{
    char flag='F';
    int i=0;
    while((flag=='F')&&(i<currentItems)){
       if(this->itemArray[i]->getItemName()==name){
            flag='T';
       }
       i++;
    }
    if(flag=='F')
    {
        return 1;
    }else if(flag=='T'){
        return 0;
    }
}

void Inventory::getInventory()
{
    for(int i=0;i<currentItems;i++)
    {
        cout<<endl;
        cout<<i+1<<". "<<this->itemArray[i]->getItemName()<<" - "<<this->itemArray[i]->getItemDescription()<<endl;
        cout<<endl;
    }
}
bool Inventory::getInventoryEmpty()
{
    for(int i=0;i<currentItems;i++)
    {
        if(this->itemArray[i]==NULL){
            return false;
        }return true;
    }

}
