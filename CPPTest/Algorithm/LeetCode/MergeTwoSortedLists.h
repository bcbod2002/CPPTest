//
//  MergeTwoSortedLists.h
//  CPPTest
//
//  Created by Goston on 10/04/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef MergeTwoSortedLists_h
#define MergeTwoSortedLists_h

struct MergeTwoSortedLists {
public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(INT_MIN);
        ListNode *tail = dummy;
        while (l1 && l2) {
            if (l1 -> val > l2 -> val) {
                tail -> next = l1;
                l1 = l1 -> next;
            }
            else {
                tail -> next = l2;
                l2 = l2 -> next;
            }
            
            tail = tail -> next;
        }
        tail -> next = l1 ? l1 : l2;
        return dummy -> next;
    }
};

#endif /* MergeTwoSortedLists_h */
