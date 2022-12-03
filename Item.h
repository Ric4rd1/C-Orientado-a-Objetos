#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>
#include "Card.h"

using namespace std;

class Item: public Card {
    private:
        string effect;
        int quantity;
        bool cursed;
    public:
        //Constructor
        Item(string _name, string _effect, int _quantity, bool _cursed):Card(_name){
            effect = _effect;
            quantity = _quantity;
            cursed = _cursed;
        }
        //Getters
        string getEffect() {
            return effect;
        }
        bool getCursed() {
            return cursed;
        }
        int getQuantity() {
            return quantity;
        }
        //Setters
        void setEffect(string _effect) {
            effect = _effect;
        }
        void setCursed(bool _cursed) {
            cursed = _cursed;
        }
        void setQuantity(int _quantity) {
            quantity = _quantity;
        }
        //Methods
        void showCard() {
            cout<<"--------ITEM--------"<<endl;
            cout << "Name: " << name << endl;
            cout << "Effect: " << effect << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Cursed: " << cursed << endl;

        }
};

#endif
