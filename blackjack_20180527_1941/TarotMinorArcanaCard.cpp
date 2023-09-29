//
//  TarotMinorArcanaCard.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 9/29/23.
//  Copyright © 2023 4MFD. All rights reserved.
//

#include <stdio.h>

#include "TarotMinorArcanaCard.hpp"


namespace TarotMinorArcanaCard {

void Card::print() {
    std::cout
    << "[" << face()->description() << "]"
    << " of [" << suit()->description() << "]"
    << std::endl
    ;
}

std::string Card::description() {
    return
        "["
        + face()->description() + "]"
        + " of ["
        + suit()->description() + "]"
    ;
}

}
