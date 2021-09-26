class Solution {
public:
    void fun(int open,int close,vector<string> &ans,string &res)
    {
        //base case
        if(open==0 && close==0)
        {
            ans.push_back(res);
            return;
        }
        //rec step
        if(open!=0)
        {
            res.push_back('(');
            fun(open-1,close,ans,res);
            res.pop_back();
        }
        if(close>open)
        {
            res.push_back(')');
            fun(open,close-1,ans,res);
            res.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string res;
        fun(n,n,ans,res);
        return ans;
    }
};