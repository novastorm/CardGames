//
//  Random.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 7/29/21.
//  Copyright © 2021 4MFD. All rights reserved.
//

#include "Random.hpp"

random_device Random::_seed;
mt19937_64 Random::_generator;
bool Random::_isSeeded = false;
