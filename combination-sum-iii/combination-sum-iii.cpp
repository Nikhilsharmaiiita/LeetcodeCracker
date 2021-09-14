class Solution {
public:
    void fun(int n,int start,int k,vector<vector<int>> &res,vector<int> &cont,int sum)
    {
        //base case
        if(sum==n && cont.size()==k)
        {
            res.push_back(cont);
            return;
        }
        if(start>9)return;
        if(sum+start<=n)
        {
            cont.push_back(start);
            fun(n,start+1,k,res,cont,sum+start);
            cont.pop_back();
        }
         fun(n,start+1,k,res,cont,sum);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> cont;
        fun(n,1,k,res,cont,0);
        return res;
    }
};