#ifndef DECK_HPP
#define DECK_HPP

#include "Card.hpp"
#include <vector>

class Deck{

    public:
    Deck();
    void shuffle();
    Card dealCard();
    void reset();
    bool isEmpty() const;
    std::string toString();


    private:
    std::vector<Card> currentDeck;
    int card_count;
    int deckIndex;
    std::vector<Card> dealtCards;
};

#endif