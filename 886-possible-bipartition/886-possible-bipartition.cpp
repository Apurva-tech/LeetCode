class Solution {
public:
    bool Bipartite(int i, vector<int> adj[], int color[]){
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
                    // cout << "here ";
                    return false; 
                }
            }
        }
        return true; 
    }

    bool checkPartite(vector<int> adj[], int n){
        int color[n+1];
        memset(color, -1, sizeof color); 
        for(int i = 0;i < n; i++) {
            if(color[i] == -1) {
                if(!Bipartite(i, adj, color)) {
                    return false;
                }
            }
        }
        return true; 
    }

    bool possibleBipartition(int n, vector<vector<int>>& edges) {
        vector<int> adj[n+1];
        int m = edges.size();
        for(int i = 0;i < m; i++){
            int u = edges[i][0] , v = edges[i][1]; 
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        // for(auto x : adj) {
        //     cout << "start " << endl;
        //     for(auto y : x) cout << y << " ";
        //     cout << endl;
        // }
        
        return checkPartite(adj, n); 
    }
};