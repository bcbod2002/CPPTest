//
//  main.cpp
//  CPPTest
//
//  Created by Goston on 2016/9/20.
//  Copyright © 2016年 Goston. All rights reserved.
//

#include <iostream>
#include "TopDowMergeSort.hpp"
//#include "GQueue.hpp"
#include "GCD.h"
#include "LCM.h"
#include "AP.h"
#include "GP.h"
#include "LinkedList.h"
#include "Queue.h"
#include "BinaryTree.h"

//-------------------------
// LeetCode
#include "AddTwoNumbers.h"
#include "PowerOfThree.h"
#include "ReverseString.h"
#include "ReverseStringII.h"
#include "ReverseVowelsString.h"
#include "SingleNumber.h"

using std::cout;
using std::endl;

//http://stackoverflow.com/questions/10263721/undefined-symbols-for-architecture-x86-64-error
//http://hatsukiakio.blogspot.com/2009/05/c-template.html


struct Animal {
    virtual void makeSound() {
        cout << "動物叫了" << endl;
    }
};

struct Cow : public Animal {
    void makeSound() {
        cout << "牛叫了" << endl;
    }
};

struct Pig : public Animal {
    void makeSound() {
        cout << "豬叫了" << endl;
    }
};

struct Donkey : public Animal {
    void makeSound() {
        cout << "驢叫了" << endl;
    }
};

void linkedListTest() {
    
    printf("Test linked list \n");
    
    LinkedList<void *> *linkedList = new LinkedList<void *>;
    linkedList -> initList((void *)321);
//    for (int i = 0; i < 10000; i++) {
//        linkedList -> appendNode((void *)12333);
//    }
    linkedList -> appendData((void *)12333);
    linkedList -> appendData((void *)4444);
    linkedList -> appendData((void *)1111);
    printf("-----------\n");
    linkedList -> printAllNodes();
//    linkedList -> deleteLast();
    printf("searchData = %d\n", linkedList -> locationOfData((void *)4444));
//    linkedList -> deleteList();
//    linkedList -> deleteData((void *)4444);
    printf("search search data = %d\n", linkedList -> searchDataFromLocation(0));
    printf("-----------\n");
    linkedList -> printAllNodes();
}

void queueTest() {
    printf("Test Queue \n");
    Queue *queue = new Queue;
    queue -> initQueue((void*) 3113);
    queue -> enQueue((void*)40707);
    queue -> enQueue((void*)290322);
    queue -> printAllNodes();
    printf("Dequeue = %d\n", queue -> deQueue());
    queue -> printAllNodes();
}

void testBinaryTree() {
    BinaryTree *binaryTree = new BinaryTree;
    binaryTree -> appendData((void*)1000);
    binaryTree -> appendData((void*)2000);
    binaryTree -> appendData((void*)3000);
    binaryTree -> appendData((void*)1111);
    binaryTree -> appendData((void*)2111);
    binaryTree -> appendData((void*)3111);
    
//    binaryTree -> preorderTraversalPrint();
//    binaryTree -> inorderTraversalPrint();
    binaryTree -> levelOrderTraversalPrint();
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // Animal
//    srand((unsigned)time(0));
//    for (int i = 0; i < 5; ++i) {
//        Animal *animal = nullptr;
//        switch (rand() % 4) {
//            case 0:
//                animal = new Cow;
//                
//                break;
//            case 1:
//                animal = new Pig;
//                break;
//            case 2:
//                animal = new Donkey;
//                break;
//                
//            default:
//                animal = new Animal;
//                break;
//        }
//        animal -> makeSound();
////        &animal->makeSound()
//        delete animal;
//    }
    
    Animal *animal = new Donkey;
    animal -> makeSound();
    delete animal;
    
//    GQueue<int> list;
//    list.enQueue(1);
//    list.enQueue(2);
//    cout << "Size = " << list.size() << endl;
//    cout << "Dequeue => " << list.deQueue() << endl;
//    cout << "Peek => " << list.peek() << endl;
//    list.clear();
    
//    int a[7] = {1, 5, 7, 3, 8, 2, 9};
//    int a[7] = {9, 8, 7, 6, 5, 4, 3};
//    int b[7];
//    int count = sizeof(a) / sizeof(a[0]);
//    TopDownMergeSortStruct<int> *mergeSort;
//    mergeSort->TopDownMergeSort(a, b, count);
//    
//    for (int i = 0; i < count; ++i) {
//        printf("a[%d] = %d, ", i, b[i]);
//    }
    
    GCD<int> gcd;
//    int result = gcd.GCDIterator(40, 30);
    int resultGCD = gcd.GCDRecursive(180930, 600);
    cout << "GCD = " << resultGCD << endl;
    
    LCM<int> lcm;
    int resultLCM = lcm.LCMIterator(180930, 600);
    cout << "LCM = " << resultLCM << endl;
    
    
    AP<int > ap;
    int resultAPFormula = ap.SumAPFormula(3, 6000, 2);
    int resultAPIterator = ap.SumAPIterator(3, 6000, 2);
    int resultAPRecursive = ap.SumAPRecursive(3, 6000, 2);
    cout << "resultAPFormula = " << resultAPFormula << endl;
    cout << "resultAPIterator = " << resultAPIterator << endl;
    cout << "resultAPRecursive = " << resultAPRecursive << endl;
    
    GP<long double> gp;
    long double resultGPIterator = gp.SumGPIterator(5, 4, 4);
    long double resultGPFormula = gp.SumGPFormula(5, 4, 4);
    long double resultGpRecursive = gp.SumGPRecursive(5, 4, 4);
    cout << "resultGPIterator = " << resultGPIterator << endl;
    cout << "resultGPFormula = " << resultGPFormula << endl;
    cout << "resultGpRecursive = " << resultGpRecursive << endl;
    
    
    std::cout << "Hello, World!\n";
    
    return 0;
}
