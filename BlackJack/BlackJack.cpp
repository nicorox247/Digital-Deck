#include "Card/Card.hpp"
#include "Deck/Deck.hpp"
#include "BlackJack.hpp"
#include <iostream>
#include <vector>

Blackjack::Blackjack(){

    players = 1;
    deck.shuffle();

}
Blackjack::Blackjack(int n){

    players = n;
    deck.shuffle();
}

void Blackjack::play(){

}

bool Blackjack::isBust(const std::vector<Card>& hand) const{

    return handValue(hand) > 21;
}

int Blackjack::handValue(const std::vector<Card>& hand) const{

    int value = 0;
    int aceCount = 0;

    for(const auto card : hand){
        int rank = card.getRank();

        if(rank >= 10){

            switch(rank){
                case 14 : value += 11; aceCount++;
                case 13 :
                case 12 : 
                case 11 :
                case 10 : value += 10;
            }
        }

        else{
            value += rank;
        }
    }

    while(value > 21 && aceCount > 0){

        value -= 10;
        aceCount--;
    }

    return value;
}

void Blackjack::displayDealer(const std::vector<Card>& hand) const{


}

void Blackjack::displayHand(const std::vector<Card>& hand) const{


}