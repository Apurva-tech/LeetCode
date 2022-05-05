class MyStack {
public:
    queue<int>q;
    int s=0;
    void push(int x){
        s=q.size();
        q.push(x);
        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    
    int pop(){
        s=q.front();
        q.pop();
        return s;
    }
        
    int top(){
        return q.front();
    }
    
    
    bool empty(){
        return q.empty();
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