class Solution {
public:
    ListNode* reverse(ListNode* first, ListNode* last)
    {
        ListNode *p,*q,*r;
        p=first;
        q=r=NULL;
        while ( p!= last )
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
   }   
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        auto node=head;
        for (int i=0; i < k; ++i)
        {
            if ( ! node  )
                return head; // nothing to do list too sort
            node = node->next;
        }
        auto new_head = reverse( head, node);
        //now we call in other left over part
        head->next = reverseKGroup( node, k);
        return new_head;
    }
};