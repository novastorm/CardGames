//
//  main.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#include <iostream>
#include "CardImpl.hpp"
#include "FrenchCard.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    FrenchCard aCard = FrenchCard(
        FrenchCardFace(FrenchCardFaceEnum::ace),
        FrenchCardSuit(FrenchCardSuitEnum::spade)
        );

//    std::cout << "Hello, World!\n";
    
    cout << "F[" << aCard.getFace().getDescription() << "]"
        << " of S[" << aCard.getSuit().getDescription() << "]" << endl;
    
    return 0;
}
