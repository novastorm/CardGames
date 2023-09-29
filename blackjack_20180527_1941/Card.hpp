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

class Card {
public:
    virtual EnumObject* face() =0;
    virtual EnumObject* suit() =0;
    virtual void print() =0;
    virtual std::string description() =0;
};

#endif /* Card_hpp */
