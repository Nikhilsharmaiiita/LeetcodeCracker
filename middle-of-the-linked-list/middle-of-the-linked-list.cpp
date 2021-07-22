
class Solution {
public:
    int count(ListNode* head)
    {
        int sum=0;
        while(head)
        {
            sum++;
            head=head->next;
        }
        return sum;
    }
    
    ListNode* middleNode(ListNode* head) {
        //cnt is number of element in linked list
        int cnt=count(head);
        //1 2 3 4 5 
        //1 2 3 4 5 6 
        int x=cnt/2;
        while(x--)
            head=head->next;
        return head;
    }
};