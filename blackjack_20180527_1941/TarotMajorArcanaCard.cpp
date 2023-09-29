//
//  TarotMajorArcanaCard.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 9/29/23.
//  Copyright © 2023 4MFD. All rights reserved.
//

#include "TarotMajorArcanaCard.hpp"

namespace TarotMajorArcanaCard {

void Card::print() {
    std::cout
    << "[" << face()->description() << "]"
    << std::endl
    ;
}

std::string Card::description() {
    return "[" + face()->description() + "]";
}

}
