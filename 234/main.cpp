#include<iostream>
#include<vector>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
int cal_len(ListNode*temp)
{
    ListNode*head=temp;
    int res=0;
    while(head!=NULL)
        ++res;
    return res;
}
bool isPalindrome(ListNode* head) {
    int len=cal_len(head);
    
}