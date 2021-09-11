class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        multiset<pair<int,int>> pq;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                pq.insert({abs(x-points[i][0])+abs(y-points[i][1]),i});
            }
        }
        if(pq.size()==0)return -1;
        return (*pq.begin()).second;
    }
};