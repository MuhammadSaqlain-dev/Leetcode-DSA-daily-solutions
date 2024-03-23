class MinStack {
private:
    stack<pair<int, int>> stk;
public:
    MinStack() {  }

    void push(int val) {
        if (stk.empty()) {
            stk.push({val, val});
        } else {
            stk.push({val, min(stk.top().second, val)});
        }
    }

    void pop() {
        if (!stk.empty()) {
            stk.pop();
        }
    }

    int top() { return stk.top().first; }

    int getMin() { return stk.top().second; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */