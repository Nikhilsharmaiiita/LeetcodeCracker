class Solution {
public:
    bool repeatedSubstringPattern(string s) {
          string text=s+s;
          string pattern=text.substr(1,text.size()-2);
          int x=pattern.find(s);
        if(x==string::npos)return false;
        return true;
    }
};