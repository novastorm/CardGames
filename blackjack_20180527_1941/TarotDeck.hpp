//
//  TarotDeck.hpp
//  blackjack_20180527_1941
//
//  Created by Bahlreighn on 11/2/19.
//  Copyright © 2019 4MFD. All rights reserved.
//

#ifndef TarotDeck_hpp
#define TarotDeck_hpp

#include <iostream>
#include <vector>
#include "Card.hpp"
#include "CardDeck.hpp"
#include "CardDeckImpl.hpp"
#include "TarotMinorArcanaCard.hpp"
#include "TarotMajorArcanaCard.hpp"

using namespace std;

class TarotDeck: public CardDeckImpl {
    
private:    
    const int minorArcanaFaces = 14;
    const int minorArcanaSuits = 4;
    const int majorArcanaFaces = 22;
    
public:
    TarotDeck();
};

#endif /* TarotDeck_hpp */
