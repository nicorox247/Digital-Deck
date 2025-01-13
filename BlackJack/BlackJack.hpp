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
    std::vector<Card> playerHand;
    std::vector<Card> dealerHand;

    std::vector<Card> player2Hand;
    std::vector<Card> player3Hand;
    std::vector<Card> player4Hand;
    std::vector<Card> player5Hand;
    int players;
    Deck deck;

    bool isBust(const std::vector<Card>& hand) const;
    int handValue(const std::vector<Card>& hand) const;
    void displayDealer(const std::vector<Card>& hand) const;
    void displayHand(const std::vector<Card>& hand) const;
};

#endif