class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        string v1(26,0);
        for(auto it:s1)
        v1[it-'a']++;
        string v2(26,0);
        int j=0;
        for(int i=0;i<s2.size();i++)
        {
            v2[s2[i]-'a']++;
            if(i-j+1==s1.size())
            {
                if(v1==v2)return true;
                v2[s2[j]-'a']--;
                j++;
            }
        }
        return false;
    }
};