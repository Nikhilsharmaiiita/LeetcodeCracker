class Solution {
public:
    void rev(ListNode **head,ListNode*prev,ListNode*cur)
    {
      if(cur)
      {
          rev(head,cur,cur->next);
          cur->next=prev;
      }
      else 
      {
          *head=prev;
      }
    }
    ListNode* reverseList(ListNode* head) {
        rev(&head,NULL,head);
        return head;
    }
};