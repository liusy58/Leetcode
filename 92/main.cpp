    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(n<=m)
            return head;
        ListNode*res=new ListNode(0);
        res->next=head;
        ListNode*part1,*part1_before;
        ListNode*part2,*part2_before;
        ListNode*part3,*temp;
        n-=m;
        n++;
        part1=res;
        part1_before=NULL;
        
        while(m--)
        {
           part1_before=part1;
           part1=part1->next; 
        }
        if(part1_before!=NULL)
            part1_before->next=NULL;
        part2=part1;
        part2_before=NULL;
        while(n--)
        {
            part2_before=part2;
            part2=part2->next; 
        }
        if(part2_before!=NULL)
            part2_before->next=NULL;
        part3=part1;
        while(part1!=NULL)
        {
            temp=part1->next;
            part1->next=part1_before->next;
            part1_before->next=part1;
            part1=temp;
        }
        part3->next=part2;
        head=res->next;
        delete(res);
        return head;
    }