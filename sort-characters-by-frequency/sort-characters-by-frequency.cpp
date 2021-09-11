class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(auto it:s)m[it]++;
        sort(s.begin(),s.end(),[&m](char a,char b){
            if(m[a]==m[b])
             return a>b;
            return m[a]>m[b];
        });
        return s;
    }
};