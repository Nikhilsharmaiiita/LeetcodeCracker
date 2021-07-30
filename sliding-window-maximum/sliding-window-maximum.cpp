class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>  pq;
        vector<int> ans;
        int j=0,i=0;

        while(i<nums.size())
        {
            pq.push({nums[i],i});
            while(pq.size()>=k && pq.top().second<j)
            pq.pop();
            if(pq.size()>=k){
                ans.push_back(pq.top().first);
                j++;
            }
            i++;
        }
        return ans;
    }
};