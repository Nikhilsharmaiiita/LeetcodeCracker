class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multiset<pair<int,pair<int,int>>> pq;
        
        for(auto x:points)
        {
            int dis=x[0]*x[0]+x[1]*x[1];
            pq.insert({dis,{x[0],x[1]}});
            while(pq.size()>k)
            {
                pq.erase(--pq.end());
            }
        }
        //nlogk
        vector<vector<int>> ans;
        for(auto it:pq)
        {
            ans.push_back({it.second.first,it.second.second});
        }
        return ans;
        
    }
};