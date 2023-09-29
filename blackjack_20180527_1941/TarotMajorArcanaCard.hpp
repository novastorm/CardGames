//
//  TarotMajorArcanaCard.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#ifndef TarotMajorArcanaCard_hpp
#define TarotMajorArcanaCard_hpp

#include <array>
#include <cstdio>
#include <string>

#include "CardImpl.hpp"
#include "EnumObjectImpl.hpp"


namespace TarotMajorArcanaCard {

enum FaceEnum {
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

class Face: public EnumObjectImpl<FaceEnum> {
protected:
    const std::string _descriptions[22] = {
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
    Face(int rawValue): EnumObjectImpl(rawValue) {}
    Face(FaceEnum value): EnumObjectImpl(value) {}
};

enum SuitEnum: int {
    none
};

class Suit: public EnumObjectImpl<SuitEnum> {
protected:
    const std::string _descriptions[1] = {
        "none"
    };
    
public:
    Suit(int rawValue): EnumObjectImpl(rawValue) {}
    Suit(SuitEnum value): EnumObjectImpl(value) {}
};


class Card: public CardImpl<Face, Suit> {
    
public:
    Card(Face face, Suit suit) noexcept: CardImpl(face, suit) {}
    
    void print() override;
    
    std::string description() override;
};

}

#endif /* TarotMajorArcanaCard_hpp */
