class Solution {
public:
    // int change(int amount, vector<int>& coins) {
    //     int n=coins.size();
    //     vector<vector<int>> dp(n+1,vector<int> (amount+1,0));
    //     for(int i=0;i<=n;i++)dp[i][0]=1;
    //     for(int i=1;i<=n;i++)
    //     {
    //         for(int j=1;j<=amount;j++)
    //         {
    //             if(coins[i-1]<=j)
    //                 dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
    //             else dp[i][j]=dp[i-1][i];
    //         }
    //     }
    //     return dp[n][amount];
    // }
        int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size()+1,vector<int> (amount+1,0));
        for(int i=0;i<=coins.size();i++)dp[i][0]=1;
        
        for(int i=1;i<=coins.size();i++)
        {
            for(int j=1;j<amount+1;j++)
            {
                if(coins[i-1]<=j)
                dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[coins.size()][amount];
    }
};