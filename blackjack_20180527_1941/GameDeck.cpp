//
//  GameDeck.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 7/29/21.
//  Copyright © 2021 4MFD. All rights reserved.
//

#include "GameDeck.hpp"

#include <iostream>

#include "Random.hpp"

using namespace std;

GameDeck::GameDeck(IntrinsicCardDeck* intrinsicDeck, int numberOfDecks) {
    numberOfCards = numberOfDecks * (*intrinsicDeck).getCount();
    vector<Card*> newShoe(numberOfCards);
    
    for (int i=0; i<numberOfCards; i++) {
        int cardIndex = i % (*intrinsicDeck).getCount();
        newShoe[i] = (*intrinsicDeck)[cardIndex];
    }
    shoe = newShoe;
    shuffle();
}

void GameDeck::shuffle() {
    std::shuffle(std::begin(shoe), std::end(shoe), Random::generator());
    nextIndex = 0;
}

Card* GameDeck::deal() {
    Card* card = shoe[nextIndex];
    nextIndex += 1;
    return card;
}

void GameDeck::drawDeck() {
    for (int i=0; i < numberOfCards; i++) {
        Card* card = shoe[i];
        cout << card->description() << endl;
    }
}
