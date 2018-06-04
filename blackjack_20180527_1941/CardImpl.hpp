//
//  CardImpl.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#ifndef CardImpl_hpp
#define CardImpl_hpp

#include <cstdio>

#include "Card.hpp"

template<typename F, typename S>
class CardImpl: public Card {
public:
    F* _face;
    S* _suit;
    
    CardImpl<F,S> (F face, S suit) {
        _face = new F(face);
        _suit = new S(suit);
    }
    
    EnumObject* getFace() { return new F(*_face); }
    EnumObject* getSuit() { return new S(*_suit); }
    
    CardImpl<F,S>  operator= (const CardImpl<F,S>& object) {
        return CardImpl(object._face, object._suit);
    };
};

#endif /* CardImpl_hpp */
