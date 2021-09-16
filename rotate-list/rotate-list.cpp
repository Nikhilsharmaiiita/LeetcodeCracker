class Solution {
public:
    int count(ListNode *head)
    {
        int count=0;
        while(head)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* rev(ListNode*head,ListNode*point)
    {
        ListNode*p,*q,*r;
        q=r=point;
        p=head;
        while(p!=point)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    ListNode* rotateRight(ListNode* head, int k) {
          if(!head || !head->next)return head;
          int cnt=0;
          cnt=count(head);
          head=rev(head,NULL);
          k=k%cnt;
          ListNode*point=head;
          int flag=0;
          while(k--)
          {point=point->next;flag=1;}
          ListNode*l1=rev(head,point);
         if(flag==1) head->next=rev(point,NULL);
          return flag==0?rev(point,NULL):l1;
    }
};