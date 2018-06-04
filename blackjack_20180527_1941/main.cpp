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
    cout << "F[" << aCard->getFace()->getDescription() << "]"
    << " of S[" << aCard->getSuit()->getDescription() << "]" << endl;
}

//class Random {
//private:
//    static void seedRandomGenerator() {
//        if (_seed != 0) { return; }
//
//        _seed = unsigned(chrono::system_clock::now().time_since_epoch().count());
//        mt19937 generator(_seed);
//    }
//protected:
//    static unsigned _seed;
//public:
//    static void config() {
//        _seed = 0;
//    }
//    static int random(int upper, int lower = 0) {
//        seedRandomGenerator();
//        mt19937 generator;
//        int r, min;
//
//        min = 0;
//
//        for(;;) {
//            r = generator();
//            if (r >= min) {
//                break;
//            }
//        }
//        cout << "r: " << r << endl;
//        return (r % upper) + lower;
//    }
//};

int main(int argc, const char * argv[]) {
    
//    Random::config();
    
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
    
//    cout << "G: " << Random::random(4, 1) << endl;
    
    printCard(new FrenchCard(
        FrenchCardFace(FrenchCardFaceEnum::queen),
        FrenchCardSuit(FrenchCardSuitEnum::hearts)
        ));

    return 0;
}
