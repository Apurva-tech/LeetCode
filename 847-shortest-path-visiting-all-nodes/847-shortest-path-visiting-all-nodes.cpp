class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        
        
        int i,n=graph.size(),j,ans=0;
        
        queue<vector<int>>q;
        set<pair<int,int>>s;
        
        
        //starting bfs from every node and mask is used to check state of all visited node
        for(i=0;i<n;i++)
        {
            vector<int>v(3,0);
            int mask=(1<<i);
            int node=i;
            int cost=0;
            v[0]=cost;
            v[1]=node;
            v[2]=mask;
            q.push(v);
            s.insert({node,mask});
        }
        
        //bfs
        while(q.size()>0)
        {
            auto z=q.front();
            q.pop();
			
			//all bits are set which means all nodes are finally visited
            if(z[2]==(1<<n)-1)
            {
                ans=z[0];
                break;
            }
            
            for(auto j:graph[z[1]])
            {
                int mask=z[2]|(1<<j);
				//checking that this state is not visited yet
                if(s.find({j,mask})==s.end())
                {
                    s.insert({j,mask});
                    vector<int>v(3,0);
                    v[0]=z[0]+1;
                    v[1]=j;
                    v[2]=mask;
                    q.push(v);
                }
            }
            
        }
        
        
        return ans;
        
    }
};