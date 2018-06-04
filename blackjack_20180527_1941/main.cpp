//
//  main.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#include <iostream>
#include "Card.hpp"
#include "CardImpl.hpp"
#include "FrenchCard.hpp"

using namespace std;

void printCard(Card* aCard) {
    cout << "F[" << aCard->getFace()->getDescription() << "]"
    << " of S[" << aCard->getSuit()->getDescription() << "]" << endl;
}

int main(int argc, const char * argv[]) {
    Card* aCard = new FrenchCard(
        FrenchCardFace(FrenchCardFaceEnum::ace),
        FrenchCardSuit(FrenchCardSuitEnum::spades)
        );

    printCard(aCard);
    printCard(new FrenchCard(
        FrenchCardFace(FrenchCardFaceEnum::queen),
        FrenchCardSuit(FrenchCardSuitEnum::hearts)
        ));
    
    return 0;
}
