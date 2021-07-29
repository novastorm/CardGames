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
#include "TarotDeck.hpp"

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

random_device Random::_seed;
mt19937_64 Random::_generator;
bool Random::_isSeeded = false;

class GameDeck {
private:
    vector<Card*> _shoe;
    int numberOfCards;
    int nextIndex;
public:
    GameDeck(CardDeck* intrinsicDeck, int numberOfDecks) {
        numberOfCards = numberOfDecks * (*intrinsicDeck).count();
        vector<Card*> newShoe(numberOfCards);
        
        for (int i=0; i<numberOfCards; i++) {
            int cardIndex = i % (*intrinsicDeck).count();
            newShoe[i] = (*intrinsicDeck)[cardIndex];
        }
        _shoe = newShoe;
        shuffle();
    }
    
    void shuffle() {
        std::shuffle(std::begin(_shoe), std::end(_shoe), Random::generator());
        nextIndex = 0;
    }
    
    Card* deal() {
        Card* card = _shoe[nextIndex];
        nextIndex += 1;
        return card;
    }
    
    void drawDeck() {
        for (int i=0; i < numberOfCards; i++) {
            Card* card = _shoe[i];
            cout << card->description() << endl;
        }
    }
};

int main(int argc, const char * argv[]) {
        
    TarotDeck* tarotDeck = new TarotDeck();
    
    GameDeck* aTarotGameDeck = new GameDeck(tarotDeck, 2);
    aTarotGameDeck->drawDeck();
    
    return 0;
}

