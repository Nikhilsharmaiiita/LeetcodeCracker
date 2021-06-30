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
    int length(ListNode *x)
    {
        int cnt = 0;
        ListNode *temp = x;
        while (temp)
        {
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode * reverse(ListNode *x)
    {
        ListNode *p,*q,*r;
        q=r=NULL;
        p=x;
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int m = length(l1);
        int n = length(l2);
        
        if (m<n)
            return addTwoNumbers(l2,l1);
        //l1 will be greater
        ListNode *temp = l1;
        int diff = m-n ;
        while (diff--)
            temp = temp->next;
        
        while (temp)
        {
            temp->val +=l2->val;
            temp  = temp->next;
            l2 = l2->next;
        }
        ListNode *rev = reverse(l1);
        ListNode *p ;
        int carry = 0;
        int sum = 0;
        ListNode*head=rev;
        while (rev)
        {
            p = rev;
            sum=rev->val+carry;
            rev->val = (sum)%10;
            carry = (sum)/10;
            rev = rev->next;
        }
        if (carry)
        {
            ListNode *x = new ListNode (carry);
            p->next = x;
        }
        return reverse(head);
        
        
    }
};