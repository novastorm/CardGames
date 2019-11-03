//
//  CardDeckImpl.hpp
//  blackjack_20180527_1941
//
//  Created by Bahlreighn on 10/31/19.
//  Copyright © 2019 4MFD. All rights reserved.
//

#ifndef CardDeckImpl_hpp
#define CardDeckImpl_hpp

#include <stdio.h>

#include "CardDeck.hpp"

class CardDeckImpl: public CardDeck {
protected: Card** cardDeck;
protected: int count;
public:
    CardDeckImpl() {}
    CardDeckImpl(Card** cards, int count, int decks) {}
    
    // add card
    // show card
    // remove card
    
};

#endif /* CardDeckImpl_hpp */
