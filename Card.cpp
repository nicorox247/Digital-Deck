#include "Card.hpp"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

Card::Card(Rank rank, Suit suit) : rank(rank), suit(suit) {}

string Card::toString() const {

    const string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const string ranks[] = {"Two", "Three", "Four", "Five", "Six", "Seven", 
                            "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    ostringstream result;

    result << ranks[rank] << " of " << suits[suit];
    return result.str();
}

ostream& operator <<(ostream& os, Card& card){

    os << card.toString();
    return os;
}

