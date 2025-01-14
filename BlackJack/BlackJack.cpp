#include "Blackjack.hpp"
#include <iostream>
#include <string>
using namespace std;

Blackjack::Blackjack(){

    players = 1;
    deck.shuffle();

}
Blackjack::Blackjack(int n){

    players = n;
    playerHands.resize(n);
    deck.shuffle();
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
                case 14 : value += 11; aceCount++; break;
                case 13 :
                case 12 : 
                case 11 :
                case 10 : value += 10; break;
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

void Blackjack::displayHand(const std::vector<Card>& hand, const std::string& name) const{

    std::cout << name << "\'s Hand:" << std::endl;
    for(auto c : hand){

        std::cout << c << std::endl;
    }
}

void Blackjack::playerTurn(int playerIndex){

    cout << "It's Player " << playerIndex + 1 << "\'s Turn: " << endl;
    vector<Card>* hand = &playerHands[playerIndex];

    while(true){

        displayHand(*hand, "Player " + std::to_string(playerIndex + 1));
        if(handValue(*hand) == 21) {return;}

        cout << "Hit, or Stand? (h/s)" << endl;

        char choice = 's';
        cin >> choice;

        if(choice == 's'){
            break;
        }
        else{

            hand->push_back(deck.dealCard());
            if(isBust(*hand)){
                displayHand(*hand, "Player " + std::to_string(playerIndex + 1));
                cout << "Bust!" << endl;
                return;
            }
        }

    }
}

void Blackjack::dealerTurn(){

    cout << "\nDealer's turn:" << endl;
    while (handValue(dealerHand) < 17) {
        dealerHand.push_back(deck.dealCard());
    }
    displayHand(dealerHand, "Dealer");
}

void Blackjack::play(){

}
