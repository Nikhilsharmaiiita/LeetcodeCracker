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
    ListNode* rotateRight(ListNode* head, int k) {
        int count=0;
        if(!head || !head->next)return head;
        ListNode *p=head;
        while(p)
        {
            count++;
            p=p->next;
        }
        k=k%count;
        int x=count-k;
       // if(x==count)return head;
        p=head;
        while(x>1)
        {
            x--;
            p=p->next;
        }
        ListNode*q=p->next;
        p->next=NULL;
        p=q;
        while(p && p->next)
        {
            p=p->next;
        }
        if(!p)return head;
        p->next=head;
        return q;
    }
};