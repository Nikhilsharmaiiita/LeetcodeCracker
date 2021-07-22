class Solution {
public:
    //this is the count the number of element in a list
    int count(ListNode *head)
    {
        int sum=0;
        while(head)
        {
            sum++;
            head=head->next;
        }
        return sum;
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(count(l1)<count(l2))return addTwoNumbers(l2,l1);
        int carry=0;
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        while(temp1 || temp2 || carry)
        {
            int first=temp1?temp1->val:0;
            int second=temp2?temp2->val:0;
            carry=(carry+first+second);
            int data=carry%10;
            temp1->val=data;
            carry/=10;
            if(temp1->next==NULL && carry!=0)
            {
                ListNode * p=new ListNode(carry);
                temp1->next=p;
                carry/=10;
            }
            temp1=temp1?temp1->next:NULL;
            temp2=temp2?temp2->next:NULL;
        }
        return l1;
    }
};