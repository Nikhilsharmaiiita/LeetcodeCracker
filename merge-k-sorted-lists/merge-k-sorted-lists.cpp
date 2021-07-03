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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return NULL;
        set<pair<int,ListNode*>> st;
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i])
            {
                st.insert({lists[i]->val,lists[i]});
                lists[i]=lists[i]->next;
            }
        }
        ListNode*p=new(ListNode);
        p->val=5;
        ListNode*q=p;
        for(auto it:st)
        {
            p->next=it.second;
            p=p->next;
        }
        p->next=NULL;
        return q->next;
    }
};