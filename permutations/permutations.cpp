class Solution {
public:
    void fun(vector<vector<int>> &res, vector<int> &cont,vector<int> & nums,vector<int> &vis)
    {
        //base case
        if(cont.size()==nums.size())
        {
            res.push_back(cont);
            return;
        }
        //rec step
        for(int i=0;i<nums.size();i++)
        {
            if(vis[i]==0)
            {
                cont.push_back(nums[i]);
                vis[i]=1;
                fun(res,cont,nums,vis);
                cont.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cont;
        vector<int> vis(nums.size(),0);
        fun(res,cont,nums,vis);
        return res;
    }
};