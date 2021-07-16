class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int p1=0,p2=0;
        int  count=t.size();
        vector<int> v(256,0);
        for(auto c:t)v[c]++;
        int end=INT_MAX,start=0;
        while(p2<n)
        {
         if(v[s[p2]]>0)count--;
            v[s[p2]]--;
            p2++;
            while(count==0)
            {
            if(p2-p1<end)
            {
                end=p2-p1;
                start=p1;
            }
                if(v[s[p1]]==0)
                    count++;
                v[s[p1]]++;
                p1++;
            }
        }
        return end==INT_MAX?"":s.substr(start,end);
        }
};