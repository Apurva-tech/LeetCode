class MyStack {
public:
    queue<int>q;
    int s=0;
    void push(int x) {
        s=q.size();
        q.push(x);
        for(int i=0;i<s;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int pop() {
        s=q.front();
        q.pop();
        return s;
    }
    
    
    int top() {
        return q.front();
    }
    
    
    bool empty() {
        return q.empty();
    }
};
