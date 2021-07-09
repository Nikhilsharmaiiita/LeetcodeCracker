class Solution {
public:
    bool SubSetSum(vector<int> &nums ,int sum)
    {
        vector<vector<int>> dp(nums.size()+1,vector<int> (sum+1,false));
        int n=nums.size()+1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0 && j>0)dp[i][j]=false;
                else if(j==0)dp[i][j]=true;
                else if(nums[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
                }
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n-1][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        if(sum%2==1)return false;
        else 
        {
            return SubSetSum(nums,sum/2);
        }
        }
};