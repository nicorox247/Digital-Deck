#include <iostream>
#include "Card.hpp"
#include "Deck.hpp"
using namespace std;

int main(){

    Card card1(Card::Ace, Card::Spades);
    Card card2(Card::Three, Card::Diamonds);

    cout << card1 << endl;
    cout << card1.toString() << endl;
    cout << card2 << endl;

    cout << card1.rankToString() << " " << card1.suitToString() << endl << endl;

    Deck deck = Deck();

    cout << deck.toString() << endl;;

    deck.shuffle();

    cout << "Shuffling..." << endl;
    cout << deck.toString() << endl;
    cout << "Dealing Card..." << endl;
    cout << deck.dealCard() << endl;
}