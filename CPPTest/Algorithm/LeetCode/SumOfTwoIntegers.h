//
//  SumOfTwoIntegers.h
//  CPPTest
//
//  Created by Goston on 06/04/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef SumOfTwoIntegers_h
#define SumOfTwoIntegers_h

struct SumOfTwoIntegers {
public:
    int getSum(int a, int b) {
        return (a ^ b) + ((a & b) << 1);
    }
};

#endif /* SumOfTwoIntegers_h */
