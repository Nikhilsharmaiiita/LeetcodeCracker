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
        ListNode*slow,*fast;
        slow=fast=head;
        if(!slow || !slow->next)return false;
        do
        {
            slow=slow->next;
            fast=fast->next->next;
        }while(slow!=fast && fast && fast->next);
        
        if(slow==fast)return true;
        return false;
    }
};