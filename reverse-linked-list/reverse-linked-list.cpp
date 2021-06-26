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
    /*method-2 function
    void reverce(ListNode **head,ListNode *q,ListNode *p)
    {
        if(p)
        {
            reverce(head,p,p->next);
            p->next=q;
        }
        else 
        {
            (*head)=q;
        }
    }*/
    ListNode* reverseList(ListNode* head) {
        //method -2
        //reverce(&head,NULL,head);
        //return head;
        
        // method -1
        /*
        ListNode *p,*q,*r;
        q=r=NULL;
        p=head;
        while(p)
        {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
        }
        return q;
        */
        
        //method -3
        ListNode *new_node=NULL,*temp;
        while(head)
        {   
            temp=head->next;
            head->next=new_node;
            new_node=head;
            head=temp;
        }
        
        return new_node;
         }
};