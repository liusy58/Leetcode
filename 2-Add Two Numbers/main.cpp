#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode*res=new ListNode(0);
    ListNode*head=res;
    int carry=0;
    int sum=0;
    while(l1!=NULL&&l2!=NULL)
    {
        sum=l1->val+l2->val+carry;
        carry=sum/10;
        sum%=10;
        ListNode*newnode=new ListNode(sum);
        head->next=newnode;
        head=newnode;
        l1=l1->next;
        l2=l2->next;
    }
    while(l1!=NULL||l2!=NULL)
    {
        if(l1!=NULL)
        {
            sum=l1->val+carry;
            carry=sum/10;
            sum%=10;
            l1=l1->next;
        }
        if(l2!=NULL)
        {
            sum=l2->val+carry;
            carry=sum/10;
            sum%=10;
            l2=l2->next;
        }
        ListNode*newnode=new ListNode(sum);
        head->next=newnode;
        head=newnode;
    }
    head=res;
    res=res->next;
    free(head);
    return res;
}