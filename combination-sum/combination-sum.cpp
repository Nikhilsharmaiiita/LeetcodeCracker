class Solution {
public:
    void fun(vector<int> &nums,int target,int sum,int start,vector<vector<int>> &res,vector<int> &cont)
    {
        //basecase
        if(sum==target)
        {
            res.push_back(cont);
            return;
        }
        if(start==nums.size())return;
        //rec step
        if(sum+nums[start]<=target)
        {
            cont.push_back(nums[start]);
            fun(nums,target,sum+nums[start],start,res,cont);
            cont.pop_back();
        }
        fun(nums,target,sum,start+1,res,cont);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> cont;
        int sum=0;
        fun(candidates,target,sum,0,res,cont);
        return res; 
    }
};