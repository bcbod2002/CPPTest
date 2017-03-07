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
    unsigned long long count = 0;
    
public:
    void initList(void *firstData) {
        head = new Node;
        head -> data = firstData;
        head -> next = NULL;
        head -> previous = NULL;
        
        count = 1;
    };
    
    void deleteList() {
        Node *deletedNode = head;
        while (deletedNode) {
            head = head -> next;
            delete deletedNode;
            deletedNode = head;
        }
    };
    
    void appendNode(void *newData) {
        Node *newNode = new Node;
        Node *lastNode = getLast();
        newNode -> data = newData;
        newNode -> previous = lastNode;
        newNode -> next = NULL;
        
        lastNode -> next = newNode;
        
        ++count;
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
    
    long unsigned int locationOfData(void* searchData) {
        Node *node = head;
        unsigned long long locate = 0;
        while(node) {
            
            if (node -> data == searchData) {
                return locate;
            }
            else {
                if (node -> next) {
                    node = node -> next;
                    ++locate;
                }
                else {
                    return NULL;
                }
            }
        }
        return NULL;
    }
    
    void deleteData(void *data) {
        Node *deleteNode = head;
        while (deleteNode) {
            if (deleteNode -> next) {
                if (deleteNode -> data == data) {
                    Node *previousNode = deleteNode -> previous;
                    previousNode -> next = deleteNode -> next;
                    deleteNode -> next -> previous = previousNode;
                    delete deleteNode;
                    
                    return;
                }
                else {
                    deleteNode = deleteNode -> next;
                }
            }
        }
    };
    
    bool isExistData(void* data) {
        if (locationOfData(data)) {
            return true;
        }
        else {
            return false;
        }
    };
    
    unsigned long long numberOfNode() {
        return count;
    };
    
    void printAllNodes() {
        Node *node = head;
        while (node) {
            printf("in in in the while data = %d\n", node -> data);
            node = node -> next;
        }
    };
};

#endif /* LinkedList_h */