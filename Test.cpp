#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include "doctest.h"
#include <sstream>
#include <stdexcept>
#include <iostream>

using namespace ariel;
using namespace std;

TEST_CASE("card comperassion")
{
    Card c1(1, "heart");
    Card c2(3, "spade");
    Card c3(6, "diam");
    Card c4(6, "club");
    Card c5(8, "club");
    Card c6(7, "club");

    CHECK(c2.compareTo(c1) == 1);
    CHECK(c3.compareTo(c4) == 0);
    CHECK(c6.compareTo(c5) == -1);
    CHECK(c1.print() != "");
}

TEST_CASE("Player test")
{
    Player p1("Yossi");
    Player p2("Moshe");
    Game game(p1, p2);

    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);
    CHECK(p1.getWinCounter() == 0);
    CHECK(p2.getLoseCounter() == 0);
    CHECK(p2.getDrawCounter() == 0);

    game.playTurn();

    CHECK(p1.stacksize() != 26);
    CHECK(p2.stacksize() != 26);
    CHECK(p1.stacksize() != p2.stacksize());
    CHECK(p1.getWinCounter() != 0);
    CHECK(p2.getWinCounter() != 0);
}

TEST_CASE("Game test")
{
    Player p1("Yossi");
    Player p2("Moshe");
    Game game(p1, p2);
    game.playAll();
    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);
    Player winner = p2;
    if (p2.stacksize() == 0)
    {
        winner = p1;
    }
    CHECK(winner.print() == game.printWiner());
};

TEST_CASE("Game - playTurn test")
{
    Player p1("Yossi");
    Player p2("Moshe");
    Game game(p1, p2);
    game.playTurn();
    int play = p1.stacksize();
    CHECK(play != 26);
}

TEST_CASE("game.printLog() - test")
{
    Player p1("Yossi");
    Player p2("Moshe");
    Game game(p1, p2);

    CHECK(game.printLog() == "");
    CHECK(game.printStats() == "");

    game.playTurn();

    CHECK(game.printLog() != "");
    CHECK(game.printStats() != "");
}

TEST_CASE("Game test")
{
    Player p1("Yossi");
    Player p2("Moshe");
    Game game(p1, p2);
    game.playTurn();
        SUBCASE("draw"){
            CHECK(p1.stacksize() == 26);
            CHECK(p2.stacksize() == 26);
    }

}
