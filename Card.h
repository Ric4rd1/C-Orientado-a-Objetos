#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Card {
    protected:
        string name;

    public:
        //Constructor
        Card(){
            name ;
        }
        Card(string _name) {
            name = _name;
        }
        //Getters
        string getName() {
            return name;
        }
        //Setters
        void setName(string _name) {
            name = _name;
        }
        //Virtual Methods
        virtual void showCard() {
            cout << "Name: " << name << endl;
        }
};
#endif
