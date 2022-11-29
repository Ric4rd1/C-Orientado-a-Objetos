#include <string>
#include <iostream>
#include "Monster.h"
#include "Magic.h"
#include "Hero.h"
#include "PartyLeader.h"
#include "Item.h"

#include <vector>
using namespace std;

class Deck{
    private:
        vector<PartyLeader> partyLeaders[6];
        vector<Hero> heroes[48];
        vector<Monster> monsters[15];
        vector<Magic> magic[8];
        vector<Item> items[12];
    public:

};
