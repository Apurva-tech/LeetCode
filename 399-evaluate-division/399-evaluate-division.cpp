class Solution {
public:
        
    vector<double> calcEquation(vector<vector<string>>& eq, vector<double>& values, vector<vector<string>>& qu) {
        
        unordered_map<string, vector<pair<string, double>>> adj;
        
        for(int i=0;i<eq.size();i++){
            string num = eq[i][0];
            string den = eq[i][1];
            adj[num].push_back({den, values[i]});
            adj[den].push_back({num, 1.0/values[i]});
        }
        
        vector<double> res;
        
        for(int i=0;i<qu.size();i++){
            
            string num = qu[i][0];
            string den = qu[i][1];
            
            queue<pair<string, double>> q; // par, num, val
            
            unordered_map<string, bool> vis;
            
            q.push({num, 1});
            
            int flag = 1;
            
            while(!q.empty()){
                auto temp = q.front();
                vis[temp.first] = true;
                q.pop();
                
                if(temp.first == den && adj[den].size() != 0){
                    res.push_back(temp.second);
                    flag = 0;
                    break;
                }
                
                for(int j=0;j<adj[temp.first].size();j++){
                    string newNum = adj[temp.first][j].first;
                    double val = adj[temp.first][j].second;
                    if(!vis[newNum]){
                        q.push({newNum, val*temp.second});
                    }
                }
                
            }
            
            if(flag) res.push_back(-1);
            
        }
        
        return res;
        
    }
};