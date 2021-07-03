class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>> pq;
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        
        //fill the priority queue
        for(auto it:m)
        {
            pq.push({it.second,it.first});
        }
        string ans="";
        while(!pq.empty())
        {
            char x1=pq.top().second;
            ans+=pq.top().second;
            int x2=pq.top().first;
            pq.pop();
            x2--;
            if(!pq.empty())
            {
                char y1=pq.top().second;
                ans+=pq.top().second;
                int y2=pq.top().first;
                pq.pop();
                y2--;
                if(y2)
                {
                    pq.push({y2,y1});
                }
            }else if(x2)return "";
            if(x2)
             pq.push({x2,x1}); 
        }
        return ans;
    }
};