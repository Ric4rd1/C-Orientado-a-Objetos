#include "PartyLeader.h"
#include <string>
#include <iostream>

using namespace std;

class Hero:public PartyLeader{
    private:
        int roll;
        bool item = false;
        string items[0];
        bool inHand = true;
    public:
        //Constructor
        Hero(string _name, string _classification, string _effect, int _roll):PartyLeader(_name, _classification, _effect) {
            roll = _roll;
        }
        //Getters
        int getRoll(){
            return roll;
        }
        //Methods
        void showHero(){
            showPartyLeader();
            cout<<"Roll requirement: "<<roll<<endl;
        }
};
