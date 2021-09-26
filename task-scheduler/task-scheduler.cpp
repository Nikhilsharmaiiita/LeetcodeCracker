class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int m[26]={0};
        for(char c:tasks)
            m[c-'A']++;
        sort(m,m+26);
        int max_val=m[25]-1;
        int slots = max_val*n;
        
        for(int i=0;i<=24;i++)
            slots-=min(m[i],max_val);
        
        return slots>0 ? slots+tasks.size() : tasks.size();
    }
};