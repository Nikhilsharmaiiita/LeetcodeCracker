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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)return false;
        ListNode *slow,*fast;
        slow=fast=head;
        do
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        while(fast&&fast->next&&fast!=slow);
        //chacking
        if(!fast || !fast->next)return false;
        else return true;
    }
};