#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;

class Item {
    private:
        string name;
        string effect;
        int quantity;
        bool inHand  = true;
    public:
        //Constructor
        Item(string _name, string _effect, int _quantity) {
            name = _name;
            effect = _effect;
            quantity = _quantity;
            inHand = true;
        }
        //Getters
        string getName() {
            return name;
        }
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
        void setName(string _name) {
            name = _name;
        }
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
        void showItem() {
            cout << "Name: " << name << endl;
            cout << "Effect: " << effect << endl;
        }
};

#endif
