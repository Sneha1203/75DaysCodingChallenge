ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) {
            return NULL;
        }
        
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;
        
        while(ptrA != ptrB) {
            if(ptrA == NULL) {
                ptrA = headB;
            } else {
                ptrA = ptrA -> next;
            }
            
            if(ptrB == NULL) {
                ptrB = headA;
            } else {
                ptrB = ptrB -> next;
            }
        }
        return ptrA;
    }