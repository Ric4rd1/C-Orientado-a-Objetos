#include <string>
#include <iostream>
using namespace std;

class Monster{
    private:
        string name;
        string heroRequirement;
        int punishableRoll;
        int rollRequirement;
        string punishment;
        string effect;
    public:
        //Constructor
        Monster(string _name, string _heroRequirement, int _punishableRoll, int _rollrequirement, string _punishment, string _effect){
            name = _name;
            heroRequirement = _heroRequirement;
            punishableRoll = _punishableRoll;
            rollRequirement = _rollrequirement;
            punishment = _punishment;
            effect = _effect;
        }
        //Getters
        string getName(){
            return name;
        }
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
        string getEffect(){
            return effect;
        }
        //Setters
        void setName(string _name){
            name = _name;
        }
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
        void setEffect(string _effect){
            effect = _effect;
        }
        //Methods
        void showMonster(){
            cout<<"Name: "<<name<<endl;
            cout<<"Hero Requirement: "<<heroRequirement<<endl;
            cout<<"Punishable Roll: "<<punishableRoll<<endl;
            cout<<"Roll Requirement: "<<rollRequirement<<endl;
            cout<<"Punishment: "<<punishment<<endl;
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
