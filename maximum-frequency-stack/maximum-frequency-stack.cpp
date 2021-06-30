class FreqStack {
public:
    //in this we store the cnt of all the element
    unordered_map<int,int> cnt;
    
    //in this we maintain the freq 
    unordered_map<int,stack<int>> frq;
    
    int max_count=INT_MIN;

    FreqStack() {
        
    }
    
    void push(int val) {
        cnt[val]++;
        int count=cnt[val];
        frq[count].push(val);
        max_count=max(max_count,count);
    }
    
    int pop() {
        int last=frq[max_count].top();
        frq[max_count].pop();
        cnt[last]--;
        if(frq[max_count].empty())
            max_count--;
        return last;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */