class MinStack {
public:
    /** initialize your data structure here. */;
    
    vector<int> v1;
    vector<int> v2;
    MinStack() {
        
    }
    
    void push(int val) {
        v1.push_back(val);
        if(v2.size()==0)v2.push_back(val);
        else v2.push_back(min(val,v2.back()));
    }
    
    void pop() {
        if(v1.size())
        {
            v1.pop_back();
            v2.pop_back();
        }
    }
    
    int top() {
        return v1.back();
    }
    
    int getMin() {
        return v2.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */