//
//  Random.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 7/29/21.
//  Copyright © 2021 4MFD. All rights reserved.
//

#ifndef Random_hpp
#define Random_hpp

#include <stdio.h>
#include <random>

using namespace std;

class Random {
protected:
    static random_device _seed;
    static mt19937_64 _generator;
    static bool _isSeeded;

public:
    static unsigned long genSeed() {
        return (static_cast<unsigned long>(time(NULL)) << 16)
        | ( (static_cast<unsigned long>(clock()) & 0xFF) << 8);
//        | ( (static_cast<unsigned long>(seed_count++) & 0xFF) );
    }
    
    static int getRandom(int upper, int lower = 0) {
        if (!_isSeeded) {
            _generator.seed(_seed());
            _isSeeded = true;
        }
        uniform_int_distribution<> randomizer(lower, upper);
        return randomizer(_generator);
    }
    static mt19937_64 generator() {
        if (!_isSeeded) {
            _generator.seed(_seed());
            _isSeeded = true;
        }
        return _generator;
    }
};

#endif /* Random_hpp */
