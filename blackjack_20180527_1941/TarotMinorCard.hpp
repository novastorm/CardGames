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

namespace TarotMinorCardFaceEnum {
    enum Enum {
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
}

class TarotMinorCardFace: public EnumObjectImpl<TarotMinorCardFaceEnum::Enum> {
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
    TarotMinorCardFace(int rawValue): EnumObjectImpl(rawValue) {}
    TarotMinorCardFace(TarotMinorCardFaceEnum::Enum value): EnumObjectImpl(value) {}
};

namespace TarotMinorCardSuitEnum {
    enum Enum: int {
        swords,
        chalices,
        pentacles,
        wands
    };
}

class TarotMinorCardSuit: public EnumObjectImpl<TarotMinorCardSuitEnum::Enum> {
protected:
    const string _descriptions[4] = {
        "swords",
        "chalices",
        "pentacles",
        "wands"
    };
    
public:
    TarotMinorCardSuit(int rawValue): EnumObjectImpl(rawValue) {}
    TarotMinorCardSuit(TarotMinorCardSuitEnum::Enum value): EnumObjectImpl(value) {}
};


class TarotMinorCard: public CardImpl<TarotMinorCardFace, TarotMinorCardSuit> {
    
public:
    TarotMinorCard(TarotMinorCardFace face, TarotMinorCardSuit suit) noexcept: CardImpl(face, suit) {}
};

#endif /* TarotMinorCard_hpp */
