class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
     ListNode* l1,*l2;
        l1=head1;
        l2=head2;
        while(l1!=l2)
        {
            l1=l1->next;
            l2=l2->next;
            if(l1==l2)return l1;
            if(!l1)l1=head2;
            if(!l2)l2=head1;
           
        }
        return l1;
    }
};