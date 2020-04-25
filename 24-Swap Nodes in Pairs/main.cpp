#include<iostream>
#include<vector>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
ListNode* swapPairs(ListNode* head) {
    if(head==NULL)
        return head;
    ListNode*fast=head->next;
    ListNode*slow=head;
    ListNode*res=new ListNode(1);
    res->next=head;
    ListNode*tail=res;
    while(fast!=NULL&&slow!=NULL)
    {
        ListNode*nextfast=fast->next==NULL?NULL:fast->next->next;
        ListNode*nextslow=slow->next==NULL?NULL:slow->next->next;
        tail->next=fast;
        slow->next=fast->next;
        fast->next=slow;
        slow=nextslow;
        fast=nextfast;
    }
    slow=res;
    res=res->next;
    free(slow);
    return res;
}


int main()
{
 
    
}
