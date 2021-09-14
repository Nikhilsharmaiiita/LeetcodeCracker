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
            fun(nums,target,sum+nums[start],start+1,res,cont);
            cont.pop_back();
        }
        int j=start;
        while(j<nums.size()-1 && nums[j]==nums[j+1])j++;
        fun(nums,target,sum,j+1,res,cont);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> cont;
        int sum=0;
        sort(candidates.begin(),candidates.end());
        fun(candidates,target,sum,0,res,cont);
        return res; 
    }
    
};