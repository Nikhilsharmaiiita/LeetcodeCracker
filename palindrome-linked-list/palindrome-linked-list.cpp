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
    bool isPalindrome(ListNode* head) {
        ListNode*slow,*fast;
        slow=fast=head;
        ListNode *p,*q,*r;
        p=head;
        q=r=NULL;
        while(fast!=NULL && fast->next!=NULL)
        {
        slow=slow->next;
        fast=fast->next->next;
        r=q;
        q=p;
        p=p->next;
        q->next=r;
        }
        if(!fast)
        {
            while(slow)
            {
                if(slow->val==q->val)
                {
                   slow=slow->next;
                    q=q->next;
                }      
                else return false;
            }
        }
        else
        {slow=slow->next;
             while(slow)
            {
             if(slow->val==q->val)
                {
                   slow=slow->next;
                    q=q->next;
                }    
                 else return false; 
            }
        }
     return true;
    }
};