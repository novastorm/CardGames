//
//  Assignable.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/28/18.
//  Copyright © 2018 4MFD. All rights reserved.
//

#ifndef Assignable_h
#define Assignable_h

template <typename T>
class Assignable {
    virtual T& operator= (const T& object);
};

#endif /* Assignable_h */
