#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>


class Card{

    public:
    enum Suit {Hearts, Diamonds, Clubs, Spades};
    enum Rank { Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Jack, Queen, King, Ace};
    // enum Color {Red, Black};

    Card(Rank rank, Suit suit);

    std::string toString() const;

    friend std::ostream& operator<<(std::ostream& os, Card& card);

    private:
    Suit suit;
    Rank rank;

};

#endif