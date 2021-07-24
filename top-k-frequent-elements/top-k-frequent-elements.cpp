class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        //heap type ? Max Heap
        //mean heap 1 2 3 4 5
        //1 2 3 4 5
        //we want 5 4 3 2 1
        multiset<pair<int,int>> pq;
        for(auto it:m)
        {
            pq.insert({it.second,it.first});
        }
        vector<int> v;
        for(int i=0;i<k;i++)
        {
            pair<int,int> x=*(--pq.end());
            v.push_back(x.second);
            pq.erase(--pq.end());
        }
        return v;
    }
};