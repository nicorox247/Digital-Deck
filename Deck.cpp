#include <vector>
#include <random>
#include <sstream>
#include "Deck.hpp"
using namespace std;


//Constructor
Deck::Deck(){
    reset();
}

//Member Functions
void Deck::shuffle(){

    std::random_device rd;  // Seed for the random number generator
    std::mt19937 g(rd());  // Mersenne Twister random number generator
    std::shuffle(currentDeck.begin(), currentDeck.end(), g);  // Shuffle the cards
    deckIndex = 0;  // Reset the current index after shuffling
}

Card Deck::dealCard(){

    if(isEmpty()){
        throw std::out_of_range("No cards left in the deck");
    }

    auto card = currentDeck.back();
    currentDeck.pop_back();
    return card;
}
void Deck::reset(){

    currentDeck.clear();

    for(int suit = Card::Hearts; suit <= Card::Spades; suit++){
        for(int rank = Card::Two; rank <= Card::Ace; rank++)
            currentDeck.emplace_back(static_cast<Card::Rank>(rank), static_cast<Card::Suit>(suit));
            card_count++;
    }
    
    deckIndex = 0;

}

std::string Deck::toString(){

    ostringstream out;
    for(auto it = currentDeck.end() - 1; it >= currentDeck.begin(); --it){

        out << it->toString() << endl;
    }

    return out.str();

}

bool Deck::isEmpty() const{

    return (card_count == 0);
}

