class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    //     vector<vector<int>> ans;
    //     priority_queue<pair<int,pair<int,int>>> pq;
    //     for(int i=0;i<points.size();i++)
    //     {
    //         int dis=sqrt(points[i][0]*points[i][0]+points[i][1]*points[i][0]);
    //         pq.push({dis,{points[i][0],points[i][1]}});
    //         if(pq.size()>k)
    //         {
    //             pq.pop();
    //         }
    //     }
    //     while(pq.size())
    //     {
    //         ans.push_back({pq.top().second.first,pq.top().second.second});
    //         pq.pop();
    //     }
    //     return ans;
    // }
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