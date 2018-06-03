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

#include "Assignable.hpp"
#include "Card.hpp"
#include "EnumObject.hpp"
#include "EnumObjectImpl.hpp"

using namespace std;

enum FrenchCardFaceEnum {
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

class FrenchCardFace: public EnumObjectImpl<FrenchCardFaceEnum> {
public:
    const string faceDescriptions[14] = {
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
    
    FrenchCardFace(int rawValue): EnumObjectImpl(rawValue) {}
    FrenchCardFace(FrenchCardFaceEnum value): EnumObjectImpl(value) {}
    
    int getRawValue() const {
        return EnumObjectImpl::getRawValue();
    }
    
    string getDescription() const {
        return EnumObjectImpl::getDescription();
    }
    
};

enum FrenchCardSuitEnum {
    spade, heart, club, diamond
};

class FrenchCardSuit: public EnumObjectImpl<FrenchCardSuitEnum> {
public:
    const string descriptions[4] = {
        "spades",
        "hearts",
        "clubs",
        "diamonds"
    };
    
    FrenchCardSuit(int rawValue): EnumObjectImpl(rawValue) {}
    FrenchCardSuit(FrenchCardSuitEnum value): EnumObjectImpl(value) {}
    
//    FrenchCardSuit operator= (const FrenchCardSuit& object) {
//        return FrenchCardSuit(object.getRawValue());
//    }
};


class FrenchCard: public Card<FrenchCardFace, FrenchCardSuit> {
    
public:

    FrenchCard(FrenchCardFace face, FrenchCardSuit suit) noexcept: Card(face, suit) {}

};

#endif /* FrenchCard_hpp */
