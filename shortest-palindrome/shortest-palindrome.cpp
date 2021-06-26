class Solution {
public:
    string shortestPalindrome(string s) {
        int n=s.size();
        string rev=s;
        int i=0,j=n-1;
        while(i<j)
           swap(rev[i++],rev[j--]);
        string text=s+"$"+rev;
        //LPS
        n=text.size();
        vector<int> LPS(n,0);
        j=0;
        {
        for(int i=1;i<n;i++)
        {
         j=LPS[i-1];
            while(j>0 && text[i]!=text[j])
                j=LPS[j-1];
        
            if(text[i]==text[j]) LPS[i]=j+1;
        }
        }
        string ap=rev.substr(0,s.size()-LPS[n-1]);
        return ap+s;
    }
};