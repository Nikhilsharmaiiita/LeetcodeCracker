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
    while(fast && fast->next && slow!=fast);
    if(slow==fast)return true;
    return false;
    }
};