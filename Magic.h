#ifndef MAGIC_H
#define MAGIC_H

#include <string>
#include <iostream>
#include "Card.h"

using namespace std;

class Magic: public Card {
    private:
        string effect;
        int quantity;
    public:
        //Constructor
        Magic(string _name, string _effect, int _quantity):Card(_name){
            effect = _effect;
            quantity = _quantity;
        }
        //Getters
        string getEffect() {
            return effect;
        }
        int getQuantity() {
            return quantity;
        }
        //Setters
        void setEffect(string _effect) {
            effect = _effect;
        }
        void setQuantity(int _quantity) {
            quantity = _quantity;
        }
        //Methods
        void showCard() {
            cout<<"--------MAGIC--------"<<endl;
            cout << "Name: " << name << endl;
            cout << "Effect: " << effect << endl;
            cout << "Quantity: " << quantity << endl;
        }  
};

#endif
