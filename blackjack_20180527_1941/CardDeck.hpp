//
//  CardDeck.hpp
//  blackjack_20180527_1941
//
//  Created by Bahlreighn on 10/31/19.
//  Copyright © 2019 4MFD. All rights reserved.
//

#ifndef CardDeck_hpp
#define CardDeck_hpp

#include <cstdio>

#include "Card.hpp"

class CardDeck {
public: virtual int count() =0;
public: virtual Card* operator[] (int index) =0;
// add card
// show card
// remove card
};

#endif /* CardImpl_hpp */
