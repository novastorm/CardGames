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
#include <iostream>

#include "Card.hpp"

template<typename F, typename S>
class CardImpl: public Card {
protected:
    const F* face;
    const S* suit;
    
public:
    CardImpl<F,S> (F newFace, S newSuit) {
        face = new F(newFace);
        suit = new S(newSuit);
    }
    
    string description() {
        std::string returnValue = (
            "F["
            + std::to_string(face->rawValue()) + "]["
            + face->description() + "]"
            + " of S["
            + std::to_string(suit->rawValue()) + "]["
            + suit->description() + "]"
        );
        return returnValue;
    }
};

#endif /* CardImpl_hpp */
