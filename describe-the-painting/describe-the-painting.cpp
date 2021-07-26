class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& s) {
        map<long long,long long> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i][0]]+=s[i][2];
            m[s[i][1]]-=s[i][2];
        }
        vector<vector<long long>> res;
        vector<pair<long long,long long>> v;
        for(auto it:m)
        {
            v.push_back({it.first,it.second});
        }
        long long sum=0;
        for(int i=1;i<v.size();i++)
        {
            if(sum>=0 && sum+v[i-1].second>0)
            res.push_back({v[i-1].first,v[i].first,v[i-1].second+sum});
            else if(v[i-1].second>0)
            res.push_back({v[i-1].first,v[i].first,v[i-1].second});
            sum=v[i-1].second+sum;
        }
        return res;
    }
};