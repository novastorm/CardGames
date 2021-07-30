//
//  TarotDeck.cpp
//  blackjack_20180527_1941
//
//  Created by Bahlreighn on 11/2/19.
//  Copyright © 2019 4MFD. All rights reserved.
//

#include "TarotDeck.hpp"

using namespace std;

TarotDeck::TarotDeck() {
    count = minorArcanaFaces * minorArcanaSuits + majorArcanaFaces;
    vector<Card*> newDeck(count);
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
