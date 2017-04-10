//
//  RomanToInteger.h
//  CPPTest
//
//  Created by Goston on 10/04/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef RomanToInteger_h
#define RomanToInteger_h

#include <unordered_map>

struct RomanToInteger {
private:
    unordered_map<char, int> T = {
        { 'I' , 1 },
        { 'V' , 5 },
        { 'X' , 10 },
        { 'L' , 50 },
        { 'C' , 100 },
        { 'D' , 500 },
        { 'M' , 1000 }
    };
    
    int checkTheNumber(char romanChar) {
        switch (romanChar) {
            case 'I': {
                return 1;
            }
            case 'V': {
                return 5;
            }
            case 'X': {
                return 10;
            }
            case 'L': {
                return 50;
            }
            case 'C': {
                return 100;
            }
            case 'D': {
                return 500;
            }
            case 'M': {
                return 1000;
            }
                
            default:
                return 0;
        }
    }
    
public:
    int romanToInt(string s) {
        
        int result = 0;
        for (int i = 0; i < s.size(); ++i) {
            
            int nowNumber = checkTheNumber(s[i]);
            int nextNumber = 0;
            if (i + 1 < s.size()) {
                nextNumber = checkTheNumber(s[i + 1]);
            }
            
            result = (nowNumber < nextNumber) ? (result - nowNumber) : (result + nowNumber);
        }
        
        return result;
    }
    
    int romanToIntV2(string s) {
        
        int result = checkTheNumber(s.back());
        for (int i = int(s.size()) - 2; i >= 0; --i) {
            int nowNumber = checkTheNumber(s[i]);
            int nextNumber = checkTheNumber(s[i + 1]);
            
            result = (nowNumber < nextNumber) ? (result - nowNumber) : (result + nowNumber);
        }
        
        return result;
    }
};

#endif /* RomanToInteger_h */
