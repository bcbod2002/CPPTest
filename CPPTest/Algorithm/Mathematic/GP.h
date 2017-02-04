//
//  GP.h
//  CPPTest
//
//  Created by Goston on 02/02/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef GP_h
#define GP_h

template <typename T>
struct GP {
public:
    
    /**
     Geometric progression

     @param initialItem Initial number
     @param sequence Sequence of numbers
     @param scaleFactor Scale Factor
     @return Sum
     */
    T SumGPIterator(T initialItem, int sequence, T scaleFactor) {
        T sum = initialItem;
        T itemNumber = initialItem;
        for (int i = 0 ; i < sequence ; i++) {
            itemNumber = itemNumber * scaleFactor;
            sum = sum + itemNumber;
        }
        
        return sum;
    };
    
    
    /**
     Geometric progression

     @param initialItem Initial number
     @param sequence Sequence of numbers
     @param scaleFactor Scale Factor
     @return Sum
     */
    T SumGPRecursive(T initialItem, int sequence, T scaleFactor) {
        if (sequence <= 1) {
            return initialItem * 2;
        }
        else {
            T itemNumber = initialItem;
            for (int i = 0 ; i < sequence ; i++) {
                itemNumber = itemNumber * scaleFactor;
            }
            
            return initialItem + itemNumber + SumGPRecursive(initialItem, sequence - 1, scaleFactor);
        }
    };
    
    /**
     Geometric progression
     
     @param initialItem Initial number
     @param sequence Sequence of numbers
     @param scaleFactor Scale Factor
     @return Sum
     */
    T SumGPFormula(T initialItem, int sequence, T scaleFactor) {
        int itemNumber = scaleFactor;
        for (int i = 0 ; i < sequence ; i++) {
            itemNumber = itemNumber * scaleFactor;
        }
        T sum = ((initialItem * itemNumber) - initialItem) / (scaleFactor - 1);
        
        return sum;
    };
};

#endif /* GP_h */
