#ifndef MONSTER_H
#define MONSTER_H

#include<string>
#include<iostream>
#include "Card.h"

using namespace std;

class Monster: public Card{
    private:
        string heroRequirement;
        int punishableRoll;
        int rollRequirement;
        string punishment;
        string reward;
        string effect;
    public:
        //Constructor
        Monster(string _name, string _heroRequirement, int _punishableRoll, int _rollrequirement, string _punishment, string _reward, string _effect):Card(_name){
            heroRequirement = _heroRequirement;
            punishableRoll = _punishableRoll;
            rollRequirement = _rollrequirement;
            punishment = _punishment;
            reward = _reward;
            effect = _effect;
        }
        //Getters
        string getHeroRequirement(){
            return heroRequirement;
        }
        int getPunishableRoll(){
            return punishableRoll;
        }
        int getRollRequirement(){
            return rollRequirement;
        }
        string getPunishment(){
            return punishment;
        }
        string getReward(){
            return reward;
        }
        string getEffect(){
            return effect;
        }
        //Setters
        void setHeroRequirement(string _heroRequirement){
            heroRequirement = _heroRequirement;
        }
        void setPunishableRoll(int _punishableRoll){
            punishableRoll = _punishableRoll;
        }
        void setRollRequirement(int _rollRequirement){
            rollRequirement = _rollRequirement;
        }
        void setPunishment(string _punishment){
            punishment = _punishment;
        }
        void setReward(string _reward){
            reward = _reward;
        }
        void setEffect(string _effect){
            effect = _effect;
        }
        //Methods
        void showCard(){
            cout<<"--------MOSNTER--------"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Hero Requirement: "<<heroRequirement<<endl;
            cout<<"Punishable Roll: "<<punishableRoll<<endl;
            cout<<"Roll Requirement: "<<rollRequirement<<endl;
            cout<<"Punishment: "<<punishment<<endl;
            cout<<"Reward: "<<reward<<endl;
            cout<<"Effect: "<<effect<<endl;
            cout<<"\n";
        }
        string fight(int roll){
            if(roll >= rollRequirement){
                return effect;
            }else{
                return punishment;
            }
        }
        
};

#endif
