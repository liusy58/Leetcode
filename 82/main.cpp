    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        int now=head->val-1;
        ListNode* res=new ListNode(now);
        ListNode* temp=res;
        
        while(head!=NULL)
        {
            int now=head->val;
            ListNode* t=head;
            head=head->next;
            bool flag=0;
            while(head!=NULL&&head->val==now)
            {
                flag=1;
                head=head->next;
            }
            if(!flag)
            {
                temp->next=t;
                t->next=NULL;
                temp=temp->next;
            }
        }
        temp=res;
        res=res->next;
        delete(temp);
        return res;
    }