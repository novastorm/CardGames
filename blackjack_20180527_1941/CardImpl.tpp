//
//  CardImpl.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 9/28/23.
//  Copyright © 2023 4MFD. All rights reserved.
//

#include "CardImpl.hpp"

#include <cstdio>
#include <iostream>

#include "Card.hpp"

//template<typename F, typename S>
//class CardImpl: public Card {
//protected:
//    const F* _face;
//    const S* _suit;
//    
//public:
//    CardImpl<F,S> (F face, S suit) {
//        _face = new F(face);
//        _suit = new S(suit);
//    }
//    
//    EnumObject* face() {
//        return new F(*_face);
//    }
//    
//    EnumObject* suit() {
//        return new S(*_suit);
//    }
//    
//    void print() {
//        cout << "F[" << face()->rawValue() << "][" << face()->description() << "]";
//        cout << " of S[" << suit()->rawValue() << "][" << suit()->description() << "]";
//        cout << endl;
//    }
//    
//    string description() {
//        std::string returnValue = (
//            "F["
//            + std::to_string(face()->rawValue()) + "]["
//            + face()->description() + "]"
//            + " of S["
//            + std::to_string(suit()->rawValue()) + "]["
//            + suit()->description() + "]"
//        );
//        return returnValue;
//    }
//};
template<typename F, typename S>
CardImpl<F, S>::CardImpl(F face, S suit) {
    _face = new F(face);
    _suit = new S(suit);
}

template<typename F, typename S>
EnumObject* CardImpl<F, S>::face() {
    return new F(* _face);
}

template<typename F, typename S>
EnumObject* CardImpl<F, S>::suit() {
    return new S(* _suit);
}

template<typename F, typename S>
void CardImpl<F, S>::print() {
    std::cout
    << "F[" << face()->rawValue() << "][" << face()->description() << "]"
    << " of S[" << suit()->rawValue() << "][" << suit()->description() << "]"
    << std::endl;
}

template<typename F, typename S>
std::string CardImpl<F, S>::description() {
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
