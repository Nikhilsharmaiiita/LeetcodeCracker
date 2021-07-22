class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p,*q,*r;
        //p-> point to next node;
        //q->cur node 
        //r->prv node
        
        q=r=NULL;
        p=head;
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
    return q;
    }
};