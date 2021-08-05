class Solution {
public:
    int dp[1001][1001];
    int solve(int i,int j,vector<int>&piles)
    {
        if(i==j)
            return dp[i][j]=piles[i];
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=max(piles[i]-solve(i+1,j,piles),piles[j]-solve(i,j-1,piles));
    }
    bool stoneGame(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        return solve(0,piles.size()-1,piles)>0;
    }
};