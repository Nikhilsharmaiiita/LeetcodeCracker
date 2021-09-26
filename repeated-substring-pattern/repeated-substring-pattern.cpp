class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string text1=s+s;
        string text2=text1.substr(1,text1.size()-2);
        int x=s.size();
        vector<int> LPS(x,0);
        int j=0;
        
        //LPS Array 
        for(int i=1;i<x;i++)
        {
            j=LPS[i-1];
            while(j>0 && s[i]!=s[j])
            j=LPS[j-1];
            if(s[i]==s[j])LPS[i]=j+1;
        }
        //KMP
        int i=0;
        j=0;
        int m=text2.size();
        while(i<m)
        {
            while(i<m && j<x && text2[i]==s[j]){i++;j++;}
            if(j==x)return true;
            if(j==0)i++;
            else j=LPS[j-1];
        }
        return false;
    }
};