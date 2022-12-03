#ifndef MODIFIER_H
#define MODIFIER_H

#include <string>
#include <iostream>
#include "Card.h"

using namespace std;

class Modifier: public Card {
    private:
        int plus;
        int minus;
    public:
    //Constructor
        Modifier(string _name, int _plus, int _minus):Card(_name){
            plus = _plus;
            minus = _minus;
        }
        //Getters
        int getPlus() {
            return plus;
        }
        int getMinus() {
            return minus;
        }
        //Setters
        void setPlus(int _plus) {
            plus = _plus;
        }
        void setMinus(int _minus) {
            minus = _minus;
        }
        //Methods
        void showCard() {
            cout<<"--------MODIFIER--------"<<endl;
            cout << "Plus: +" << plus << endl;
            cout << "Minus: -" << minus << endl;
        }
};
#endif
