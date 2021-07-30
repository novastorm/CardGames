//
//  main.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#include <iostream>

//#include "Card.hpp"
#include "TarotDeck.hpp"
#include "GameDeck.hpp"
#include "Random.hpp"


int main(int argc, const char * argv[]) {
        
    TarotDeck* tarotDeck = new TarotDeck();
    GameDeck* aTarotGameDeck = new GameDeck(tarotDeck, 2);

    cout << "Tarot Deck" << endl;
    aTarotGameDeck->drawDeck();

//    TarotDeck* tarotDeck = new TarotDeck();
//    GameDeck* aTarotGameDeck = new GameDeck(tarotDeck, 2);
//
//    cout << "Tarot Deck" << endl;
//    aTarotGameDeck->drawDeck();

    return 0;
}

