class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode*i=head;
    ListNode*ans=head;
    if(!head)return head;
    while(head->next)
    {
        head=head->next;
        if(i->val!=head->val)
        { i->next=head;
        i=i->next;}
    }
        i->next=NULL;
        return ans;
    }
};