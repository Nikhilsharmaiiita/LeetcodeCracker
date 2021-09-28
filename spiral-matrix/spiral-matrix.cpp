class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int r=matrix.size(),c;if(r!=0)c=matrix[0].size();
        
        int top=0,down=r-1,left=0,right=c-1;
        int dir=0;
        vector<int> v;
        if(r==0)return v;
        while(top<=down && left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    v.push_back(matrix[top][i]);
                }top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;i++)
                {
                    v.push_back(matrix[i][right]);
                }right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    v.push_back(matrix[down][i]);
                }down--;
            }
            else
            {
                for(int i=down;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                }left++;
            }
            dir=(++dir)%4;
        }
    return v;
        
        
    }
};