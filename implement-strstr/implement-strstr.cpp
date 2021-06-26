class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        if(m==0)return 0;
        int i=0,j=0;
        
        //LPS Part
        
        vector<int> LPS(m,0);
        for(i=1;i<m;i++)
        {
            j=LPS[i-1];
            while(j>0 && needle[j]!=needle[i])
                j=LPS[j-1];
            if(needle[j]!=needle[i])continue;
            else LPS[i]=j+1;
        }
        
        //KMP Part
        i=0;
        j=0;
        while(i<n)
        {
            while(i<n && j<m && haystack[i]==needle[j]){i++;j++;}
            if(j==m)return i-m;
            if(j==0)i++;
            else
            {
                j=LPS[j-1];
            }
        }
        return -1;
    }
};