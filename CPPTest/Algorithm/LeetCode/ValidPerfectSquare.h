//
//  ValidPerfectSquare.h
//  CPPTest
//
//  Created by Goston on 06/04/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef ValidPerfectSquare_h
#define ValidPerfectSquare_h

struct ValidPerfectSquare {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) {
            return true;
        }
        
        long long left = 0;
        long long right = num;
        while (left <= right) {
            long long square = (left + right) >> 1;
            long long power = square * square;
            
            if (power > num) {
                right = square - 1;
            }
            else if (power < num) {
                left = square + 1;
            }
            else {
                return true;
            }
        }
        
        return false;
    }
};

#endif /* ValidPerfectSquare_h */
