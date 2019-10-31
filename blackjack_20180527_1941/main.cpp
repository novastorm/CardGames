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
#include "FrenchCard.hpp"
#include "TarotMinorCard.hpp"
#include "TarotMajorCard.hpp"

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
    int i;
    for(i=0; i < 3; ++i) {
        face = Random::getRandom(13, 1);
        suit = Random::getRandom(3, 0);
        
        aCard = new FrenchCard(
                    FrenchCardFace(face),
                    FrenchCardSuit(suit)
                    );
        
        printCard(aCard);
    }
    
    cout << "Tarot Deck" << endl;
        
    cout << "Tarot Deck Add Minor Arcana" << endl;

    int numTarotMinorFaces = 14;
    int numTarotMinorSuits = 4;
    int numTarotMajorFaces = 22;
    
    Card* deck[numTarotMinorFaces * numTarotMinorSuits + numTarotMajorFaces];
    
    for (int s=0; s < numTarotMinorSuits; s++) {
        for (int f=0; f < numTarotMinorFaces; f++) {
            i = s * numTarotMinorFaces + f;
            deck[i] = new TarotMinorCard(
                TarotMinorCardFace(f+1),
                TarotMinorCardSuit(s)
                );
        }
    }
    
    int numCards;
    numCards = numTarotMinorSuits * numTarotMinorFaces;
    for (i=0; i < numCards; i++) {
        printCard(deck[i]);
    }

    cout << "Tarot Deck Add Major Arcana" << endl;

    Card* newCard;
    for (int f=0; f < numTarotMajorFaces; f++) {
        i = numCards + f;
        newCard = new TarotMajorCard(
            TarotMajorCardFace(f),
            TarotMajorCardSuit(0)
            );
        printCard(newCard);
        deck[i] = newCard;
    }
    
    cout << "Tarot Deck with Major Arcana" << endl;

    numCards = numTarotMinorSuits * numTarotMinorFaces + numTarotMajorFaces;
    for (i=0; i < numCards; i++) {
        printCard(deck[i]);
    }

    return 0;
}
