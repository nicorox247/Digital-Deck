#include <iostream>
#include "Card.hpp"
using namespace std;

int main(){

    Card card1(Card::Ace, Card::Spades);
    Card card2(Card::Three, Card::Diamonds);
    //Card card3(1, 3);

    cout << card1 << endl;
    cout << card1.toString() << endl;
    cout << card2 << endl;

   cout << card1.rankToString() << " " << card1.suitToString() << endl;

}