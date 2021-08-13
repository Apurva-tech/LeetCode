class Solution {
public:
    int change(int sum, vector<int>& coins) {
        int n = coins.size(); 
        int t[n+1][sum+1]; 
        // Initialization
        for(int i = 0; i <= n; ++i)
            for(int j = 0; j <= sum; ++j){
                if(i == 0) t[i][j] = 0; 
                if(j == 0) t[i][j] = 1; 
            }
        
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= sum; ++j){
                if(coins[i-1] <= j) t[i][j] = t[i-1][j] + t[i][j - coins[i-1]]; 
                else t[i][j] = t[i-1][j]; 
            }
        
        return t[n][sum]; 
    }
};