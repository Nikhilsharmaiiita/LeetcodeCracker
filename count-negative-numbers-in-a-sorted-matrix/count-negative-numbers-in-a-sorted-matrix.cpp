class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
     int row=grid.size();
     int col=grid[0].size();
        int i=0,j=col-1;
        int count=0;
        while(i>=0 && j>=0 && i<row && j<col)
        {
            if(grid[i][j]<0){count+=(row-i);j--;}
            else i++;
        }
        return count;
    }
};