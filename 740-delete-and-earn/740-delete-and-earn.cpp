class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size(); 
        if(n == 0) return 0; 
        if(n == 1) return nums[0]; 
        int m = 10001;
        vector<int> sum(m, 0);
        vector<int> dp(m, 0);
        
        for(int &x : nums) sum[x] += x;
        dp[0] = sum[0]; 
        dp[1] = max(sum[0], sum[1]); 
        for(int i = 2; i < m; i++){
            dp[i] = max(sum[i] + dp[i-2], dp[i-1]); 
        }
        return dp[m-1]; 
    }
};