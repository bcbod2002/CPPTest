//
//  Queue.h
//  CPPTest
//
//  Created by Goston on 13/03/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

struct Queue {
private:
    struct Node {
        void *data;
        struct Node *next;
    };
    
    Node *head;
    unsigned long long count = 0;
    
    Node* getLastNode() {
        Node *node = head;
        while (node) {
            if (node -> next) {
                node = node -> next;
            }
            else {
                break;
            }
        }
        return node;
    };
    
    Node* getLastNodeOfPrevious() {
        Node *node = head;
        while (node) {
            if (node -> next) {
                node = node -> next;
            }
            else {
                break;
            }
            
            if (node -> next -> next == NULL) {
                return node;
            }
        }
        return node;
    };
    
public:
    void initQueue(void *firstData) {
        head = new Node;
        head -> data = firstData;
        head -> next = NULL;
        
        count = 1;
    };
    
    void enQueue(void *data) {
        Node *newNode = new Node;
        Node *secondNode = head;
        
        newNode -> data = data;
        newNode -> next = secondNode;
        
        head = newNode;
        
        ++count;
    };
    
    void* deQueue() {
        Node *afterLastNode = getLastNodeOfPrevious();
        
        Node *beforeLastNode = getLastNode();
        
        afterLastNode -> next = NULL;
        void* data = beforeLastNode -> data;
        delete beforeLastNode;
        return data;
    };
    
    void deleteQueue() {
        Node *deleteNode = head;
        while (deleteNode) {
            if (deleteNode -> next) {
                head = head -> next;
                delete deleteNode;

                deleteNode = head;
            }
        }
    };
    
    void* getFirst() {
        return head;
    };
    
    void* getLast() {
        return getLastNode();
    };
    
    void printAllNodes() {
        Node *node = head;
        while (node) {
            printf("Queue's node -> data = %d\n", node -> data);
            node = node -> next;
        }
    };
};


#endif /* Queue_h */
