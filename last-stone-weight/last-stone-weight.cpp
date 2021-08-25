class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 1) return stones[0];
        priority_queue<int> pq; 
        for(auto x : stones) pq.push(x); 
        while(pq.size() > 1){
            int last = pq.top(); 
            pq.pop();
            int second_last = pq.top(); 
            pq.pop(); 
            // cout << last << " " << second_last <<endl;
            if(last >= second_last){
                pq.push(last - second_last); 
            }
        } 
        
        return pq.top(); 
    }
};