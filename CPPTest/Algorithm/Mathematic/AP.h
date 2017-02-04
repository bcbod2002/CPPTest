//
//  AP.h
//  CPPTest
//
//  Created by Goston on 02/02/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef AP_h
#define AP_h

template <typename T>
struct AP {
public:
    
    /**
     Arithmetic progression with Iterator

     @param initialItem Initial number
     @param sequence Sequence of numbers
     @param difference Difference number
     @return Sum
     */
    T SumAPIterator(T initialItem, int sequence, T difference) {
        T sum = initialItem;
        T itemNumber = initialItem;
        for (int i = 0 ; i < sequence - 1 ; ++i) {
            itemNumber = itemNumber + difference;
            sum = sum + itemNumber;
        }
        
        return sum;
    };
    
    
    /**
     Arithmetic progression with recursive

     @param initialItem Initial number
     @param sequence Sequence of numbers
     @param difference Difference number
     @return Sum
     */
    T SumAPRecursive(T initialItem, int sequence, T difference) {
        if (sequence <= 1) {
            return initialItem;
        }
        else {
            return initialItem + difference * (sequence - 1) + SumAPRecursive(initialItem, sequence - 1, difference);
        }
    };
    
    
    /**
     Arithmetic progression formula

     @param initialItem Initial number
     @param sequence Sequence of numbers
     @param difference Difference number
     @return Sum
     */
    T SumAPFormula(T initialItem, int sequence, T difference) {
        T lastItem = initialItem + ((sequence - 1) * difference);
        T sum = (lastItem + initialItem) * sequence / 2;
        
        return sum;
    };
};

#endif /* AP_h */
