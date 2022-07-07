class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
       int m = s1.length(), n = s2.length();
        if (m + n != s3.length())
            return false;
        vector<bool> dp(n + 1, true);
        for (int j = 1; j <= n; j++)
            dp[j] = dp[j-1] && s2[j-1] == s3[j-1];
        for (int i = 1; i <= m; i++) {
            dp[0] = dp[0] && s1[i-1] == s3[i-1];
            for (int j = 1; j <= n; j++) {
                dp[j] = dp[j-1] && s2[j-1] == s3[i+j-1] || dp[j] && s1[i-1] == s3[i+j-1];
            }
        }
        return dp[n]; 
    }
};