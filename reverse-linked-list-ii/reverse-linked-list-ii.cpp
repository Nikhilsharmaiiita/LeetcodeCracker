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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*p,*q,*r;
        ListNode *temp1=head;
        //find possition of left
        while(left>2)
        {
            temp1=temp1->next;
            left--;
        }
        ListNode *temp2=head;
        
        //find possition of right
        while(right>1)
        {
            temp2=temp2->next;
            right--;
        }
        
        //this code for reverseal
        p=left==1?temp1:temp1->next;
        q=temp2->next;
        r=temp2->next;
        ListNode*xy=temp2->next;
        while(p!=xy)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        
        //testing for single node 
        if(left==1)head=q;
        else{
        temp1->next=q;}
        return head;
    }
};