//
//  CardDeckImpl.cpp
//  blackjack_20180527_1941
//
//  Created by Bahlreighn on 10/31/19.
//  Copyright © 2019 4MFD. All rights reserved.
//

#include "CardDeckImpl.hpp"

Card* CardDeckImpl::operator [] (int index) {
    //    assert ((0 <= index) && (index < count));    
    Card* aCard = deck[index];
    return aCard;
}

int CardDeckImpl::getCount() {
    return count;
}
