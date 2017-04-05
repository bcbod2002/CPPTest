//
//  BinaryTree.h
//  CPPTest
//
//  Created by Goston on 14/03/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h

#include <vector>

struct BinaryTree {
private:
    struct Node {
        void *data;
        struct Node *parent, *leftNode, *rightNode;
    };
    
    unsigned long long count = 0;
    Node *root;
    Node *lastLeaf;
    vector<Node *> sameLevelVector;
    
    void realPreorderTraversal(Node* node) {
        if (node) {
            printf("Preorder data = %d, ", node -> data);
            realPreorderTraversal(node -> leftNode);
            realPreorderTraversal(node -> rightNode);
        }
        else {
            return;
        }
    }
    
    void realInorderTraversal(Node *node) {
        if (node) {
            realInorderTraversal(node -> leftNode);
            printf("Inorder data = %d, ", node -> data);
            realInorderTraversal(node -> rightNode);
        }
        else {
            return;
        }
    }
    
    void realPostorderTraversal(Node *node) {
        if (node) {
            realPostorderTraversal(node -> leftNode);
            realPostorderTraversal(node -> rightNode);
            printf("Postorder data = %d, ", node -> data);
        }
        else {
            return;
        }
    }
    
    void locateAllEmptyLeaf(Node *node) {
        if (node -> leftNode) {
            locateAllEmptyLeaf(node -> leftNode);
        }
        else if (node -> rightNode) {
            locateAllEmptyLeaf(node -> rightNode);
        }
        else if (!(node -> leftNode) && !(node -> rightNode)) {
            sameLevelVector.push_back(node);
        }
        
    }
    
    
public:
    BinaryTree(){
        root = new Node({NULL, NULL, NULL, NULL});
        lastLeaf = root;
        sameLevelVector.push_back(root);
    };
    
//    void appendData(void *data) {
//        Node *newNode = new Node({data, NULL, NULL, NULL});
//        if (lastLeaf) {
//            if (lastLeaf -> leftNode) {
//                if (lastLeaf -> rightNode) {
//                    lastLeaf = lastLeaf -> leftNode;
//                    lastLeaf -> leftNode = newNode;
//                }
//                else {
//                    lastLeaf -> rightNode = newNode;
//                }
//            }
//            else {
//                lastLeaf -> leftNode = newNode;
//            }
//        }
//        balanceBinaryTree();
//        ++count;
//    };
    
    void appendData(void *data) {
        Node *newNode = new Node({data, NULL, NULL, NULL});
        
        Node *levelNode = sameLevelVector.front();
        if (levelNode -> leftNode) {
            if (levelNode -> rightNode) {
                sameLevelVector.erase(sameLevelVector.begin());
            }
            else {
                levelNode -> rightNode = newNode;
            }
        }
        else {
            levelNode -> leftNode = newNode;
        }
        
        if (sameLevelVector.empty()) {
            locateAllEmptyLeaf(root);
        }
    }
    
    void preorderTraversalPrint() {
        realPreorderTraversal(root);
    };
    
    void inorderTraversalPrint() {
        realInorderTraversal(root);
    }
    
    void postorderTraversalPrint() {
        realPostorderTraversal(root);
    }
    
    void levelOrderTraversalPrint() {
        Node *node = root;
        vector<Node *> nodeVector;
        nodeVector.push_back(node -> leftNode);
        nodeVector.push_back(node -> rightNode);
        
        while (node) {
            printf("Levelorder data = %d, ", node -> data);
            
            for (int i = 0; i < nodeVector.size(); ++i) {
                Node *vectorNode = nodeVector[i];
                printf("Levelorder data = %d, ", vectorNode -> data);
                
                if (vectorNode -> leftNode) {
                    nodeVector.push_back(vectorNode -> leftNode);
                }
                if (vectorNode -> rightNode) {
                    nodeVector.push_back(vectorNode -> rightNode);
                }
                
                nodeVector.erase(nodeVector.begin());
            }
        }
    }
    
    
    ~BinaryTree() {
        Node *deleteNode = root;
        while (deleteNode) {
            if (deleteNode -> leftNode) {
                deleteNode = deleteNode -> leftNode;
                
                continue;
            }
            else if (deleteNode -> rightNode) {
                deleteNode = deleteNode -> rightNode;
                continue;
            }
            else {
                Node *parentNode = deleteNode -> parent;
                delete deleteNode;
                deleteNode = parentNode;
            }
        }
    };
};

#endif /* BinaryTree_h */
