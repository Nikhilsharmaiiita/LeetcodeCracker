class Solution {
public:
    void fun(vector<int> &nums,int target,vector<vector<int>> &res,vector<int> &cont,int start,int sum)
    {
        //base case
        if(target==sum)
        {
            res.push_back(cont);
            return;
        }
        if(start==nums.size())
            return;
        if(target<sum)return;
        //recusive step
        //not include
        fun(nums,target,res,cont,start+1,sum);
        if(sum+nums[start]<=target)
        {
            cont.push_back(nums[start]);
            fun(nums,target,res,cont,start,sum+nums[start]);
            cont.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> cont;
        fun(candidates,target,res,cont,0,0);
        return res;
    }
};