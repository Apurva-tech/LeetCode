class Solution {
public:
    int countSubstrings(string s) {
         int n = s.length();
        int ans = 0;
        vector<vector<bool>> dp(n, vector<bool> (n, false));
        
        for(int shift = 0; shift < n; shift++){
            
            for(int start = 0, end = shift; end < n; start++, end++){
            
                if(s[start] == s[end]){
                    if(end - start < 2 || dp[start + 1][end - 1]){
                        dp[start][end] = true;
                        ans++;
                    }
                }
            
            }
        
        }
    
        return ans;
    }
};