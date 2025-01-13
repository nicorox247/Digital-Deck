#include <iostream>
//#include "Card/Card.hpp"
//#include "Deck/Deck.hpp"
#include "Blackjack/Blackjack.hpp"
using namespace std;

int main(){

    // Card card1(Card::Ace, Card::Spades);
    // Card card2(Card::Three, Card::Diamonds);

    // cout << card1 << endl;
    // cout << card1.toString() << endl;
    // cout << card2 << endl;

    // cout << card1.rankToString() << " " << card1.suitToString() << endl << endl;

    // Deck deck = Deck();

    // cout << deck.toString() << endl;;

    // deck.shuffle();

    // cout << "Shuffling..." << endl;
    // cout << deck.toString() << endl;
    // cout << "Dealing Card..." << endl;
    // cout << deck.dealCard() << endl;

    Deck deck1 = Deck();

    Blackjack game = Blackjack();

    vector<Card> hand = {Card(Card::Ace, Card::Spades), Card(Card::King, Card::Hearts)};

    game.displayHand(hand);

    cout << game.handValue(hand) << endl;

    hand.emplace_back(Card::Ace, Card::Hearts);

    game.displayHand(hand);
    cout << game.handValue(hand) << endl;
}