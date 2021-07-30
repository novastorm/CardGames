//
//  FrenchCardDeck.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 7/29/21.
//  Copyright © 2021 4MFD. All rights reserved.
//

#ifndef FrenchCardDeck_hpp
#define FrenchCardDeck_hpp

#include "CardDeckImpl.hpp"
#include "FrenchCard.hpp"


class FrenchCardDeck: public CardDeckImpl {
    
private:
    const int frenchCardFaces = 13;
    const int frenchCardSuits = 4;
    
public:
    FrenchCardDeck();
};


#endif /* FrenchCardDeck_hpp */
