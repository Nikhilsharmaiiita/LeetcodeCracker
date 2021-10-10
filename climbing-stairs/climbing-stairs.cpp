class Solution {
public:
    int count(int n,vector<int> &dp)
    {
        //base cond
        // if something is done already then not compute again
        if(dp[n]!=-1)return dp[n];
            
        if(n==1)return dp[1]=1;
        if(n==2)return dp[2]=2;
        //rec step
        return dp[n]=count(n-1,dp)+count(n-2,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return count(n,dp);
    }
};