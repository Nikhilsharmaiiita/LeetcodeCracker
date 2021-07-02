
class Solution {
public:
    string frequencySort(string s) {   
        unordered_map<char,int> freq;
        for(int i=0;i<s.size();i++)
           freq[s[i]]++;
        multiset<pair<int,char>> st;
        for(auto it:freq)
        {
            st.insert({-it.second,it.first});
        }
        int i=0;
        for(auto it : st)
        {
            int x=abs(it.first);
            while(x--)
            {
                s[i++]=it.second;
            }
        }
        return s;
    }
};