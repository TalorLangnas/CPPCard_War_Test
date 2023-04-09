#ifndef CARD_HPP
#define CARD_HPP

#include <iostream>
#include <string>
using namespace std;

namespace ariel {
    
    class Card{
       
    private:    
    int number;
    string suit;

    public:
    //Constructors:
    Card(int, string);
    Card();   

    //Methods:
    int compareTo(Card);
    string print();
    
    // int getNumber(){
    //     return this->number;
    // }; 

    string getSuit(){
        return this->suit;
    }; 


};
}


#endif

