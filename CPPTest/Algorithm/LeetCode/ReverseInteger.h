//
//  ReverseInteger.h
//  CPPTest
//
//  Created by Goston on 07/04/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef ReverseInteger_h
#define ReverseInteger_h

struct ReverseInteger {
public:
    int reverse(int x) {
        long long result = 0;
        while (x != 0) {
            result = (result * 10) + (x % 10);
            
            x /= 10;
        }
        
        return (result < INT_MIN || result > INT_MAX) ? 0 : (int)result;
    }
};

#endif /* ReverseInteger_h */
