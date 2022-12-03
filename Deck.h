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
        void initializeDeck();

        void showDeck(){
            for(int i = 0; i < deck.size(); i++){
                deck[i]->showCard();
            }
        }
        
};

void Deck::initializeDeck(){
        //initialize Heroes

    //input filename
	string fileHeroes= "HeroesTab.txt";
    string name, classification, effect, roll;

	//number of lines
	int i = 0;

	ifstream coeff(fileHeroes); //opening the file.
	if (coeff.is_open()) //if the file is open
	{
		//ignore first line
		string line;
		getline(coeff, line);

		while (!coeff.eof()) //while the end of file is NOT reached
		{
            
			//I have 4 sets so use 4 getlines
			getline(coeff, name, '\t');
			getline(coeff, classification, '\t');
			getline(coeff, effect, '\t');
			getline(coeff, roll, '\n'); //new line

			if (i>5){
                int roll_out = stoi(roll);
                Hero* hero = new Hero(name, classification, effect, roll_out);
                deck.push_back(hero);    
            }
            else{
                PartyLeader* leader = new PartyLeader(name, classification, effect);
                deck.push_back(leader);
            }
            
			i += 1; //increment number of lines
		}
		coeff.close(); //closing the file
		cout << "Number of entries: " << i-1 << endl;
	}
	else cout << "Unable to open file"; //if the file is not open output


            //initialize Monsters

    //input filename
	string fileMonsters= "MonstersTab3.txt";
    string nameMonster, heroRequirement, punishableRoll, rollRequirement, punishment, reward, effectMonster;

	//number of lines
	int j = 0;

	ifstream coeff1(fileMonsters); //opening the file.
	if (coeff1.is_open()) //if the file is open
	{
		//ignore first line
		string line;
		getline(coeff1, line);

		while (!coeff1.eof()) //while the end of file is NOT reached
		{
    
			//I have 4 sets so use 4 getlines
			getline(coeff1, nameMonster, '\t');
			getline(coeff1, heroRequirement, '\t');
			getline(coeff1, punishableRoll, '\t');
            getline(coeff1, rollRequirement, '\t');
            getline(coeff1, punishment, '\t');
            getline(coeff1, reward, '\t');
			getline(coeff1, effectMonster, '\n'); //new line

			
            int punishableRoll_out = stoi(punishableRoll);
            int rollRequirement_out = stoi(rollRequirement);
            Monster* monster = new Monster(nameMonster, heroRequirement, punishableRoll_out, rollRequirement_out, punishment, reward, effectMonster);
            deck.push_back(monster);    
            
			j += 1; //increment number of lines
		}
		coeff1.close(); //closing the file
		cout << "Number of entries: " << j-1 << endl;
	}
	else cout << "Unable to open file"; //if the file is not open output
    

            //initialize Items

    //input filename
	string fileItems= "ItemsTab.txt";
    string nameItem, cursed, effectItem, quantity;

	//number of lines
	int k = 0;

	ifstream coeff2(fileItems); //opening the file.
	if (coeff2.is_open()) //if the file is open
	{
		//ignore first line
		string line;
		getline(coeff2, line);

		while (!coeff2.eof()) //while the end of file is NOT reached
		{
            
			//I have 4 sets so use 4 getlines
			getline(coeff2, nameItem, '\t');
			getline(coeff2, cursed, '\t');
			getline(coeff2, effectItem, '\t');
			getline(coeff2, quantity, '\n'); //new line

			bool cursed_out = (cursed == "1");
            int quantity_out = stoi(quantity);
            Item* item = new Item(nameItem, effectItem, quantity_out, cursed_out);
            deck.push_back(item);    
           
			i += 1; //increment number of lines
		}
		coeff.close(); //closing the file
		cout << "Number of entries: " << i-1 << endl;
	}
	else cout << "Unable to open file"; //if the file is not open output

}

#endif
