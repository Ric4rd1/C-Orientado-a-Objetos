#ifndef PARTY_LEADER_H
#define PARTY_LEADER_H
#include<string>
#include <iostream>
#include "Card.h"
using namespace std;

class PartyLeader: public Card {
    protected:
        string classification;
        string effect;
    public:
        //Constructor
        PartyLeader():Card(){
            classification = " ";
            effect = " ";
        }
        PartyLeader(string _name, string _classification, string _effect): Card(_name){
            classification = _classification;
            effect = _effect;
        }
        //Getters
        string getClassification (){
            return classification;
        }
        string getEffect(){
            return effect;
        }
        //Setters
        void setClassification(string _classification){
            classification = _classification;
        }
        void setEffect(string _effect){
            effect = _effect;
        }
        //Methods
        void applyEffect(){
            cout<<"Effect: "<<effect<<endl;
        }
        void showCard (){
            cout<<"--------PARTY LEADER--------"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Class: "<<classification<<endl;
            cout<<"Ability: "<<effect<<endl;
        }
};
#endif
