//
//  FrenchCard.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#ifndef FrenchCard_hpp
#define FrenchCard_hpp

#include <array>
#include <cstdio>
#include <string>

#include "CardImpl.hpp"
#include "EnumObjectImpl.hpp"

using namespace std;

namespace FrenchCard {

enum FaceEnum: int {
    joker=0,
    one=1, ace=1,
    two=2, duece=2,
    three=3,
    four=4,
    five=5,
    six=6,
    seven=7,
    eight=8,
    nine=9,
    ten=10,
    jack=11,
    queen=12,
    king=13
};

class Face: public EnumObjectImpl<FaceEnum> {
protected:
    const string _descriptions[14] = {
        "joker",
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
        "jack",
        "queen",
        "king"
    };
    
public:
    Face(int rawValue): EnumObjectImpl(rawValue) {}
    Face(FaceEnum value): EnumObjectImpl(value) {}
};

enum SuitEnum: int {
    spades, hearts, clubs, diamonds
};

class Suit: public EnumObjectImpl<SuitEnum> {
protected:
    const string _descriptions[4] = {
        "spades",
        "hearts",
        "clubs",
        "diamonds"
    };
    
public:
    Suit(int rawValue): EnumObjectImpl(rawValue) {}
    Suit(SuitEnum value): EnumObjectImpl(value) {}
};


class Card: public CardImpl<Face, Suit> {
    
public:
    Card(Face face, Suit suit) noexcept: CardImpl(face, suit) {}
    
    void drawCard() {
        cout << "[" << face->description() << "]";
        cout << " of [" << suit->description() << "]";
        cout << endl;
    }
    string description() {
        return
            "["
            + face->description() + "]"
            + " of ["
            + suit->description() + "]"
        ;
    }
};

}
#endif /* FrenchCard_hpp */
