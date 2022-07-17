#define mod 1000000007

class Solution {
public:
    int dp[51][51][51],a[8] = {1,0,-1,0,0,1,0,-1};
    int findPaths(int &m, int &n, int mm, int sr, int sc, int i=0) { 
        if(i==0) memset(dp,-1,sizeof(dp));
        if(sr<0 || sr>=m || sc<0 || sc>=n) return 1;
        if(mm==0) return 0;
        if(dp[mm][sr][sc]!=-1) return dp[mm][sr][sc];
        dp[mm][sr][sc]=0;
        for(int i=0;i<4;i++)
            dp[mm][sr][sc]=(dp[mm][sr][sc] + findPaths(m,n,mm-1,sr+a[i],sc+a[i+4],1))%mod;
        return dp[mm][sr][sc];
    }
};