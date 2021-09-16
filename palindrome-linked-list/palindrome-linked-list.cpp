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
    ListNode* rev(ListNode* head,ListNode*slow)
    {
        ListNode*p,*q,*r;
        r=q=NULL;
        p=head;
        while(p!=slow)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    bool isPalindrome(ListNode* head) {
     ListNode*slow,*fast;
        slow=fast=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*point=rev(head,slow);
        if(!fast)
        {
            while(point)
            {
                if(point->val!=slow->val)return false;
                point=point->next;
                slow=slow->next;
            }
        }
        else
        {
            slow=slow->next;
            while(point)
            {
                if(point->val!=slow->val)return false;
                point=point->next;
                slow=slow->next;
            }
        }
        return true;
    }
};