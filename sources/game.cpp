#include "game.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace ariel;

Game::Game(){

};

Game::Game(Player o1, Player o2){

};

// playes the game untill the end
void Game::playAll(){

};
// prints the name of the winning player
string Game::printWiner(){
  return "";
};
// prints all the turns played one line per turn (same format as game.printLastTurn())
string Game::printLog(){
  return "";

};
/* for each player prints basic statistics:
win rate, cards won, <other stats you want to print>.
Also print the draw rate and amount of draws that happand.
(draw within a draw counts as 2 draws. )
 */
string Game::printStats(){
  return "";
};
void Game::playTurn(){

};
string Game::printLastTurn(){ 
    return "";
};
