//
//  AddTwoNumbers.h
//  CPPTest
//
//  Created by Goston on 05/04/2017.
//  Copyright © 2017 Goston. All rights reserved.
//

#ifndef AddTwoNumbers_h
#define AddTwoNumbers_h

struct AddTwoNumbers {
public:
    struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
    };
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode answerRoot(0);
        ListNode *nextTemp = &answerRoot;
        int carry = 0;
        
        while(l1 || l2)
        {
            int newVal = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = newVal / 10;
            newVal = newVal % 10;
            
            nextTemp -> next = new ListNode(newVal);
            nextTemp = nextTemp -> next;
            
            if (l1)
            {
                l1 = l1 -> next;
            }
            if (l2)
            {
                l2 = l2 -> next;
            }
        }
        
        if (carry > 0)
        {
            nextTemp -> next = new ListNode(carry);
            nextTemp = nextTemp -> next;
        }
        
        return answerRoot.next;
    }
};

#endif /* AddTwoNumbers_h */
