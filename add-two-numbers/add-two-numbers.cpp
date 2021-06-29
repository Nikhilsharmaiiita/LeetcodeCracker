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
    ListNode* head=NULL;
    ListNode* cur=NULL;
    void insertAtEnd(int data)
    {
       ListNode *p=new(ListNode);
       p->val=data;
       p->next=NULL;
        
       if(head==NULL)
        {
           head=p;
           cur=p;  
        }
        else
        {
        cur->next=p;
        cur=p;}
    }
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        int data=0;
        while(temp1 && temp2)
        {
        data+=(temp1->val+temp2->val);
        int endDigit=data%10;
        insertAtEnd(endDigit);
        data=data/10;
        temp1=temp1->next;
        temp2=temp2->next;
        }
        while(temp1)
        {
        data+=(temp1->val);
        int endDigit=data%10;
        insertAtEnd(endDigit);
        data=data/10;
        temp1=temp1->next;
        }
        while(temp2)
        {
        data+=(temp2->val);
        int endDigit=data%10;
        insertAtEnd(endDigit);
        data=data/10;
        temp2=temp2->next;
        }
        while(data)
        {
        int endDigit=data%10;
        insertAtEnd(endDigit);
        data=data/10;
        }
        return head;
    }
};