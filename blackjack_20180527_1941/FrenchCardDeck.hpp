//
//  FrenchCardDeck.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 9/28/23.
//  Copyright © 2023 4MFD. All rights reserved.
//

#ifndef FrenchCardDeck_hpp
#define FrenchCardDeck_hpp

#include <iostream>
#include <vector>
#include "Card.hpp"
#include "CardDeck.hpp"
#include "FrenchCard.hpp"

class FrenchCardDeck: public CardDeck {
    
private: 
    std::vector<Card*> deck;
    const int cardFaces = 13;
    const int cardSuits = 4;
    const int _count = cardFaces * cardSuits;

public: 
    
    FrenchCardDeck();
    
    Card* operator [] (int index);
    
    int count();
};

#endif /* FrenchCardDeck_hpp */
