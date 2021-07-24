class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        // 1 2 3 4 5 --> -1 -2 -3 -4 -5 --> -5 -4 -3 -2 -1
        multiset<pair<int,int>> pq;
        for(auto it:m)
        {
            pq.insert({-it.second,it.first});
        }
        
        vector<int> v;
        for(int i=0;i<k;i++)
        { 
            v.push_back((*pq.begin()).second);
            pq.erase(pq.begin());
        }
        
        return v;
    }
};