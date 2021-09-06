class Solution {
public:
    int count(ListNode *p)
    {
        int count=0;
        while(p)
        {
            count++;
            p=p->next;
        }
        return count;
    }
    bool isPalindrome(ListNode* head) {
         int cnt=count(head);
         stack<int> s;
         int x=cnt/2;
        while(x--)
        {
            s.push(head->val);
            head=head->next;
        }
        if(cnt%2==1)head=head->next;
        while(head)
        {
            if(s.top()!=head->val)return false;
            head=head->next;
            s.pop();
        }
        return true;
    }
};