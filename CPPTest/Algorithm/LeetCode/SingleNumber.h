//
//  SingleNumber.h
//  CPPTest
//
//  Created by Goston on 05/04/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef SingleNumber_h
#define SingleNumber_h

#include <vector>

struct SingleNumber {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() % 2 == 0) {
            return 0;
        }
        for (unsigned long i = 1 ; i < nums.size() ; ++i) {
            nums[0] ^= nums[i];
        }
        return nums.front();
    }
};

#endif /* SingleNumber_h */
