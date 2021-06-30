class MaxStack {
public:
    /** initialize your data structure here. */
    vector<int>v1;
    vector<int> v2;
    vector<int> v3;
    MaxStack() {
        
    }
    
    void push(int x) {
        v1.push_back(x);
        if(v2.size()==0)v2.push_back(x);
        else v2.push_back(max(x,v2.back()));
    }
    
    int pop() {
        
        if(v1.size())
        {
            int x=v1.back();
            v1.pop_back();
            v2.pop_back();
            return x;
        }
        return -1;
    }
    
    int top() {
        return v1.back();
    }
    
    int peekMax() {
        return v2.back();
    }
    
    int popMax() {
        int x=v2.back();
        while(v1.back()!=x)
        {
            v3.push_back(v1.back());
            v1.pop_back();
            v2.pop_back();
        }
         v1.pop_back();
         v2.pop_back();
        //push back the pop element
        while(v3.size())
        {
           v1.push_back(v3.back());
            if(v2.size()==0)v2.push_back(v3.back());
            else v2.push_back(max(v3.back(),v2.back()));
            v3.pop_back();
        }
        return x;
    }
    
};

/**
 * Your MaxStack object will be instantiated and called as such:
 * MaxStack* obj = new MaxStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->peekMax();
 * int param_5 = obj->popMax();
 */