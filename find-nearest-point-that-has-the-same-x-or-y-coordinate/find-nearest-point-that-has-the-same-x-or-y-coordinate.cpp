class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        multiset<pair<int,int>> pq;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                int dis=abs(points[i][0]-x)+abs(points[i][1]-y);
                pq.insert({dis,i});
            }
            if(pq.size()>1)
            {
                pq.erase(--pq.end());
            }
        }
        return pq.size()?pq.begin()->second:-1;
    }
};