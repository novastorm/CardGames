//
//  FrenchCardDeck.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 7/29/21.
//  Copyright © 2021 4MFD. All rights reserved.
//

#include "FrenchCardDeck.hpp"

FrenchCardDeck::FrenchCardDeck() {
    count = frenchCardFaces * frenchCardSuits;
    deck = vector<Card*>(count);
    Card* newCard;
    
    int i;
    for (int s=0; s < frenchCardSuits; s++) {
        for (int f=0; f < frenchCardFaces; f++) {
            i = s * frenchCardFaces + f;
            newCard = new FrenchCard::Card(
                FrenchCard::Face(f),
                FrenchCard::Suit(s)
            );
            deck[i] = newCard;
        }
    }
}
