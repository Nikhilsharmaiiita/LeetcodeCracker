
class Solution {
public:
   ListNode* rev(ListNode*left,ListNode*right)
    {
        ListNode*p,*q,*r;
        r=NULL;
        q=right;
        p=left;
       while(p!=right)
       {
           r=q;
           q=p;
           p=p->next;
           q->next=r;
       }
       return q;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*p,*q,*r;
        ListNode*head1=head,*head2=head;
        ListNode*node=NULL;
        while(--left&&--right)
        {
         node=head1;
         head1=head1->next;
         head2=head2->next;
        }
        while(--right)head2=head2->next;
        if(node)node->next=rev(head1,head2->next);
        else head=rev(head1,head2->next);
        return head;
    }
};