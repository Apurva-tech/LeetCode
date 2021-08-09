class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int n=stones.size();
        int s=0;
        for(int i=0;i<n;i++){
            s+=stones[i];
        }
        int maxs=0;
        vector<vector<bool>> dp(n+1,vector<bool> (s/2+1,false));
        dp[0][0]=true;
        for(int i=0;i<n+1;i++){
            dp[i][0]=true;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=s/2;j++){
                dp[i][j]=dp[i-1][j];
                if(j>=stones[i-1]){
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-stones[i-1]];
                }
                if(dp[i][j]==true){
                    maxs=max(maxs,j);
                }
            }
        }
        return s-2*maxs;
    }
};