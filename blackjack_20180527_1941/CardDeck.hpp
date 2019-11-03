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
public: virtual Card* getCard() =0;
public: virtual Card* peekCard() = 0;
};

#endif /* CardImpl_hpp */
