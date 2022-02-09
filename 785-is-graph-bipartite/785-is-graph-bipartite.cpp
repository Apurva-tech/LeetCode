class Solution {
public:
    bool Bipartite(int i, vector<vector<int>> adj, int color[]){
        queue<int>q;
        q.push(i); 
        color[i] = 1; 
        while(!q.empty()) {
            int node = q.front(); 
            q.pop();

            for(auto it : adj[node]) {
                if(color[it] == -1) {
                    color[it] = 1 - color[node]; 
                    q.push(it); 
                } else if(color[it] == color[node]) {
                    return false; 
                }
            }
        }
        return true; 
    }

    bool checkPartite(vector<vector<int>> adj, int n){
        int color[n];
        memset(color, -1, sizeof color); 
        for(int i = 0;i<n;i++) {
            if(color[i] == -1) {
                if(!Bipartite(i, adj, color)) {
                    return false;
                }
            }
        }
        return true; 
    }
    
    bool isBipartite(vector<vector<int>>& graphs) {
        int n = graphs.size();
        
        return checkPartite(graphs, n);
    }
};