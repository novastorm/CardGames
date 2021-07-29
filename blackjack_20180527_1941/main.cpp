//
//  main.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#include <iostream>

#include "Card.hpp"
#include "TarotDeck.hpp"
#include "Random.hpp"

using namespace std;

class GameDeck {
private:
    vector<Card*> _shoe;
    int numberOfCards;
    int nextIndex;
public:
    GameDeck(CardDeck* intrinsicDeck, int numberOfDecks) {
        numberOfCards = numberOfDecks * (*intrinsicDeck).getCount();
        vector<Card*> newShoe(numberOfCards);
        
        for (int i=0; i<numberOfCards; i++) {
            int cardIndex = i % (*intrinsicDeck).getCount();
            newShoe[i] = (*intrinsicDeck)[cardIndex];
        }
        _shoe = newShoe;
        shuffle();
    }
    
    void shuffle() {
        std::shuffle(std::begin(_shoe), std::end(_shoe), Random::generator());
        nextIndex = 0;
    }
    
    Card* deal() {
        Card* card = _shoe[nextIndex];
        nextIndex += 1;
        return card;
    }
    
    void drawDeck() {
        for (int i=0; i < numberOfCards; i++) {
            Card* card = _shoe[i];
            cout << card->description() << endl;
        }
    }
};

int main(int argc, const char * argv[]) {
        
    TarotDeck* tarotDeck = new TarotDeck();
    GameDeck* aTarotGameDeck = new GameDeck(tarotDeck, 2);

    cout << "Tarot Deck" << endl;
    aTarotGameDeck->drawDeck();

//    TarotDeck* tarotDeck = new TarotDeck();
//    GameDeck* aTarotGameDeck = new GameDeck(tarotDeck, 2);
//
//    cout << "Tarot Deck" << endl;
//    aTarotGameDeck->drawDeck();

    return 0;
}

