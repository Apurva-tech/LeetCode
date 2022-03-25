class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size(); 
        // sorting, cost AB 
        priority_queue<pair<int, int>> q;
        for(int i = 0; i < n; ++i) q.push(make_pair(costs[i][1]-costs[i][0], i)); 
        // while(!q.empty()){ 
        //     cout << q.top().first << " " << q.top().second << endl;
        //     q.pop();
        // }
        int i = 0, res = 0; 
        while(!q.empty() && i < n){ 
            res += (i >= n/2) ? costs[q.top().second][1] : costs[q.top().second][0]; 
            // cout << res << " ";
            i++; q.pop();
        } 
        return res;
    }
};