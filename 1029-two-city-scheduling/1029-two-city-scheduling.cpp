class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        // Adding cost (A) - cost(B) to a priority queue
        int n = costs.size(); 
         
        priority_queue<pair<int, int>> q;
        for(int i = 0; i < n; ++i) q.push(make_pair(costs[i][1]-costs[i][0], i));  
        int i = 0, res = 0; 
        while(!q.empty() && i < n){ 
            res += (i >= n/2) ? costs[q.top().second][1] : costs[q.top().second][0];  
            i++; q.pop();
        } 
        return res;
    }
};