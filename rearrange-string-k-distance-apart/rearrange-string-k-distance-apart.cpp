

class Solution {
public:
    int freq[26];
    string rearrangeString(string s, int k) {
        if(k<=1)
            return s;
        
       string res=""; 
        memset(freq,0,sizeof(freq));
        int n=s.length();
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        priority_queue<pair<int,char>> pq1;
        
       
        
        for(int i=0;i<26;i++){
            if(freq[i]){
                pq1.push({freq[i],i+'a'});
            }
        }
        
       
        while(!pq1.empty()){
             int ptr=0;
          vector<pair<int,char>> cache;
                while(!pq1.empty() && ptr<k){
                    pair<int,char> p=pq1.top();
                    pq1.pop();
                    res.push_back(p.second);
                    p.first--;
                    if(p.first>0){
                        cache.push_back(p);
                    }
                      ptr++;
                }
            if(ptr>=k){
               for(int i=0;i<cache.size();i++){
                   pq1.push(cache[i]);
               }
            }
            if(ptr<k && cache.size()>0)
                return "";
        }
    
        
        return res;
    }
};