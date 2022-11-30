#ifndef DECK_H
#define DECK_H

#include "Monster.h"
#include "Magic.h"
#include "Hero.h"
#include "PartyLeader.h"
#include "Item.h"

#include <string>
#include <iostream>
#include <vector>

#include <iomanip>
#include <sstream>
#include <fstream>

using namespace std;

class Deck{
    private:
      vector<Card*> deck;

    public:
        //Constructor
        Deck(){
            deck;
        }
        //Getters
        vector<Card*> getDeck(){
            return deck;
        }
        //Setters
        void setDeck(vector<Card*> _deck){
            deck = _deck;
        }
        //Methods
        //vector<PartyLeader> initializePartyLeaders();

        void initializeDeck();

        /*
        void showLeaders(vector<PartyLeader> x){
            for (auto i: x) {
                std::cout << i << ' '; 
            }
        }
        */
};

void Deck::initializeDeck(){

        //vector<Card*> deck;
        /*
        vector<string> name_;
        vector<string> classification_;
        vector<string> effect_;
        vector<int> roll_;
        */
        //input filename
	string file= "CardsTab.txt";
    string name, classification, effect, roll;
	//number of lines
	int i = 0;

	ifstream coeff(file); //opening the file.
	if (coeff.is_open()) //if the file is open
	{
		//ignore first line
		string line;
		getline(coeff, line);

		while (!coeff.eof()) //while the end of file is NOT reached
		{
            
			//I have 4 sets so use 4 getlines
			getline(coeff, name, '\t');
			//name_.push_back(name);
			getline(coeff, classification, '\t');
			//classification_.push_back(classification);
			getline(coeff, effect, '\t');
			//effect_.push_back(effect);
			getline(coeff, roll, '\n'); //new line
            /*
            cout<<name<<endl;
            cout<<classification<<endl;
            cout<<effect<<endl;
            cout<<roll<<endl;
            */
            

			if (i>5){
                int roll_out = stoi(roll);
			    //roll_.push_back(roll_out);
                deck.push_back(Hero(name, classification, effect, roll_out));    
            }
            else{
                deck.push_back(PartyLeader(name, classification, effect));
            }
            
			i += 1; //increment number of lines
		}
		coeff.close(); //closing the file
		cout << "Number of entries: " << i-1 << endl;
	}
	else cout << "Unable to open file"; //if the file is not open output
    deck[0].showCard();
    deck[1].showCard();
    deck[2].showCard();
    deck[3].showCard();
    deck[4].showCard();
    deck[5].showCard();
    deck[6].showCard();
    deck[7].showCard();
    deck[8].showCard();
    deck[9].showCard();
    deck[10].showCard();

    
    //partyLeaders[0].showPartyLeader();
    //heroes[0].showHero();

    /*
    cout << "Name" << "\t" << "Class" << "\t" << "Effect" << "\t" << "Roll" << endl;
    for (int j = 0; j < i; j++) {
		cout << name_[j] << "\t" << classification_[j] << "\t" << effect_[j] << "\t" << roll_[j] << endl;
		
	
    }
    */
}

/*
vector<PartyLeader> Deck::initializePartyLeaders(){
    
    

    //input filename
	string file= "Cards.txt";
    string name, classification, effect, roll;
	//number of lines
	int i = 0;

	ifstream coeff(file); //opening the file.
	if (coeff.is_open()) //if the file is open
	{
		//ignore first line
		string line;
		getline(coeff, line);

		while (!coeff.eof()) //while the end of file is NOT reached
		{
			//I have 4 columns {name, classification, effect, roll} so use 4 getlines
			getline(coeff, name, ',');
			name_.push_back(name);
			getline(coeff, classification, ',');
			classification_.push_back(classification);
			getline(coeff, effect, ',');
			effect_.push_back(effect);
			getline(coeff, roll, '\n'); //new line after CY
			roll_.push_back(roll);
			
			i += 1; //increment number of lines
		}
		coeff.close(); //closing the file
		cout << "Number of entries: " << i-1 << endl;
	}
	else cout << "Unable to open file"; //if the file is not open output
    
    //initialize PartyLeader vector
    for ( i = 1; i < 7; i++) { // from 1 to 6
    PartyLeader *i = new PartyLeader(name_[0], classification_[0], effect_[0]);
    partyLeaders.push_back(*i);
    }
    
    
    
    cout << "Name" << "\t" << "Class" << "\t" << "Effect" << "\t" << "Roll" << endl;
    for (int j = 0; j < i; j++) {
		cout << name_[j] << "\t" << classification_[j] << "\t" << effect_[j] << "\t" << roll_[j] << endl;
		
	}
    
   return partyLeaders;
}
*/
#endif
