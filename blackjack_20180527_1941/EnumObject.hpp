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
    virtual int getRawValue() const =0;
    virtual string getDescription() const =0;
};

#endif /* EnumObject_hpp */
