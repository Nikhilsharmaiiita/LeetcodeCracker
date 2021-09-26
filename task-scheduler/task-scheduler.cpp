class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector <int> m(26,0);
        for(int i = 0; i < tasks.size(); i++){
            m[tasks[i]-'A']++;
        }
        
        sort(m.rbegin(),m.rend());
        
        int f = m[0];
        
        int idle_time = (f - 1) * n;
        for(int i = 1; i < m.size(); i++){
            idle_time -= min(f - 1, m[i]);
            if(idle_time < 0)
                return tasks.size();
        }
        
        return tasks.size() + idle_time;
    }
};