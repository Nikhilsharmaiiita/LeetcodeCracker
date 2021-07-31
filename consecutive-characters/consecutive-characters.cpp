class Solution {
public:
    
    int maxPower(string s) {
        char r;
        int ans=1;
        int count=1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
                ans=max(ans,count);
                continue;
            }
            count=1;
        }
        return ans;
    }
};