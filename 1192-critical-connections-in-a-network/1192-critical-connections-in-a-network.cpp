class Solution {
public:
    vector<vector<int>> ans, graph;
vector<int> firstTime, minTime, vis;
int time;
vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
    time = 0;
    firstTime.resize(n), minTime.resize(n), vis.resize(n), graph.resize(n);
    for(vector<int>& edge : connections){
        int u = edge[0], v = edge[1];
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    dfs(0);
    return ans;
}
void dfs(int node, int parent = -1){
    firstTime[node] = minTime[node] = time++;
    vis[node] = 1;
    for(int nbr : graph[node]){
        if(nbr == parent) continue;
        if(!vis[nbr]) dfs(nbr, node);
        //the main two condition one is to update minTime and
		//second is to check if it is a bridge.
        minTime[node] = min(minTime[node], minTime[nbr]);
        if(firstTime[node] < minTime[nbr]) ans.push_back({node, nbr});
    }
}
};