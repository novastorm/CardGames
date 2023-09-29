//
//  EnumObjectImpl.cpp
//  blackjack_20180527_1941
//
//  Created by Adland Lee on 9/29/23.
//  Copyright © 2023 4MFD. All rights reserved.
//

#include "EnumObjectImpl.hpp"

template<typename T>
EnumObjectImpl<T>::EnumObjectImpl(int rawValue): _rawValue(rawValue) {}

template<typename T>
EnumObjectImpl<T>::EnumObjectImpl(T value): _rawValue(value) {}

template<typename T>
int EnumObjectImpl<T>::rawValue() const {return _rawValue; }

template<typename T>
std::string EnumObjectImpl<T>::description() const {
    return _descriptions[_rawValue];
}
