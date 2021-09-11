class KthLargest {
public:
    int k;
    multiset<int> m;
    KthLargest(int k1, vector<int>& nums) {
        k=k1;
        for(auto it:nums)
        {m.insert(it);
        if(m.size()>k)
            m.erase(m.begin());}
    }
    
    int add(int val) {
        m.insert(val);
        if(m.size()>k)
        m.erase(m.begin());
        return *(m.begin());
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */