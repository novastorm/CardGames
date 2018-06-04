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

template<typename F, typename S>
class Card {
public:
    F getFace();
    S getSuit();
};

#endif /* Card_hpp */
