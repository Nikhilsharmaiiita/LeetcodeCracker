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
    ListNode* deleteDuplicates(ListNode* head) {
     ListNode *dummy=new ListNode(5);
        if(!head)return head;
        ListNode*ans=dummy;
     int count=1;
     int cur=head->val;
     ListNode *pos=head;
     head=head->next;
     while(head)
     {
      if(cur!=head->val)
      {
         if(count==1)
         {
             dummy->next=pos;
             dummy=pos;
         }
          pos=head;
          cur=head->val;
          count=1;
      }
      else
      {
          count++;
      }
         head=head->next;
     }
        if(count==1){dummy->next=pos;dummy=pos;}
        dummy->next=NULL;
        return ans->next;
    }
};