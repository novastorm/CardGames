//
//  CardImpl.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/27/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#ifndef CardImpl_hpp
#define CardImpl_hpp

#include <cstdio>
#include <iostream>

#include "Card.hpp"

template<typename F, typename S>
class CardImpl: public Card {
    
protected:
    const F* _face;
    const S* _suit;

public:
    CardImpl(F face, S suit);
    
    EnumObject* face();
    EnumObject* suit();
    
    void print();

    std::string description();

};

# include "CardImpl.tpp"

#endif /* CardImpl_hpp */
