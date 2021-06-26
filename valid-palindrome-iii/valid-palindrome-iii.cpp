class Solution {
public:
    int lcs(string s1 , string s2)
    {
         int **dp = new int*[s1.size()+1];
        for (int i = 0 ;i<=s1.size();i++)
           dp[i] = new int[s1.size()+1];
 
        for (int i=0 ;i<=s1.size();i++)
        {
            for (int j =0 ;j<=s1.size();j++)
            {
                if (i==0||j==0)
                    dp[i][j]=0;
                else if (s1[i-1]==s2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else
                {
                    dp[i][j] = max (dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        return dp[s1.size()][s1.size()];
        
    }
    bool isValidPalindrome(string s, int k) {
      
        string rev = s;
        reverse(rev.begin(),rev.end());
        
        int temp = lcs(s,rev);
        
        return temp>= s.size()-k;
    }
};