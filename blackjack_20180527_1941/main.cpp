//
//  main.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#include <iostream>
#include "Card.hpp"
#include "FrenchCard.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    FrenchCard::Card aCard = FrenchCard(
        FrenchCardFace(FrenchCardFaceEnum::ace),
        FrenchCardSuit(FrenchCardSuitEnum::spade)
        );

//    std::cout << "Hello, World!\n";
    
    cout << "F[" << aCard.getFace().getRawValue() << "]"
        << " S[" << aCard.getFace().getDescription() << "]" << endl;
    
    return 0;
}
