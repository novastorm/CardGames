//
//  main.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#include <iostream>
#include <chrono>
#include <memory>
#include <random>

#include "Card.hpp"
//#include "FrenchCard.hpp"
//#include "TarotMinorArcanaCard.hpp"
//#include "TarotMajorArcanaCard.hpp"
#include "TarotDeck.hpp"

using namespace std;

void printCard(Card* aCard) {
    if (!aCard) { // aCard != NULL
        cout << "No Card" << endl;
        return;
    }
    cout << "F[" << aCard->getFace()->getRawValue() << "][" << aCard->getFace()->getDescription() << "]"
    << " of S[" << aCard->getSuit()->getRawValue() << "][" << aCard->getSuit()->getDescription() << "]" << endl;
}

class Random {
protected:
    static random_device _seed;
    static mt19937_64 _generator;
    static bool _isSeeded;

public:
    static unsigned long genSeed() {
        return (  static_cast<unsigned long>(time(NULL))      << 16 )
        | ( (static_cast<unsigned long>(clock()) & 0xFF) << 8  );
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
};

random_device Random::_seed;
mt19937_64 Random::_generator;
bool Random::_isSeeded = false;

int main(int argc, const char * argv[]) {
        
    TarotDeck* tarotDeck = new TarotDeck();
    
    for (int i=0; i < tarotDeck->count; i++) {
        printCard(tarotDeck->deck[i]);
    }
    
    return 0;
}

