class MinStack {
public:
    stack<int> s;
    stack<int> s_min;
    MinStack() {
        
    }
    
    void push(int val) {
       s.push(val);
       if(s_min.empty() || val<=s_min.top()) s_min.push(val);
       else s_min.push(s_min.top());
    }
    
    void pop() {
        if(!s.empty())
        {
        s.pop();
        s_min.pop();
        }
       
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return s_min.top();

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