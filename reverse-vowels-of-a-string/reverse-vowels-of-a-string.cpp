class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        vector<char> c;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||s[i]=='U')
                c.push_back(s[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||s[i]=='U')
            {
                s[i]=c[c.size()-1];
                c.pop_back();
            }     
        }
        return s;
    }
};