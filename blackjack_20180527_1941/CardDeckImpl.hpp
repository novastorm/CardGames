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
#include <vector>

#include "IntrinsicCardDeck.hpp"

class CardDeckImpl: public IntrinsicCardDeck {
protected:
    vector<Card*> deck;
    int count;
    
public:
    Card* operator [] (int index);
    int getCount();
};

#endif /* CardDeckImpl_hpp */
