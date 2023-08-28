class MyStack {
public:
    queue<int> ans;
    MyStack() {
        
    }
    
    void push(int x) {
        int len = ans.size();
        ans.push(x);
        while(len-- > 0){
            int temp = ans.front();
            ans.pop();
            ans.push(temp);
        }
    }
    
    int pop() {
        int temp = ans.front();
        ans.pop();
        return temp;
    }
    
    int top() {
        return ans.front();
    }
    
    bool empty() {
        return ans.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */