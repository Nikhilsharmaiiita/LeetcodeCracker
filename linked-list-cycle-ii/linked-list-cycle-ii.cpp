/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode *slow=head,*fast=head;
//         if(!head||!head->next)return NULL;
//         do
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//         }while(fast&&fast->next&&slow!=fast);
     
//         //now testing there is a cycle or not in a link list 
//         if(!fast || !fast->next)
//             return NULL;

//         fast=head;
//         while(fast!=slow)
//         {
//             slow=slow->next;
//             fast=fast->next;
//         }
//         return fast;
//  }
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)return NULL;
        ListNode*slow,*fast;
        slow=fast=head;
        do
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        while(fast&&fast->next&&slow!=fast);
        
        if(!fast || !fast->next)
            return NULL;
            fast=head;
        while(fast!=slow)
            {slow=slow->next;
            fast=fast->next;}
        return fast;
    }
};