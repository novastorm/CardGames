//
//  FrenchCardDeck.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 9/28/23.
//  Copyright © 2023 4MFD. All rights reserved.
//

#include "FrenchCardDeck.hpp"

FrenchCardDeck::FrenchCardDeck() {
    
    std::vector<Card*> newDeck(_count);
    
    Card* newCard;
    
    int i;
    
    for (int s=0; s < cardSuits; s++) {
        for (int f=0; f < cardFaces; f++) {
            newCard = new FrenchCard::Card(FrenchCard::Face(f+1), FrenchCard::Suit(s));
            i = s * cardFaces + f;
            newDeck[i] = newCard;
        }
    }
    
    deck = newDeck;
}

Card* FrenchCardDeck::operator [] (int index) {
    Card* aCard = deck[index];
    return aCard;
}

int FrenchCardDeck::count() {
    return _count;
}
