#include "Card.hpp"
#include <iostream>
#include <sstream>
#include <string>

//Constructors
Card::Card(Rank rank, Suit suit) : rank(rank), suit(suit) {}

//toString
std::string Card::toString() const {

    std::ostringstream result;

    result << rankToString() << " of " << suitToString();
    return result.str();
}

std::string Card::rankToString() const {

    const std::string ranks[] = {"", "", "Two", "Three", "Four", "Five", "Six", "Seven", 
                            "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
    return ranks[rank];

}

std::string Card::suitToString() const {

    const std::string suits[] = {"", "Hearts", "Diamonds", "Clubs", "Spades"};
    return suits[suit];

}

std::ostream& operator <<(std::ostream& os, const Card& card){

    os << card.toString();
    return os;
}

//Accessors
Card::Rank Card::getRank() const{

    return rank;
}
Card::Suit Card::getSuit() const{

    return suit;
}
