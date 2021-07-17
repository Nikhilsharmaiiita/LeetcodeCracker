class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();vector<int> v1;
        int c;if(r!=0)c=matrix[0].size();else return v1;
        vector<vector<int>> v(r+c-1);
        
        for(int i=0;i<r;i++)
        {
        for(int j=0;j<c;j++)
        {
            v[i+j].push_back(matrix[i][j]);
        }   
        }
        for(int i=2;i<r+c-1;i+=2)
        {
        reverse(v[i].begin(),v[i].end());
        }
        for(int i=0;i<r+c-1;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
              v1.push_back(v[i][j]);  
            }
        }
        return v1;
    }
};