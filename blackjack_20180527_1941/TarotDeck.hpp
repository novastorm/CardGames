//
//  TarotDeck.hpp
//  blackjack_20180527_1941
//
//  Created by Bahlreighn on 11/2/19.
//  Copyright © 2019 4MFD. All rights reserved.
//

#ifndef TarotDeck_hpp
#define TarotDeck_hpp

#include <iostream>
#include <vector>
#include "Card.hpp"
#include "CardDeck.hpp"
#include "TarotMinorArcanaCard.hpp"
#include "TarotMajorArcanaCard.hpp"

using namespace std;

class TarotDeck: public CardDeck {
    
private:
    vector<Card*> deck;
    
    const int minorArcanaFaces = 14;
    const int minorArcanaSuits = 4;
    const int majorArcanaFaces = 22;
    const int count = minorArcanaFaces * minorArcanaSuits + majorArcanaFaces;
    
public:
    TarotDeck() {
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
    
    Card* operator [] (int index) {
        //    assert ((0 <= index) && (index < count));
        
        Card* aCard = deck[index];
        return aCard;
    }
    
    int getCount() {
        return count;
    }
    
};
#endif /* TarotDeck_hpp */
