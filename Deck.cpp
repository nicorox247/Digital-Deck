#include <vector>
#include "Deck.hpp"
using namespace std;


//Constructor
Deck::Deck(){
    // for(int s = 2; s < 14; s++){

    // }
}

//Member Functions
void Deck::shuffle(){

}
Card Deck::dealCard(){

    return Card(Card::Ace, Card::Spades);
}
void Deck::reset(){


}
bool Deck::isEmpty() const{

    return (card_count == 0);
}

