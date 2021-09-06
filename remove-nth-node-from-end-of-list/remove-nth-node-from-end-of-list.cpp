/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x=n-1;
        ListNode* p1,*p2;
        p1=head;
        p2=head;
        while(x--)
        {
            p1=p1->next;
        }
        if(p1->next==NULL)
        {
             head=head->next;
             return head;
        }
        while(p1->next->next!=NULL)
        {
          p1=p1->next;
          p2=p2->next;
        }
        if(p2->next!=NULL)
        {
            p2->next=p2->next->next;
        }
        else
            p2->next=NULL;
        return head;
    }
};