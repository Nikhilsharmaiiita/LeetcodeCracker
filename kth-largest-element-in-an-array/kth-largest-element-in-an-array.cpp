class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    multiset<int> pq;
    for(int i=0;i<nums.size();i++)
    {
        pq.insert(-nums[i]);
        if(pq.size()>k)
            pq.erase(--pq.end());
    }
        return -*(--pq.end());
    }
};