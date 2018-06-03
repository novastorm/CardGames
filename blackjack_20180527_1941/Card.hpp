//
//  Card.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp

#include <cstdio>

#include "EnumObject.hpp"
#include "EnumObjectImpl.hpp"

//template <class T>
//class CardFaceImpl: public EnumObjectImpl<T> {
//public:
//    CardFaceImpl(int rawValue): EnumObjectImpl<T>(rawValue) {}
//    CardFaceImpl(T value): EnumObjectImpl<T>(value) {}
//};
//
//template<typename T>
//class CardSuitImpl: public EnumObjectImpl<T> {
//public:
//    CardSuitImpl(int rawValue): EnumObjectImpl<T>(rawValue) {}
//    CardSuitImpl(T value): EnumObjectImpl<T>(value) {}
//};

template<typename F, typename S>
class Card {
public:
    F _face;
    S _suit;
    
    Card<F,S> (F face, S suit): _face(face), _suit(suit) {}
    
    F getFace() { return _face; }
    S getSuit() { return _suit; }
    
    Card<F,S>  operator= (const Card<F,S>& object) {
        return Card(object._face, object._suit);
    };
};

#endif /* Card_hpp */
