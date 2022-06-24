ListNode* reverseList(ListNode* head) {
        if (head == NULL) {
            return NULL;
        }
        
        ListNode *previous = NULL;
        ListNode *current = head;
        while(head != NULL) {
            head = head -> next;
            current -> next = previous;
            previous = current;
            current = head;
        }
        return previous;
        
    }