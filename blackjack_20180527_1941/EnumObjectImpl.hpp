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


template<typename T>
class EnumObjectImpl: public EnumObject {
protected:
    const int _rawValue;
    const std::string _descriptions[0];
    
public:
    // Create EnumObject with raw value
    EnumObjectImpl<T> (int rawValue);
    
    // Create EnumObject with enum
    EnumObjectImpl<T> (T value);
    
    int rawValue() const;

    std::string description() const;
};

#include "EnumObjectImpl.tpp"

#endif /* EnumObjectImpl_hpp */
