class Solution {
public:
    void fun(int n,int k,vector<int> &cont,vector<vector<int>> &res,int start)
    {
        //base case
        if(cont.size()==k)
        {
            res.push_back(cont);
            return;
        }
        if(start==n+1)return;
        
        //recursive solution 
        cont.push_back(start);
        fun(n,k,cont,res,start+1);
        cont.pop_back();
        fun(n,k,cont,res,start+1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> cont;
        fun(n,k,cont,res,1);
        return res;
    }
};