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

namespace FrenchCardFaceEnum {
    enum Enum: int {
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
}

class FrenchCardFace: public EnumObjectImpl<FrenchCardFaceEnum::Enum> {
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
    FrenchCardFace(int rawValue): EnumObjectImpl(rawValue) {}
    FrenchCardFace(FrenchCardFaceEnum::Enum value): EnumObjectImpl(value) {}
};

namespace FrenchCardSuitEnum {
    enum Enum: int {
        spades, hearts, clubs, diamonds
    };
}

class FrenchCardSuit: public EnumObjectImpl<FrenchCardSuitEnum::Enum> {
protected:
    const string _descriptions[4] = {
        "spades",
        "hearts",
        "clubs",
        "diamonds"
    };
    
public:
    FrenchCardSuit(int rawValue): EnumObjectImpl(rawValue) {}
    FrenchCardSuit(FrenchCardSuitEnum::Enum value): EnumObjectImpl(value) {}
};


class FrenchCard: public CardImpl<FrenchCardFace, FrenchCardSuit> {
    
public:
    FrenchCard(FrenchCardFace face, FrenchCardSuit suit) noexcept: CardImpl(face, suit) {}
};

#endif /* FrenchCard_hpp */
