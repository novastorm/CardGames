//
//  main.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#include <iostream>

//#include "Card.hpp"
#include "FrenchCardDeck.hpp"
#include "TarotDeck.hpp"
#include "GameDeck.hpp"
#include "Random.hpp"


int main(int argc, const char * argv[]) {

    //    CardDeck* aFrenchCardDeck = new FrenchCardDeck();
    //    GameDeck* aFrenchCardGameDeck = new GameDeck(aFrenchCardDeck, 6);
    //
    //    cout << "French Card Deck" << endl;
    //    aFrenchCardGameDeck->drawDeck();

    CardDeck* tarotDeck = new TarotDeck();
    GameDeck* aTarotGameDeck = new GameDeck(tarotDeck, 2);

    cout << "Tarot Deck" << endl;
    aTarotGameDeck->drawDeck();

    return 0;
}

