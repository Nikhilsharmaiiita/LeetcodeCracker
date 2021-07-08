class TimeMap {
public:
    /** Initialize your data structure here. */
    TimeMap() {
        
    }
    
    unordered_map<string, vector<int>> m1;
    unordered_map<string, vector<string>> m2;
    
    void set(string key, string value, int timestamp) {
        m1[key].push_back(timestamp);
        m2[key].push_back(value);
    }
    
    string get(string key, int timestamp) {
        
        //vector<int> v = m1[key];
        if (m1.find(key) == m1.end()) return "";
        
        int idx = lower_bound(m1[key].begin(), m1[key].end(), timestamp) - m1[key].begin();
        if (idx == m1[key].size()) return m2[key][idx - 1];
        else {
            if (timestamp < m1[key][0]) return "";
            else {
                if (m1[key][idx] == timestamp) return m2[key][idx];
                return m2[key][idx - 1];
            }
        }
    }
};