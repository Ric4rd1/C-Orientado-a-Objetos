#include "Hero.h"
#include "PartyLeader.h"
#include "Deck.h"
#include "Card.h"
#include "Challenger.h"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

//Create 2 random 6 sided dice roll
int diceRoll(){
    srand(time(NULL));
    int number = 6;
    int result1 = 0;
    int result2 = 0;
    result1 = rand() % number + 1;
    result2 = rand() % number + 1;
    std::cout << "press ENTER to roll..." << std::endl;
    std::cin.ignore(); // Wait for any key
    cout<<"ROLL : "<<result1 <<", "<<result2<<endl;
    return result1 + result2;
}

int main(){
    //Create a roll dice with 2 6 sided dice
    diceRoll();

    //Create a deck
    Deck deck;

    //Initialize the deck
    deck.initializeDeck();

    //Show the deck
    deck.showDeck();

    cout<<"#############################################"<<endl;
    cout<<"Shuffling deck..."<<endl;
    cout<<"#############################################"<<endl;
    
    //Shuffle the deck in a random order and show the deck again
    deck.shuffleDeck();
    deck.showDeck();
    
    return 0;
}
