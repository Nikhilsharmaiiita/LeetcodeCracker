class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        auto comp=[](pair<int,string> a,pair<int,string> b){
            if(a.first==b.first)
                return a.second>b.second;
            return a.first<b.first;
        };
        priority_queue<pair<int,string>,vector<pair<int,string>>,decltype(comp)> pq(comp);
        for(auto it :m)
        {
            pq.push({it.second,it.first});
        }
        vector<string> s;
        for(int i=0;i<k;i++)
        {
            s.push_back(pq.top().second);
            pq.pop();
        }
        return s;
    }
};