//
//  TarotMinorCard.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#ifndef TarotMinorCard_hpp
#define TarotMinorCard_hpp

#include <array>
#include <cstdio>
#include <string>

#include "CardImpl.hpp"
#include "EnumObjectImpl.hpp"

using namespace std;

namespace TarotMinorArcanaCard {

enum FaceEnum {
    ace=1, one=1,
    two=2,
    three=3,
    four=4,
    five=5,
    six=6,
    seven=7,
    eight=8,
    nine=9,
    ten=10,
    page=11, jack=11,
    knight=12,
    queen=13,
    king=14
};

class Face: public EnumObjectImpl<TarotMinorArcanaCard::FaceEnum> {
protected:
    const string _descriptions[15] = {
        "invalid",
        "ace",
        "two",
        "three",
        "four",
        
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        
        "ten",
        "page",
        "knight",
        "queen",
        "king"
    };
    
public:
    Face(int rawValue): EnumObjectImpl(rawValue) {}
    Face(TarotMinorArcanaCard::FaceEnum value): EnumObjectImpl(value) {}
};

enum SuitEnum: int {
    swords,
    chalices,
    pentacles,
    wands
};

class Suit: public EnumObjectImpl<TarotMinorArcanaCard::SuitEnum> {
protected:
    const string _descriptions[4] = {
        "swords",
        "chalices",
        "pentacles",
        "wands"
    };
    
public:
    Suit(int rawValue): EnumObjectImpl(rawValue) {}
    Suit(TarotMinorArcanaCard::SuitEnum value): EnumObjectImpl(value) {}
};


class Card: public CardImpl<Face, Suit> {
    
public:
    Card(Face face, Suit suit) noexcept: CardImpl(face, suit) {}
    
    void print() {
        cout << "[" << face()->description() << "]";
        cout << " of [" << suit()->description() << "]";
        cout << endl;
    }
    
    string description() {
        return
            "["
            + face()->description() + "]"
            + " of ["
            + suit()->description() + "]"
        ;
    }
};

}
#endif /* TarotMinorCard_hpp */
