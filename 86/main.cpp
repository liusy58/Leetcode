    ListNode* partition(ListNode* head, int x) {
        ListNode*greater=new ListNode(0);
        ListNode*less=new ListNode(0);
        
        ListNode*greater_res=greater;
        ListNode*less_res=less;
        
        while(head!=NULL)
        {
            int val=head->val;
            if(val>=x)
            {
                greater->next=head;
                head=head->next;
                greater=greater->next;
                greater->next=NULL;
            }
            else
            {
                less->next=head;
                head=head->next;
                less=less->next;
                less->next=NULL;
            }
        }
        less->next=greater_res->next;
        return less_res->next;
    }