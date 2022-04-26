class Solution {
public:
    int inf = 1e9;
    int minCostConnectPoints(vector<vector<int>>& p) {
        int n = p.size();
        bool mark[n];
        memset(mark,false,sizeof(mark));
        vector<int> d(n,inf);
        int ans = 0;
        int in = 0;
        for(int i=0;i<n;i++){
            mark[in] = true;
            int x1 = p[in][0];
            int y1 = p[in][1];       
            d[in] = inf;            
                for(int j=0;j<n;j++){
                    if(!mark[j]){
                        int x2 = p[j][0];
                        int y2 = p[j][1];
                        int dis  = abs(x2-x1) + abs(y2-y1);
                        if(d[j]>dis){
                            d[j] = dis;
                        }
                    }
                }
                int mi = inf;
                for(int i=0;i<n;i++){
                    if(mi>d[i]){
                        mi = d[i];
                        in = i;
                    }
                }
                if(mi!=inf) 
                    ans+=mi;
        }
        if(ans==inf) return 0;
        return ans;
    }
};