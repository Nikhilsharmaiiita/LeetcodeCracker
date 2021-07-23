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
        if(x==count)return head;
        p=head;
        while(x>1)
        {
            x--;
            p=p->next;
        }
        ListNode*q=p->next;
        p->next=NULL;
        p=q;
        while(p->next)
        {
            p=p->next;
        }
        p->next=head;
        return q;
    }
};