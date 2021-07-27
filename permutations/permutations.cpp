class Solution {
public:
    void fun(vector<vector<int>> &res,vector<int> &cont,vector<bool> &vis,vector<int> &nums)
    {
        //base case
        int n=nums.size();
        if(cont.size()==n)
        {
            res.push_back(cont);
            return ;
        }
        //rec step
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                vis[i]=true;
                cont.push_back(nums[i]);
                fun(res,cont,vis,nums);
                cont.pop_back();
                vis[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
     vector<vector<int>> res;
        vector<int> cont;
        vector<bool> vis(nums.size(),false);
        fun(res,cont,vis,nums);
        return res;
    }
};