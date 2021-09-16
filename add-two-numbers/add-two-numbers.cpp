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
    int count(ListNode*head)
    {
        ListNode*temp=head;
        int count=0;
        while(temp)
        {
            temp=temp->next;
            count++;
        }
        return count;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(count(l2)>count(l1))
        return addTwoNumbers(l2,l1);
        ListNode* p=l1;
        int carry=0;
        while(l1 || l2 || carry)
        {
            int first=l1?l1->val:0;
            int second=l2?l2->val:0;
            int sum=(first+second+carry);
            if(l1)
            l1->val=sum%10;
            carry=sum/10;
            if(l1->next==NULL && carry)
            {
               ListNode* new_node=new ListNode(carry);
               l1->next=new_node;
               l1=l1->next;
               carry=0;
            }
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
        }
        return p;
    }
};