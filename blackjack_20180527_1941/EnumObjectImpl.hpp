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
public:
    int _rawValue;
    string descriptions[0];
    
    EnumObjectImpl<T> (int rawValue) {
        _rawValue = rawValue;
    }
    
    EnumObjectImpl<T> (T value) {
        _rawValue = value;
    }
    
    int getRawValue() const { return _rawValue; }
    
    string getDescription() const { return descriptions[_rawValue]; }
    
    T* operator= (const T& object) {
        return new T(object);
    }
};

#endif /* EnumObjectImpl_hpp */
