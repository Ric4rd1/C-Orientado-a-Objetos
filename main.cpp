#include "Hero.h"
#include "PartyLeader.h"
#include "Deck.h"
#include "Card.h"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

//Create a random 6 sided dice roll
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
    diceRoll();
    Deck deck;
    deck.initializeDeck();
    deck.showDeck();
    
    
    return 0;
}
