//
//  LinkedList.h
//  CPPTest
//
//  Created by Goston on 16/02/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

template <typename T>
struct LinkedList {
private:
    struct Node {
        void *data;
        struct Node *next, *previous;
    };
    
    Node *head;
    
public:
    void initList(void *firstData) {
        head = new Node;
        head -> data = firstData;
        head -> next = NULL;
        head -> previous = NULL;
    };
    
    void deleteList();
    
    void appendNode(void *newData) {
        Node *newNode = new Node;
        Node *lastNode = getLast();
        newNode -> data = newData;
        newNode -> previous = lastNode;
        newNode -> next = NULL;
        
        lastNode -> next = newNode;
    };
    
    void deleteLast() {
        Node *lastNode = getLast();
        Node *afterLastNode = lastNode -> previous;
        afterLastNode -> next = NULL;
        
        delete lastNode;
    };
    
    Node* getLast() {
        Node *node = head;
        while(node) {
            if (node -> next) {
                node = node -> next;
            }
            else {
                break;
            }
        }
        return node;
    };
    
    void deleteNode();
    
    bool isExistData(T data);
    
    int numberOfNode();
    
    void printAllNodes() {
        Node *node = head;
        while (node) {
            printf("in in in the while data = %d\n", node -> data);
            node = node -> next;
        }
    };
};

#endif /* LinkedList_h */
