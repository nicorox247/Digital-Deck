#ifndef CARD_HPP
#define CARD_HPP

#include <string>
#include <iostream>


class Card{

    public:
    enum Suit {Hearts = 1, Diamonds, Clubs, Spades};
    enum Rank { Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace};
    // enum Color {Red, Black};

    //Constructors
    Card(Rank, Suit);
    Card(std::string, std::string);
    Card(int, int);

    //Accessors
    Rank getRank() const;
    Suit getSuit() const;

    //toString
    std::string toString() const;
    std::string rankToString() const;
    std::string suitToString() const;

    //operator overloading
    friend std::ostream& operator<<(std::ostream& os, const Card& card);

    private:
    Rank rank;
    Suit suit;
    

};

#endif