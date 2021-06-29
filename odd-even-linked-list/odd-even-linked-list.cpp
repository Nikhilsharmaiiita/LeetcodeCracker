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
    ListNode* oddEvenList(ListNode* head) {
        ListNode*p1,*p2,*p3,*p4;
        if(!head || !head->next)return head;
        p1=head;
        p2=head->next;
        p3=p2; 
        p4=p1;
        while(p1!=NULL && p1->next!=NULL && p2!=NULL && p2->next!=NULL)
        {
            p1->next=p2->next;
            p1=p1->next;
            p2->next=p1->next;
            p2=p2->next;
        }
        p1->next=p3;
        return p4;
    }
};