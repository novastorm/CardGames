//
//  TarotDeck.cpp
//  blackjack_20180527_1941
//
//  Created by Bahlreighn on 11/2/19.
//  Copyright © 2019 4MFD. All rights reserved.
//

#include "TarotDeck.hpp"

TarotDeck::TarotDeck() {
    
    std::vector<Card*> newDeck(_count);
    Card* newCard;
    
    int i;
    for (int s=0; s < minorArcanaSuits; s++) {
        for (int f=0; f < minorArcanaFaces; f++) {
            i = s * minorArcanaFaces + f;
            newCard = new TarotMinorArcanaCard::Card(
                                                     TarotMinorArcanaCard::Face(f+1),
                                                     TarotMinorArcanaCard::Suit(s)
                                                     );
            newDeck[i] = newCard;
        }
    }
    
    auto numMinorArcanaCards = minorArcanaSuits * minorArcanaFaces;
    
    for (int f=0; f < majorArcanaFaces; f++) {
        i = numMinorArcanaCards + f;
        newCard = new TarotMajorArcanaCard::Card(
                                                 TarotMajorArcanaCard::Face(f),
                                                 TarotMajorArcanaCard::Suit(0)
                                                 );
        newDeck[i] = newCard;
    }
    
    deck = newDeck;
}

Card* TarotDeck::operator [] (int index) {
    //    assert ((0 <= index) && (index < count));
    
    Card* aCard = deck[index];
    return aCard;
}

int TarotDeck::count() {
    return _count;
}
