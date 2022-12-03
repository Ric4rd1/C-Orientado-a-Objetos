#ifndef HERO_H
#define HERO_H

#include "PartyLeader.h"
#include "Card.h"

#include <string>
#include <iostream>

using namespace std;

class Hero:public PartyLeader{
    private:
        int roll;
        bool item = false;
        string items[0];
        bool inHand = false;
    public:
        //Constructor
        Hero(string _name, string _classification, string _effect, int _roll):PartyLeader(_name, _classification, _effect){
            roll = _roll;
        }
        //Getters
        int getRoll(){
            return roll;
        }
        bool getItem(){
            return item;
        }
        string getItems(){
            return items[0];
        }
        bool getInHand(){
            return inHand;
        }
        //Setters
        void setRoll(int _roll){
            roll = _roll;
        }
        void setItem(bool _item){
            item = _item;
        }
        void setItems(string _items){
            items[0] = _items;
        }
        void setInHand(bool _inHand){
            inHand = _inHand;
        }
        //Methods
        void showCard(){
            cout<<"--------HERO--------"<<endl;
            cout<<"Name: "<< name<<endl;
            cout<<"Class: "<< classification<<endl;
            cout<<"Ability: "<< effect<<endl;
            cout<<"Roll requirement: "<<roll<<endl;
        }
};

#endif
