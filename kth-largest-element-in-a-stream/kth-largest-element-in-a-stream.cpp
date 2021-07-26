class KthLargest {
public:
    multiset<int> pq;
    int k_copy;
    KthLargest(int k, vector<int>& nums) {
        k_copy=k;
        for(auto it:nums)
        {
            pq.insert(it);
            if(pq.size()>k)
            pq.erase(pq.begin());
        }
    }
    
    int add(int val) {
        pq.insert(val);
        if(pq.size()>k_copy)pq.erase(pq.begin());
        return *pq.begin();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */