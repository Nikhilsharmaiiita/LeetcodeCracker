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
        ListNode* p1,*p2;
        if(!head->next && n==1)return NULL;
        p1=p2=head;
        int x=n;
        while(n>1)
        {
            p2=p2->next;
            n--;
        }
        while(p2->next&&p2->next->next)
        {
            p2=p2->next;
            p1=p1->next;
        }
        if(!p2->next)head=head->next;
        else p1->next=p1->next->next;
        return head;
    }
};