/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode();
        ListNode* p=ans;
        while(l1 && l2)
        {
            if(l1->val<=l2->val)
            {ans->next=l1;
            ans=ans->next;
            l1=l1->next;
            }
            else 
            {
                ans->next=l2;
                ans=ans->next;
                l2=l2->next;
            }
        }
        if(l1)ans->next=l1;
        if(l2)ans->next=l2;
        return p->next;
    }
};