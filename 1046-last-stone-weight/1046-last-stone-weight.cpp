class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // 8,7,4,2,1,1
        // 4,2,1,1,1
        // 2,1,1,1
        // 1,1,1
        
        priority_queue<int> pq;
        for(int x : stones) pq.push(x); 
        while(pq.size() > 1){
            // if(pq.size() == 1) break;
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();
            // cout << x << " " << y << " pq size" << pq.size() << endl; 
            if(x != y) pq.push(x - y); 
        }
        return pq.size() == 0 ? 0 : pq.top(); 
    }
};