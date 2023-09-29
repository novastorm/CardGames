//
//  CardDeckMixin.hpp
//  blackjack_20180527_1941
//
//  Created by Bahlreighn on 10/31/19.
//  Copyright © 2019 4MFD. All rights reserved.
//

#ifndef CardDeckMixin_hpp
#define CardDeckMixin_hpp

class CardDeckMixin {
    
public:
    int count(){
        return _count;
    }
    
    Card* operator[] (int index) {
        Card* aCard = deck[index];
        return aCard;
    }
};

//#include "CardDeckMixin.tpp"
#endif /* CardDeckMixin_hpp */
