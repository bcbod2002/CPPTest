//
//  ReverseVowelsString.h
//  CPPTest
//
//  Created by Goston on 05/04/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef ReverseVowelsString_h
#define ReverseVowelsString_h

struct ReverseVowelsString {
private:
    bool checkVowels(char letter) {
        string vowels = "aeiouAEIOU";
        for (int begin = 0; begin < vowels.length(); ++begin) {
            if (vowels[begin] == letter) {
                return true;
            }
        }
        return false;
    }
    
public:
    string reverseVowels(string s) {
        int checkedEnd = (int)s.length();
        int checkedBegin = 0;
        for (int begin = checkedBegin; begin < checkedEnd - 1; ++begin) {
            if (checkVowels(s[begin])) {
                for (int end = checkedEnd; end > begin; --end) {
                    if (checkVowels(s[end])) {
                        swap(s[begin], s[end]);
                        
                        checkedEnd = end - 1;
                        checkedBegin = begin + 1;
                        
                        break;
                    }
                }
            }
        }
        
        return s;
    }
};

#endif /* ReverseVowelsString_h */
