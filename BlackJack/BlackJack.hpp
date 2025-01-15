#ifndef BLACKJACK_HPP
#define BLACKJACK_HPP

#include "../Deck/Deck.hpp"
#include <vector>

class Blackjack{

    public:
    Blackjack();
    Blackjack(int);
    void play();
    

    //private:
    std::vector<std::vector<Card>> playerHands;
    // std::vector<Card> singlePlayerHand;
    std::vector<Card> dealerHand;

    int players;
    Deck deck;

    bool isBust(const std::vector<Card>& hand) const;
    int handValue(const std::vector<Card>& hand) const;
    void displayDealer(const std::vector<Card>& hand) const;
    void displayHand(const std::vector<Card>& hand, const std::string& name) const;
    void playerTurn(int);
    void dealerTurn();
    void determineWinners() const;
};

#endif