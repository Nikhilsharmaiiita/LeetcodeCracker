class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int copy_k;
    KthLargest(int k, vector<int>& nums)
    {
        copy_k=k;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
            if(pq.size()>copy_k)
            {
                pq.pop();}
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */