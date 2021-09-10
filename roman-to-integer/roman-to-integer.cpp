class Solution {
public:
    int romanToInt(string s) {
        map<char,int> M;
        M['I']=1;
        M['V']=5;
        M['X']=10;
        M['L']=50;
        M['C']=100;
        M['D']=500;
        M['M']=1000;
        int res=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(M[s[i]]>=M[s[i+1]])res+=M[s[i]];
            else res-=M[s[i]];
        }
        res+=M[s[s.size()-1]];
        return res;
    }
};