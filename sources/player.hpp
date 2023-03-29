#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>
#include "card.hpp"

using namespace std;
using namespace ariel;

class Player{
    
    string name;

    public:

    //Constructor
    Player();
    Player(string name);
    
    //Demo methods   
    
    int getWinCounter(){
        return 1;
    };
    int getLoseCounter(){

        return 1;
    };

    int getDrawCounter(){

        return 1;
    };


    int stacksize();

    int cardesTaken();

    Card takeCard();

    string print();
    
};


#endif