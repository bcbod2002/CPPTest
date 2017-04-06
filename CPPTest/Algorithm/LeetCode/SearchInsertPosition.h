//
//  SearchInsertPosition.h
//  CPPTest
//
//  Created by Goston on 06/04/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef SearchInsertPosition_h
#define SearchInsertPosition_h

#include <vector>

struct SearchInsertPosition {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        for (int i = 0 ; i < nums.size() ; ++i) {
            if (target > nums[i]) {
                continue;
            }
            else {
                if (i == 0) {
                    return 0;
                }
                return  i;
            }
        }
        
        return (int)nums.size();
    }
};

#endif /* SearchInsertPosition_h */
