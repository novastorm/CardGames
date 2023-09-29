//
//  CardDeckMixin.hpp
//  blackjack_20180527_1941
//
//  Created by Bahlreighn on 10/31/19.
//  Copyright © 2019 4MFD. All rights reserved.
//

#ifndef CardDeckMixin_hpp
#define CardDeckMixin_hpp

#include <stdio.h>

#include "CardDeck.hpp"

class CardDeckMixin: public virtual CardDeck {

protected:
    std::vector<Card*> deck;
    const int _count;
    
public:
    CardDeckMixin();
    
    int count();
    Card* operator[] (int index);
};

//#include "CardDeckMixin.tpp"
#endif /* CardDeckMixin_hpp */
