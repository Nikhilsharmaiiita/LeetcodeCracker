class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> pq;
        
        for(auto x:points)
        {
            int dis=x[0]*x[0]+x[1]*x[1];
            pq.push({dis,{x[0],x[1]}});
            while(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<vector<int>> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return ans;
        
    }
};