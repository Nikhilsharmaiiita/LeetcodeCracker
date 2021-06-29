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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)return head;
        vector<ListNode*> st;
        ListNode dummy(5);
        ListNode* p=&dummy;
        while(head)
        {
            st.push_back(head);
            head=head->next;
            if(head)
            {
            st.push_back(head);
            head=head->next;
            }
            while(st.size())
            {
                p->next=st[st.size()-1];
                st.pop_back();
                p=p->next;
            }
            if(!head)p->next=NULL;
        }
        return dummy.next;
    }
};