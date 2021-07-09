class LRUCache {
public:
    list<int> l;
    //key
    unordered_map<int,pair<int,list<int>::iterator>> m;
    // key,value,iterator
    
    int c;
    LRUCache(int capacity) {
        c=capacity;
    }
    
    int get(int key) {
        if(m.find(key)==m.end())return -1;
        int ans=m[key].first;
        l.erase(m[key].second);
        l.push_front(key);
        m[key].second=l.begin();
        return ans;
    }
    
    void put(int key, int value) {
        //if item is find in map 
        if(m.find(key)!=m.end())
        {
            l.erase(m[key].second);
            l.push_front(key);
            m[key].first=value;
            m[key].second=l.begin();
        }
        else if(l.size()<c)
        {
            l.push_front(key);
            m[key]={value,l.begin()};
        }
        else 
        {
            int x=l.back();
            l.pop_back();
            m.erase(x);
            l.push_front(key);
            m[key]={value,l.begin()};
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */