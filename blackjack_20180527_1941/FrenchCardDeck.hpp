//
//  FrenchCardDeck.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 9/28/23.
//  Copyright © 2023 4MFD. All rights reserved.
//

#ifndef FrenchCardDeck_hpp
#define FrenchCardDeck_hpp

#include <iostream>
#include <vector>
#include "Card.hpp"
#include "CardDeck.hpp"
#include "FrenchCard.hpp"

using namespace std;

class FrenchCardDeck: public CardDeck {
    
private: 
    vector<Card*> deck;
    const int cardFaces = 13;
    const int cardSuits = 4;
    
public: 
    const int _count = cardFaces * cardSuits;
    
    FrenchCardDeck() {
        vector<Card*> newDeck(_count);
        
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
    
    Card* operator [] (int index) {
        Card* aCard = deck[index];
        return aCard;
    }
    
    int count() {
        return _count;
    }
};

#endif /* FrenchCardDeck_hpp */
