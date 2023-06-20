//
//  BlackJackGame.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 7/29/21.
//  Copyright © 2021 4MFD. All rights reserved.
//

#ifndef BlackJackGame_hpp
#define BlackJackGame_hpp

//#include <map>
#include "FrenchCardDeck.hpp"
#include "GameDeck.hpp"
#include "GameHand.hpp"
#include "BlackJackPlayer.hpp"

class BlackJackGame {
private:
    GameDeck* aGameDeck;
    GameHand* activeHand;
    vector<GamePlayer*> player_list;
    GamePlayer* dealer;
//    map<FrenchCard::Face, unsigned int, std::hash<int>> valueMap;
public:
    BlackJackGame();
    void dealCardToActiveHand();
    
};

#endif /* BlackJackGame_hpp */

