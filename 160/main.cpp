/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int cal_len(ListNode *head)
    {
        int res=0;
        while(head!=NULL)
        {
            res++;
            head=head->next;
        }
        return res;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=cal_len(headA);
        int len2=cal_len(headB);
        while(len1>len2)
        {
            headA=headA->next;
            len1--;
        }
        while(len2>len1)
        {
            headB=headB->next;
            len2--;
        }
        while(headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};