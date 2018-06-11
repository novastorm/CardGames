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
#include "CardImpl.hpp"
#include "FrenchCard.hpp"

using namespace std;

void printCard(Card* aCard) {
    cout << "F[" << aCard->getFace()->getRawValue() << "][" << aCard->getFace()->getDescription() << "]"
    << " of S[" << aCard->getSuit()->getRawValue() << "][" << aCard->getSuit()->getDescription() << "]" << endl;
}

class Random {
protected:
    static random_device _seed;
    static mt19937_64 _generator;

public:

    static int getRandom(int upper, int lower = 0) {
        uniform_int_distribution<> randomizer(lower, upper);
        return randomizer(_generator);
    }
};

random_device Random::_seed;
mt19937_64 Random::_generator;

int main(int argc, const char * argv[]) {
    
    Card* aCard = new FrenchCard(
        FrenchCardFace(FrenchCardFaceEnum::ace),
        FrenchCardSuit(FrenchCardSuitEnum::spades)
        );

    printCard(aCard);
    
    printCard(new FrenchCard(
        FrenchCardFace(FrenchCardFaceEnum::queen),
        FrenchCardSuit(FrenchCardSuitEnum::hearts)
        ));
    
    Card* bCard = aCard;
    printCard(bCard);
    
    Card* cCard(aCard);
    printCard(cCard);
    
    int face;
    int suit;
    for(int i=0; i < 3; ++i) {
        face = Random::getRandom(13, 1);
        suit = Random::getRandom(3, 0);
        
        printCard(new FrenchCard(
            FrenchCardFace(face),
            FrenchCardSuit(suit)
            ));
    }

    return 0;
}
