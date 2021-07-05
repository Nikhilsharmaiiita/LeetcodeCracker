class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> row_minimum(n,0);
        vector<int> col_maximum(m,0);
        for(int i=0;i<n;i++)
        {
            row_minimum[i]=*min_element(matrix[i].begin(),matrix[i].end());
        }
        for(int i=0;i<m;i++)
        {
            int maximum=INT_MIN;
            for(int j=0;j<n;j++)
            {
                maximum=max(maximum,matrix[j][i]);
            }
            col_maximum[i]=maximum;
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==row_minimum[i] && matrix[i][j]==col_maximum[j])
                    ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};