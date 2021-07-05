class Solution {
public:
    // bool chackCol(vector<string> &mat,int col)
    // {
    //     int n=mat.size();
    //     for(int i=0;i<n;i++)
    //     {
    //         if(mat[i][col]=='Q')
    //             return false;
    //     }
    //     return true;
    // }
    // bool chackDiagonal(vector<string> &mat,int row,int col)
    // {
    //     int flag=0;int i=row,j=col;
    //     while(i>=0 && j>=0 && j<mat.size())
    //     {
    //         if(mat[i][j]=='Q')
    //         return false;
    //         else
    //         {
    //             i--;j--;
    //         }
    //     }
    //     i=row;j=col;
    //      while(i>=0 && j>=0 && j<mat.size())
    //     {
    //         if(mat[i][j]=='Q')
    //         return false;
    //         else
    //         {
    //             i--;j++;
    //         }
    //     }
    //     return true;
    // }
    void f(vector<bool> &col,vector<bool> &sd,vector<bool> &pd,int rem,vector<vector<string>> &res,vector<string> &cont)
    {
        //base case
        if(rem==0)
        {
            res.push_back(cont);
            return ;
        }
        //recurcive function
        int i,j=col.size()-rem;
        for(i=0;i<col.size();i++)
        {
            if(!col[i]&&!sd[i+j]&&!pd[i-j+col.size()-1])
            {
                col[i]=sd[i+col.size()-rem]=pd[i-j+col.size()-1]=true;
                cont[j][i]='Q';
                f(col,sd,pd,rem-1,res,cont);
                 cont[j][i]='.';
                col[i]=sd[i+col.size()-rem]=pd[i-j+col.size()-1]=false;
               
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<bool> col(n,false);
        vector<string> cont(n,string(n,'.'));
         vector<bool> sd(2*n-1,false);
         vector<bool> pd(2*n-1,false);
        f(col,sd,pd,n,res,cont);
        return res;
    }
};