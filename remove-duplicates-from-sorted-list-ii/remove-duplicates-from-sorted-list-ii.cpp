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
        ListNode *p=new(ListNode);
        if(!head||!head->next)return head;
        p->val=500;
        p->next=head;
        ListNode *q=p;
        ListNode*r=head;
        int flag=0;
        while(r&&r->next)
        {
            if(q->next->val==r->next->val)
            {
                q->next=r->next;
                flag=1;
                r=r->next;
            }
            else if(q->next->val!=r->next->val)
            {
                if(flag==1)
                {
                    q->next=r->next;
                    flag=0;
                    r=r->next;
                }
                else
                {
                    q=q->next;
                    r=r->next;
                }
            }
        }
        if(flag==1)q->next=NULL;
        return p->next;
    }
};