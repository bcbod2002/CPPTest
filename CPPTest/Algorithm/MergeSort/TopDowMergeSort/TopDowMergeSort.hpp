//
//  TopDowMergeSort.hpp
//  SwiftCPP
//
//  Created by Goston on 31/01/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef TopDowMergeSort_hpp
#define TopDowMergeSort_hpp

#include <stdio.h>


#endif /* TopDowMergeSort_hpp */

using namespace std;

template <typename T>
struct TopDownMergeSortStruct {
private:
    
    
    
    void TopDownSplitMerge(T b[], int iBegin, int iEnd, T a[]) {
//        if (iEnd - iBegin < 2) {
//            if (a[iBegin] > a[iEnd]){
//                swap(&a[iBegin], &a[iEnd]);
//                return;
//            }
//        }
        
        if (iEnd - iBegin < 2) {
            
        }
        
        
    };
    
    
    void TopDownMerge(T a[], int iBegin, int iMiddle, int iEnd, T b[]) {
        
    };
    
    
    void CopyArray(T a[], int iBegin, int iEnd, T b[]) {
        for (int k = iBegin; k < iEnd; k++) {
            cout << a[k];
            b[k] = a[k];
        }
        cout << endl;
    };
    
    void swap(T *a, T *b) {
        if (a > b) {
            T tmp = *a;
            *a = *b;
            *b = tmp;
//            a = a ^ b;
//            b = a ^ b;
//            a = a ^ b;
        }
        
//        x = a ^ b
//        y = x ^ b
//        z = x ^ y
//        y = (a ^ b) ^ b = a ^ b ^ b = a ^ (b ^ b) = a ^ 0 = a
//        z = (a ^ b) ^ a = a ^ b ^ a = (a ^ a) ^ b = 0 ^ b = b
    }
public:
    T* TopDownMergeSort(T originalArray[], T resultArray[], int arrayLength) {
        
        TopDownSplitMerge(resultArray, 0, arrayLength, originalArray);
        
        return resultArray;
    };
};

