class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        //comp function
       multiset<pair<int,string>> pq;
        for(auto it :m)
        {
            pq.insert({-it.second,it.first});
            if(pq.size()>k)
            {
                pq.erase(--pq.end());
            }
        }
        vector<string> s;
        for(auto it:pq)
        {
            s.push_back(it.second);
        }
        return s;
    }
};