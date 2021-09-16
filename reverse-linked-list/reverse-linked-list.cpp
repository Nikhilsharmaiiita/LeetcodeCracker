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
    ListNode*head1;
    void rev(ListNode* p,ListNode* q)
    {
        if(!q)
        {head1=p;return;}
        rev(q,q->next);
        q->next=p;
    }
    ListNode* reverseList(ListNode* head) {
        rev(NULL,head);
        return head1;
    }
};