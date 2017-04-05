//
//  ReverseString.h
//  CPPTest
//
//  Created by Goston on 05/04/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef ReverseString_h
#define ReverseString_h

struct ReverseString {
public:
    string reverseString(string s) {
        for (int start = 0, end = (int)s.length() - 1; start < end; ++start, --end) {
            swap(s[start], s[end]);
        }
        return s;
    }
};

#endif /* ReverseString_h */
