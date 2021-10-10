class Solution {
public:
    // num le sakte hai or nhi le sakte
    int count(vector<int> &nums,int s,vector<int> &dp)
    {
        int n=nums.size();
        if(s>=n)return 0;
        if(dp[s]!=-1)return dp[s];
        return dp[s]=max(nums[s]+count(nums,s+2,dp),count(nums,s+1,dp));
    }
    int rob(vector<int>& nums) {
    vector<int> dp(nums.size(),-1);
    return count(nums,0,dp);
    }
};