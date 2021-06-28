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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*p1,*p2;
        p1=head;
        if(!head)return head;
        if(!head->next)return head;
        p1=head;
        p2=p1->next;
        while(p2)
        {
            if(p1->val!=p2->val)
            {
                p1=p2;
                p2=p1->next;
            }
            else
            {
                ListNode*d=p2;
                p1->next=p2->next;
                p2=p1->next;
                delete d;
            }
        }
        return head;
        
    }
};