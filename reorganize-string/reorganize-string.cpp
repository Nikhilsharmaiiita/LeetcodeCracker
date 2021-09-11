class Solution {
public:
    string reorganizeString(string s) {
        string ans;
        unordered_map<char,int> m;
        for(auto it:s)
        m[it]++;
        priority_queue<pair<int,char>> pq;
        for(auto it:m)
        {
            pq.push({it.second,it.first});
        }
        while(pq.size())
        {
            int x1=pq.top().first;
            int x2=pq.top().second;
            ans+=x2;
            x1--;
            pq.pop();
            if(pq.size())
            {
                int y1=pq.top().first;
                int y2=pq.top().second;
                ans+=y2;
                y1--;
                pq.pop();
                if(y1)
                {
                    pq.push({y1,y2});
                }
            }else if(x1)return "";
            if(x1)pq.push({x1,x2});
        }
        return ans;
    }
};