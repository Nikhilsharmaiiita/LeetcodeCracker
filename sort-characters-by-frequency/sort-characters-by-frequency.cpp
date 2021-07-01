vector<int> freq(256,0);
class Solution {
public:
    string frequencySort(string s) {   
for(int i=0;i<s.size();i++)
    freq[s[i]]++;
        sort(s.begin(),s.end(),[=](char x,char y){
             if(freq[x]==freq[y])return x<y;
             return freq[x]>freq[y];
        });
        for(int i=0;i<256;i++)
    freq[i]=0;
        return s;
    }
};