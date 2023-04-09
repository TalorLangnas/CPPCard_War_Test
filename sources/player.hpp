#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>
#include "card.hpp"

using namespace std;
using namespace ariel;

class Player{
    
    string name;
    int *record;

    public:

    //Constructor
    Player();
    Player(string name);
    
    //Demo methods   


    int stacksize();

    int cardesTaken();

    Card takeCard();

    string print();
    int getWinCounter();
    int getLoseCounter();
    int getDrawCounter();
    
};


#endif