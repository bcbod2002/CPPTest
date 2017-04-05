//
//  PowerOfThree.h
//  CPPTest
//
//  Created by Goston on 05/04/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef PowerOfThree_h
#define PowerOfThree_h

struct PowerOfThree {
public:
    bool isPowerOfThree(int n) {
        if (n < 0) {
            return false;
        }
        else if (n == 1) {
            return true;
        }
        
        int last = n;
        
        while(last > 0 ) {
            if (last % 3 == 0) {
                last = last / 3;
            }
            else {
                return false;
            }
            
            if (last == 1) {
                return true;
            }
        }
        return false;
    }
};

#endif /* PowerOfThree_h */
