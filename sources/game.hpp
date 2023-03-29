#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <string>
#include "player.hpp"
#include "card.hpp"

using namespace std;
using namespace ariel;

class Game
{

    Player p1;
    Player p2;

public:
    Game();
    Game(Player, Player);

    void playAll();      // playes the game untill the end
    string printWiner(); // prints the name of the winning player
    string printLog();   // prints all the turns played one line per turn (same format as game.printLastTurn())
    string printStats(); // for each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand. (draw within a draw counts as 2 draws. )
    void playTurn();
    string printLastTurn();
};

#endif