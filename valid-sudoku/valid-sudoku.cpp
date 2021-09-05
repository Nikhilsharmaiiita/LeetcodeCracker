class Solution {
public:
    bool row_valid(vector<char> &b)
    {
        vector<int> v(10,0);
        for(int i=0;i<9;i++)
        {
            if(b[i]=='.')continue;
            if(v[b[i]-'0']>0)return false;
            v[b[i]-'0']++;
        }
        return true;
    }
        bool col_valid(vector<vector<char>> &b,int col)
    {
        vector<int> v(10,0);
        for(int i=0;i<9;i++)
        { 
            if(b[i][col]=='.')continue;
            if(v[b[i][col]-'0']>0)return false;
            v[b[i][col]-'0']++;
        }
        return true;
    }
    bool chack_box(vector<vector<char>> &b,int i,int j)
    {
        vector<int> v(10,0);
        for(int row=i;row<i+3;row++)
        {
            for(int col=j;col<j+3;col++)
            {
                if(b[row][col]=='.')continue;
                if(v[b[row][col]-'0']>0)return false;
                v[b[row][col]-'0']++;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        bool ans=true;
        for(int i=0;i<9;i++)ans&=row_valid(board[i]);
        for(int i=0;i<9;i++)ans&=col_valid(board,i);
        for(int i=0;i<9;i=i+3)
        {
            for(int j=0;j<9;j=j+3)
            {
                ans&=chack_box(board,i,j);
            }
        }
        return ans;
    }
};