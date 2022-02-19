class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> maxhp; 
        int m = INT_MAX, diff = INT_MAX;
        for(auto i : nums){
            if(i%2 != 0) i *= 2; 
            m = min(m , i); 
            maxhp.push(i); 
        }
        while(maxhp.top()%2 == 0){
            int mx = maxhp.top(); 
            maxhp.pop(); 
            diff = min(diff, mx - m); 
            m = min(m, mx/2); 
            maxhp.push(mx/2); 
        }
        
        return min(diff, maxhp.top() - m); 
    }
};