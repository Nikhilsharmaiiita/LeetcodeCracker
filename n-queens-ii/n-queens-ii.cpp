class Solution {
public:
     bool chackCol(vector<string> &mat,int col)
    {
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            if(mat[i][col]=='Q')return false;
        }
        return true;
    }
    //diagonal chack
    bool chackdiagonal(vector<string> &mat,int row,int col)
    {
        int n=mat.size(),i=row,j=col;
        while(i>=0 && j>=0)
        {
            if(mat[i][j]=='Q')return false;
            else
            {
                i--;j--;
            }
        }
        i=row;j=col;
        while(i>=0 && j<n)
        {
            if(mat[i][j]=='Q')return false;
            else 
            {
                i--;
                j++;
            }
        }
        return true;
    }
    //fun  diffine here for rec function calling
    void fun(vector<vector<string>> &res,vector<string> &mat,int n)
    {
        //base case
        if(n==0)
        {
            res.push_back(mat);
            return;
        }
        //rec step
        for(int i=0;i<mat.size();i++)
        {
            if(chackCol(mat,i) && chackdiagonal(mat,mat.size()-n,i))
            {
                mat[mat.size()-n][i]='Q';
                fun(res,mat,n-1);
                mat[mat.size()-n][i]='.';
            }
        }
    }
    
    int solveNQueens(int n) {
       vector<vector<string>> res;
        vector<string> mat(n,string(n,'.'));
        fun(res,mat,n);
        return res.size();
    }
    int totalNQueens(int n) {
        return solveNQueens(n);
    }
};