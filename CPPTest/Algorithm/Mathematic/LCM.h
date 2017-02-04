//
//  LCM.h
//  CPPTest
//
//  Created by Goston on 01/02/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef LCM_h
#define LCM_h

#include "GCD.h"
template <typename T>
struct LCM {
    
public:
    
    //--------------------------------------------------------------------------
    /**
     Lowest Common Multiple with iterator

     @param numberOne First number
     @param numberTwo Second number
     @return result
     */
    T LCMIterator(T numberOne, T numberTwo) {
        GCD<T> gcd;
        T gcdResult = gcd.GCDIterator(numberOne, numberTwo);
        
        return numberOne * numberTwo / gcdResult;
    };
    
    //--------------------------------------------------------------------------
    /**
     Lowest Common Multiple with recursive

     @param numberOne First number
     @param numberTwo Second number
     @return result
     */
    T LCMRecursive(T numberOne, T numberTwo) {
        GCD<T> gcd;
        T gcdResult = gcd.GCDRecursive(numberOne, numberTwo);
        
        return numberOne * numberTwo / gcdResult;
    };
};

#endif /* LCM_h */
