#include "player.hpp"
#include "card.hpp"

using namespace std;
using namespace ariel;


 //Constructor
    Player::Player(string name){

    }
    Player::Player(){

    }
    
    //Demo methods
    int Player::stacksize(){

        return 0;
    };
    int Player:: cardesTaken(){
        
        return 1;
    };
    Card Player::takeCard(){
        Card card;
        return card;
    };
    string Player::print(){
        return"";
    };
    int Player::getWinCounter()
    {
        return 0;
    };
    int Player::getLoseCounter()
    {
        return 0;
    };
    int Player::getDrawCounter()
    {
        return 0;
    };


   

