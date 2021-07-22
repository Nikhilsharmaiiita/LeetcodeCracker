class Solution {
public:
//this is using copying the address of the element 

//2nd method:- using slow fast pointer


 ListNode *detectCycle(ListNode *head) {
     set<ListNode*> s;
     while(head)
     {
         if(s.find(head)!=s.end())
         return head;
         s.insert(head);
         head=head->next;
     }
     return NULL;
        // ListNode *slow=head,*fast=head;
        // if(!head||!head->next)return NULL;
        // do
        // {
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }while(fast&&fast->next&&slow!=fast);
        // //now testing there is a cycle or not in a link list 
        // if(!fast || !fast->next)
        //     return NULL;
        // fast=head;
        // while(fast!=slow)
        // {
        //     slow=slow->next;
        //     fast=fast->next;
        // }
        // return fast;
 }};
