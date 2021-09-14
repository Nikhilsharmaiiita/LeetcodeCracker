class Solution {
public:
    void fun(int start,int end,int k,vector<vector<int>> &res,vector<int> &cont)
    {
        //base case
        if(cont.size()==k)
        {
            res.push_back(cont);
            return;
        }
        if(cont.size()>k)return;
        if(start>end)return;
        
        //rec step
        fun(start+1,end,k,res,cont);
        cont.push_back(start);
        fun(start+1,end,k,res,cont);
        cont.pop_back();
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> cont;
        fun(1,n,k,res,cont);
        return res;
    }
};