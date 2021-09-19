class Solution {
public:
    string longestPalindrome(string s) {
        //dp aproach
        int n=s.size();
        vector<vector<bool>> dp(n+1,vector<bool> (n+1,false));
        //one length
        int index=0,mx=1;
        for(int i=0;i<n;i++)
            dp[i][i]=true;
        //2 length
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=true;
                if(mx<2){index=i;mx=2;}
            }
        }
        //for more than 2 length
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<n-k+1;i++)
            {
                int j=i+k-1;
                if(dp[i+1][j-1] && s[i]==s[j])
                {
                    dp[i][j]=true;
                    if(mx<k)
                    {
                        mx=k;
                        index=i;
                    }
                }
            }
        }
        string ans="";
        for(int i=index;i<index+mx;i++)
        ans+=s[i];
        return ans;
    }
};