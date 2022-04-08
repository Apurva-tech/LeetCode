class KthLargest {
public:
    int K; 
    priority_queue<int,vector<int>,greater<int>> pq;
    
    KthLargest(int k, vector<int>& arr) {
        K = k; 
        for(auto x:arr) {
            pq.push(x); 
            if(pq.size() > k) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > K) pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */