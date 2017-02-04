//
//  GCD.h
//  CPPTest
//
//  Created by Goston on 01/02/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef GCD_h
#define GCD_h


template <typename T>
struct GCD {
    
public:
    
    //--------------------------------------------------------------------------
    /**
     Greatest Common Divisor iterator

     @param numberOne First number
     @param numberTwo Second number
     @return result
     */
    T GCDIterator(T numberOne, T numberTwo) {
        T result = 0;
        
        while (numberTwo != 0) {
            result = numberOne % numberTwo;
            numberOne = numberTwo;
            numberTwo = result;
        }
        
        return numberOne;
    };
    
    //--------------------------------------------------------------------------
    /**
     Greatest Common Divisor recursive

     @param numberOne First number
     @param numberTwo Second number
     @return result
     */
    T GCDRecursive(T numberOne, T numberTwo) {
        if (numberTwo == 0) {
            return numberOne;
        }
        return GCDRecursive(numberTwo, numberOne % numberTwo);
    };
};


#endif /* GCD_h */
