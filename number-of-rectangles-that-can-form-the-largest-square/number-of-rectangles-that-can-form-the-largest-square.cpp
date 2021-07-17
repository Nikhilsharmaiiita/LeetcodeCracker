class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
       unordered_map<int,int> m;
        int maxx=0;
        int y;
        for(int i=0;i<rectangles.size();i++)
        {
            int x=min(rectangles[i][0],rectangles[i][1]);
            m[x]++;
            if(x>=maxx)
            {
                maxx=x;
                y=m[x];
            }
        }
        return y;
    }
};