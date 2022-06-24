class Solution {
public:
    bool isPossible(vector<int>& target) {
        int n = target.size();
        if(n == 1 && target[0] != 1) return false; 
        priority_queue<int> pq;
        long totalsum = 0;
        for(int i =0;i<n;i++){
            totalsum += target[i];
            pq.push(target[i]);
        }
        while(!pq.empty()){
            if(pq.top() == 1) return true; 
            int x =  2*pq.top() - totalsum; 
            int y = (totalsum - pq.top());  
            if(y == 1) return true;  
            if(x%y <= 0) return false;  
            totalsum = y + x%y;  
            pq.pop();
            pq.push(x%y);
        }
        return false;
    }
};