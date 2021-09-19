class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string text1=s+s;
        string text2=text1.substr(1,text1.size()-2);
        int x=text2.find(s);
        if(x==string::npos)return false;
        return true;
    }
};