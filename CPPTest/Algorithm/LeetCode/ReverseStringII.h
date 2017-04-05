//
//  ReverseStringII.h
//  CPPTest
//
//  Created by Goston on 05/04/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef ReverseStringII_h
#define ReverseStringII_h

struct ReverseStringII {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i = i + 2 * k) {
            if (i + k - 1 < s.length()) {
                for (int o = i, p = i + k - 1; o < p; ++o, --p) {
                    swap(s[o], s[p]);
                }
            }
            else {
                for (int o = i, p = (int)s.length() - 1; o < p; ++o, --p) {
                    swap(s[o], s[p]);
                }
            }
        }
        return s;
    }
};

#endif /* ReverseStringII_h */
