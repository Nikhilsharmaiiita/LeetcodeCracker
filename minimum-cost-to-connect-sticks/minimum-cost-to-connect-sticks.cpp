class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<sticks.size();i++)
        {
            pq.push(sticks[i]);
        }
        long long cost=0;
        while(pq.size()>1)
        {
            long long sum=pq.top();
            pq.pop();
            sum+=pq.top();
            pq.pop();
            pq.push(sum);
            cost+=sum;
        }
        return (int)cost;
    }
};