class Solution {
public:
ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x=n-1;
        ListNode* p1,*p2;
        p1=head;
        p2=head;
        while(x--)
        {
            p1=p1->next;
        }
        //here we delete first node
        
        if(p1->next==NULL)
        {
             head=head->next;
             return head;
        }
        
        //here we delete other than first node
        
        while(p1->next->next!=NULL)
        {
          p1=p1->next;
          p2=p2->next;
        }
        p2->next=p2->next->next;
        return head;
    }
};