#include<iostream>
#include<vector>
using namespace std;



struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

int cal_len(ListNode* head)
{
    int len=0;
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}
ListNode* removeNthFromEnd(ListNode* head, int n) {
     int len=cal_len(head);
     if(len==n)
        return head->next;
    int num=len-n;
    ListNode*before=NULL;
    ListNode*now=head;
    while(num--)
    {
        before=now;
        now=now->next;
    }
    if(now!=NULL)
        before->next=now->next;
    else
        before->next=NULL;
    return head;
}

int main()
{

}