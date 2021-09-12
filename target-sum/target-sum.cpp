class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        sum+=nums[i];
        
        if((abs(sum+target))%2)return 0;
        
        sum=(sum+target)/2;
        int count0=0;
        
        for(int i=0;i<n;i++)
            if(nums[i]==0)count0++;
        if(sum<0)return 0;
        vector<vector<int>> dp(n+1,vector<int> (sum+1,0));
        for(int i=0;i<n+1;i++)dp[i][0]=1;
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(nums[i-1]<=j && nums[i-1]!=0)
                    dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                else dp[i][j]=dp[i-1][j];           
            }
        }
        return pow(2,count0)*dp[n][sum];
    }
};