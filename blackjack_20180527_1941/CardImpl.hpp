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
    const F* _face;
    const S* _suit;
    
public:
    CardImpl<F,S> (F face, S suit) {
        _face = new F(face);
        _suit = new S(suit);
    }
    
    EnumObject* face() {
        return new F(*_face);
    }
    
    EnumObject* suit() {
        return new S(*_suit);
    }
    
    void print() {
        cout << "F[" << face()->rawValue() << "][" << face()->description() << "]";
        cout << " of S[" << suit()->rawValue() << "][" << suit()->description() << "]";
        cout << endl;
    }
    
    string description() {
        std::string returnValue = (
            "F["
            + std::to_string(face()->rawValue()) + "]["
            + face()->description() + "]"
            + " of S["
            + std::to_string(suit()->rawValue()) + "]["
            + suit()->description() + "]"
        );
        return returnValue;
    }
};

#endif /* CardImpl_hpp */
