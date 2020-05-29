    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        ListNode *res=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(res!=slow)
                {
                    slow=slow->next;
                    res=res->next;
                }
                return res;
            }
        }
        return NULL;
    }