class Solution {
private:
    const int inf = 1e6+5;
    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, -1, 1, 0};
    
    bool isValid(int index, int lim) {
        return (index >= 0 && index < lim);
    }
    
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        priority_queue<pair<int, pair<int, int>>> pq;
        vector<vector<int>> eff(m, vector<int>(n, inf));
        eff[0][0] = 0;
        pq.push({eff[0][0], {0, 0}});
        while(!pq.empty()){
            int effort = (-1) * pq.top().first;
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            pq.pop();
            if(x == m-1 && y == n-1) return effort;
            for(int k=0; k<4; k++){
                int i = x+dx[k];
                int j = y+dy[k];
                if(isValid(i, m) && isValid(j, n)){
                    int maxAbs = max(effort, abs(heights[i][j] - heights[x][y]));
                    if(maxAbs < eff[i][j]){
                        eff[i][j] = maxAbs;
                        pq.push({(-1) * eff[i][j], {i, j}});
                    }
                }
            }
        }
        return -1;
    }
};