class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j=0;
        int n=s.size();
        vector<int> freq(256,0);
        int max_win=INT_MIN;
        int i=0;
        int flag=0;
        while(i<n)
        {
            freq[s[i]]++;

            if(freq[s[i]]>1)
            {
                max_win=max(max_win,i-j);
                while(freq[s[i]]!=1)
                {
                    freq[s[j]]--;
                    j++;
                }
                flag=1;
            }
            max_win=max(max_win,i-j+1);
            i++;
        }
       return max_win==INT_MIN?0:max_win;
    }
};