    TreeNode* sortedListToBST(ListNode* head,ListNode* tail=NULL) {
        if(head==tail)
            return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=tail&&fast->next!=tail)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        TreeNode*res=new TreeNode(slow->val);
        res->left=sortedListToBST(head,slow);
        res->right=sortedListToBST(slow->next,tail);
        return res;
    }