class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> s;
        while(head)
        {
            //s.end()--> not there
            // !s.end()--> its there
            
            if(s.find(head)!=s.end())
                return true;
            s.insert(head);
            head=head->next;
        }
        return false;
  
        // if(!head || !head->next)return false;
        // ListNode *slow,*fast;
        // slow=fast=head;
        // do
        // {
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // while(fast&&fast->next&&fast!=slow);
        // //chacking
        // if(!fast || !fast->next)return false;
        // else return true;
    }
};