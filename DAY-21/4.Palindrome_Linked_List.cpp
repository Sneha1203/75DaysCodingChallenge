ListNode *reverseLinkedList (ListNode *head) {
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
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return false;
        }
        
        ListNode *slowptr = head;
        ListNode *fastptr = head;
        
        while(fastptr && fastptr -> next) {
            fastptr = fastptr -> next -> next;
            slowptr = slowptr -> next;
        }
        
        slowptr = reverseLinkedList(slowptr);
        fastptr = head;
        
        while (slowptr) {
            if(slowptr -> val != fastptr -> val) {
                return false;
            } 
            
            slowptr = slowptr -> next;
            fastptr = fastptr -> next;
        }
        
        return true;
    }