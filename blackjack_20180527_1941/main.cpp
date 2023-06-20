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
#include "GameHand.hpp"
#include "Random.hpp"

int main(int argc, const char * argv[]) {

    CardDeck* aFrenchCardDeck = new FrenchCardDeck();
    GameDeck* aFrenchCardGameDeck = new GameDeck(aFrenchCardDeck, 6);

//    cout << "French Card Deck" << endl;
//    aFrenchCardGameDeck->drawDeck();

//    CardDeck* tarotDeck = new TarotDeck();
//    GameDeck* aTarotGameDeck = new GameDeck(tarotDeck, 2);
//
//    cout << "Tarot Deck" << endl;
//    aTarotGameDeck->drawDeck();

    GameDeck* aGameDeck = aFrenchCardGameDeck;

    GameHand* aGameHand = new GameHand;
    
    aGameHand->addCard(aGameDeck->deal());
    aGameHand->addCard(aGameDeck->deal());
    aGameHand->addCard(aGameDeck->deal());
    aGameHand->addCard(aGameDeck->deal());
    aGameHand->addCard(aGameDeck->deal());
    
    cout << "Game Hand Cards" << endl;
    vector<Card*> aCardList = aGameHand->getCards();
    for_each(aCardList.begin(), aCardList.end(), [](Card* aCard){
        cout << aCard->description() << endl;
    });

    return 0;
}

