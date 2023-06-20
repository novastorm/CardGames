//
//  EnumObjectImpl.hpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 5/28/18.
//  Copyright © 2018 4MFD. All rights reserved.
//
#ifndef EnumObjectImpl_hpp
#define EnumObjectImpl_hpp

#include <array>
#include <cstdio>
#include <string>

#include "EnumObject.hpp"

using namespace std;

template<typename T>
class EnumObjectImpl: public EnumObject {
protected:
    int _rawValue;
    string _descriptions[0];
    
public:
    // Create EnumObject with raw value
    EnumObjectImpl<T> (int rawValue): _rawValue(rawValue) {}
    // Create EnumObject with enum
    EnumObjectImpl<T> (T value): _rawValue(value) {}
    
    int rawValue() const { return _rawValue; }

    string description() const { return _descriptions[_rawValue]; }
};

#endif /* EnumObjectImpl_hpp */
