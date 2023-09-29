//
//  FrenchCard.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#include "FrenchCard.hpp"

#include <cstdio>


namespace FrenchCard {

    void Card::print() {
        std::cout
            << "[" << face()->description() << "]"
            << " of [" << suit()->description() << "]"
            << std::endl;
    }

    std::string Card::description() {
        return
            "[" + face()->description() + "]"
            + " of [" + suit()->description() + "]"
            ;
    }

}
