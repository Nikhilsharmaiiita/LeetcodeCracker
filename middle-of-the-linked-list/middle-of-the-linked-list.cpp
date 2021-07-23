
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*slow,*fast;
        slow=fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;
        }
        return slow;
    }
};