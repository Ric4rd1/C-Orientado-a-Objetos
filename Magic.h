#ifndef MAGIC_H
#define MAGIC_H

#include <string>
#include <iostream>
#include "Card.h"

using namespace std;

class Magic: public Card {
    private:
        string effect;
    public:
        //Constructor
        Magic(string _name, string _effect):Card(_name){
            effect = _effect;
        }
        //Getters
        string getEffect() {
            return effect;
        }
        //Setters
        void setEffect(string _effect) {
            effect = _effect;
        }
        //Methods
        void showCard() {
            cout<<"--------MAGIC--------"<<endl;
            cout << "Name: " << name << endl;
            cout << "Effect: " << effect << endl;
        }  
};

#endif
