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
        bool inHand  = true;
    public:
        //Constructor
        Item(string _name, string _effect, int _quantity):Card(_name){
            name = _name;
            effect = _effect;
            quantity = _quantity;
            inHand = true;
        }
        //Getters
        string getEffect() {
            return effect;
        }
        bool getInHand() {
            return inHand;
        }
        int getQuantity() {
            return quantity;
        }
        //Setters
        void setEffect(string _effect) {
            effect = _effect;
        }
        void setInHand(bool _inHand) {
            inHand = _inHand;
        }
        void setQuantity(int _quantity) {
            quantity = _quantity;
        }
        //Methods
        void showCard() {
            cout<<"--------ITEM--------"<<endl;
            cout << "Name: " << name << endl;
            cout << "Effect: " << effect << endl;
        }
};

#endif
