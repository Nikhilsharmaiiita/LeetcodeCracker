class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<pair<int,int>> pq;
        int i=0;
        vector<int> ans;
        for(;i<k-1;i++)pq.insert({nums[i],i});
        while(i<nums.size())
        {
            pq.insert({nums[i],i});
            auto it=*(--pq.end());
            while(i-it.second>=k)
            {
                pq.erase(--pq.end());
                it=*(--pq.end());
            }
            ans.push_back(it.first);
            i++;
        }
        return ans;
    }
};