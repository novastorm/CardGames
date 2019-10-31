//
//  TarotMajorCard.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#ifndef TarotMajorCard_hpp
#define TarotMajorCard_hpp

#include <array>
#include <cstdio>
#include <string>

#include "CardImpl.hpp"
#include "EnumObjectImpl.hpp"

using namespace std;

enum TarotMajorCardFaceEnum: int {
    the_magician,
    the_high_priestess,
    the_empress,
    the_emperor,
    the_heirophant,
    
    the_lovers,
    the_chariot,
    strength,
    the_hermit,
    wheel_of_fortune,

    justice,
    the_hanged_man,
    death,
    temperance,
    the_devil,

    the_tower,
    the_star,
    the_moon,
    the_sun,
    judgement,

    the_world,
    the_fool
};

class TarotMajorCardFace: public EnumObjectImpl<TarotMajorCardFaceEnum> {
protected:
    const string _descriptions[22] = {
        "the_magician",
        "the_high_priestess",
        "the_empress",
        "the_emperor",
        "the_heirophant",
        
        "the_lovers",
        "the_chariot",
        "strength",
        "the_hermit",
        "wheel_of_fortune",
        
        "justice",
        "the_hanged_man",
        "death",
        "temperance",
        "the_devil",
        
        "the_tower",
        "the_star",
        "the_moon",
        "the_sun",
        "judgement",
        
        "the_world",
        "the_fool"
    };
    
public:
    TarotMajorCardFace(int rawValue): EnumObjectImpl(rawValue) {}
    TarotMajorCardFace(TarotMajorCardFaceEnum value): EnumObjectImpl(value) {}
};

enum TarotMajorCardSuitEnum: int {
    none
};

class TarotMajorCardSuit: public EnumObjectImpl<TarotMajorCardSuitEnum> {
protected:
    const string _descriptions[1] = {
        "none"
    };
    
public:
    TarotMajorCardSuit(int rawValue): EnumObjectImpl(rawValue) {}
    TarotMajorCardSuit(TarotMajorCardSuitEnum value): EnumObjectImpl(value) {}
};


class TarotMajorCard: public CardImpl<TarotMajorCardFace, TarotMajorCardSuit> {
    
public:
    TarotMajorCard(TarotMajorCardFace face, TarotMajorCardSuit suit) noexcept: CardImpl(face, suit) {}
};

#endif /* TarotMajorCard_hpp */
