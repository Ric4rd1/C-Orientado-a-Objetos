#ifndef PARTY_LEADER_H
#define PARTY_LEADER_H
#include<string>
#include <iostream>
using namespace std;

class PartyLeader{
    private:
        string name;
        string classification;
        string effect;
    public:
        //constructor
        PartyLeader(string _name, string _classification, string _effect){
            name = _name;
            classification = _classification;
            effect = _effect;
        }
        //Getters
        string getName (){
            return name;
        }
        string getClassification (){
            return classification;
        }
        string getEffect(){
            return effect;
        }
        //Setters
        void setName(string _name){
            name = _name;
        }
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
        void showPartyLeader (){
            cout<<"Name: "<<name<<endl;
            cout<<"Class: "<<classification<<endl;
            cout<<"Ability: "<<effect<<endl;
            cout<<"\n";
        }
};
#endif
