//
//  CardDeckMixin.cpp
//  blackjack_20180527_1941
//
//  Created by Bahlreighn on 10/31/19.
//  Copyright © 2019 4MFD. All rights reserved.
//

#include "CardDeckMixin.hpp"


Card* CardDeckMixin::operator [] (int index) {
    Card* aCard = deck[index];
    return aCard;
}

int CardDeckMixin::count() {
    return _count;
}
