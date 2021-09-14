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
        int prev=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(prev==nums[i])continue;
            if(vis[i]==0)
            {
                cont.push_back(nums[i]);
                vis[i]=1;
                prev=nums[i];
                fun(res,cont,nums,vis);
                cont.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cont;
        vector<int> vis(nums.size(),0);
        sort(nums.begin(),nums.end());
        fun(res,cont,nums,vis);
        return res;
    }
};