//
//  GameHand.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 7/29/21.
//  Copyright © 2021 4MFD. All rights reserved.
//

#ifndef GameHand_hpp
#define GameHand_hpp

#include <vector>
#include "Card.hpp"

class GameHand {
private:
    vector<Card*> card_list;
public:
    auto getCards() {
        return card_list;
    }
    void addCard(Card* aCard) {
        card_list.push_back(aCard);
    }
};
#endif /* GameHand_hpp */
