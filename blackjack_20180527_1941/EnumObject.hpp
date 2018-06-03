//
//  EnumObject.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/28/18.
//  Copyright © 2018 4MFD. All rights reserved.
//
#ifndef EnumObject_hpp
#define EnumObject_hpp

#include <cstdio>
#include <string>

using namespace std;

class EnumObject {

public:
    
    int getRawValue() const;

    string getDescription() const;

};

#endif /* EnumObject_hpp */
