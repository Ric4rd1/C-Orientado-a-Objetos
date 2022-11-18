#include "Hero.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
//Create a random 6 sided dice roll
int diceRoll(){
    srand(time(NULL));
    int number = 6;
    int result = 0;
    result = rand() % number + 1;
    std::cout << "press ENTER to roll..." << std::endl;
    std::cin.ignore(); // Wait for any key
    cout<<"Result : "<<result<<endl;
    return result;
}

int main(){
    diceRoll();
    
    PartyLeader TheCarismaticSong("The Carismatic Song", "Bard", "Each time you roll to use a Hero card's effect, +1 to your roll." );
    Hero DodgeyDealer("Dodgy Dealer", "Bard", "Trade hands whith another player.", 9 );
    TheCarismaticSong.showPartyLeader();
    DodgeyDealer.showHero();
    
    return 0;
}
