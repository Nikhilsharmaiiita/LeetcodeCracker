class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
    //base case
    if(!head || !head->next)return head;
    //rec step
    ListNode *ans=head->next;
    head->next=swapPairs(ans->next);
    ans->next=head;
    return ans;
    }
};