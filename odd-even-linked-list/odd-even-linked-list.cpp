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
        if(!head || !head->next)return head;
        ListNode *l1=head,*l2=head->next;
        ListNode *p=l1,*q=l2;
        int i=0;
        head=l2->next;
        while(head)
        {
            if(i%2==0)
            {
                l1->next=head;
                head=head->next;
                l1=l1->next;
                i++;
            }
            else
            {
                l2->next=head;
                head=head->next;
                l2=l2->next;
                i++;
            }
        }
        l2->next=NULL;
        l1->next=q;
        return p;
    }
};