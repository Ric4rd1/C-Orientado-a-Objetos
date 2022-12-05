#ifndef CHALLENGER_H
#define CHALLENGER_H

#include <string>
#include <iostream>
#include "Card.h"

class Challenger: public Card {
    private:
        string effect;
    public:
        //Constructor
        Challenger():Card(){
            effect = "You may play this card when another playerattepts to play a Hero, Item, or Magic card. CHALLENGE that card.";
        }
        Challenger(string _name, string _effect): Card(_name){
            effect = _effect;
        }
        //Getters
        string getEffect(){
            return effect;
        }
        //Setters
        void setEffect(string _effect){
            effect = _effect;
        }
        //Methods
        void applyEffect(){
            cout<<"Effect: "<<effect<<endl;
        }
        void showCard (){
            cout<<"--------CHALLENGER--------"<<endl;
            cout<<"Ability: "<<effect<<endl;
        }
};
#endif
