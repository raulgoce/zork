#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Item
{

    private:
        string name;
        string description;


    public:
        Item(string name, string description);
        virtual ~Item();
        inline string getItemName() const{return this->name;}
        inline string getItemDescription() const {return this->description;}

};

#endif // ITEM_H
