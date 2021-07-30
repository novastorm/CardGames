//
//  GameDeck.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 7/29/21.
//  Copyright © 2021 4MFD. All rights reserved.
//

#ifndef GameDeck_hpp
#define GameDeck_hpp

#include <vector>
#include "Card.hpp"
#include "IntrinsicCardDeck.hpp"

class GameDeck {
private:
    vector<Card*> shoe;
    int numberOfCards;
    int nextIndex;
public:
    GameDeck(IntrinsicCardDeck* intrinsicDeck, int numberOfDecks);
    
    void shuffle();
    
    Card* deal();
    
    void drawDeck();
};
        
#endif /* GameDeck_hpp */
