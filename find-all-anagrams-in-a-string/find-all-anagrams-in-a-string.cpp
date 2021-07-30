class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        string v1="0000000000000000000000000";
        string v2="0000000000000000000000000";
        for(int i=0;i<p.size();i++)
            v2[p[i]-'a']++;
        int i=0,j=0;
        while(i<s.size())
        {
            v1[s[i]-'a']++;
            if(i-j+1==p.size())
            {
             if(v1==v2)ans.push_back(j);
             v1[s[j]-'a']--;
             j++;
            }
            i++;
        }
        return ans;
    }
};