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
    ListNode* rev(ListNode* root)
    {
        ListNode *p,*q,*r;
        q=r=NULL;
        p=root;
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    
    int count(ListNode *root)
    {
        if(!root)return 0;
        return 1+count(root->next);
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(count(l1)<count(l2))return addTwoNumbers(l2,l1);
        int length_1=count(l1);
        int length_2=count(l2);
        ListNode *head1=l1,*head2=l2;
        
        while(length_1 != length_2)
        {
            head1=head1->next;
            length_1--;
        }
        
        while(head1)
        {
            head1->val+=head2->val;
            head1=head1->next;
            head2=head2->next;
        }
        l1=rev(l1);
        int carry=0;
        head1=l1;
        while(head1)
        {
            int c=carry;
            carry=(head1->val+carry)/10;
            head1->val=(head1->val+c)%10;
            if(!head1->next && carry)
            {
                ListNode *p=new ListNode(carry);
                head1->next=p;
                head1=head1->next;
            }
            head1=head1->next;
        }
        l1=rev(l1);
        return l1;
    }
};