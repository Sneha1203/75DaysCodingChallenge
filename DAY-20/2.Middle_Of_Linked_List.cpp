ListNode* middleNode(ListNode* head) {
        if(head == NULL) {
            return NULL;
        }
        
        ListNode *fastptr = head;
        ListNode *slowptr = head;
        
        while(fastptr && fastptr -> next) {
            slowptr = slowptr -> next;
            fastptr = fastptr -> next -> next;
        }
        return slowptr;
    }