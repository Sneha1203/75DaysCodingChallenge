ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode();
        ListNode *temp = head;
        while(l1 && l2) {
            if(l1 -> val < l2 -> val){
                head -> next = l1;
                l1 = l1 -> next;
                head = head -> next;
            } else {
                head -> next = l2;
                l2 = l2 -> next;
                head = head -> next;
            }
        }
            
            while (l1) {
                head -> next = l1;
                l1 = l1 -> next;
                head = head -> next;
            }
            
            while (l2) {
                head -> next = l2;
                l2 = l2 -> next;
                head = head -> next;
            }
        
        return temp -> next;
    }