class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> m;
        multiset<pair<int,string>> pq;
        for(auto it:words)
        {
            m[it]++;
        }
        for(auto it:m)
        {
            pq.insert({-it.second,it.first});
            if(pq.size()>k)
            {
                pq.erase(--pq.end());
            }
        }
        vector<string> ans;
        while(pq.size())
        {
            ans.push_back((*pq.begin()).second);
            pq.erase(pq.begin());
        }
        return ans;
    }
};