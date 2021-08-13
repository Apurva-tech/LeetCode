class Solution {
public:
    int t[1001][1001]; 
    int helper(string &x, string &y, int n , int m) {
        
        // Base Case
        if(n == 0 || m == 0) return 0; 
        if(t[n][m] != -1) return t[n][m]; 
        
        // Choice diagram 
        if(x[n-1] == y[m-1]) return t[n][m] = 1 + helper(x,y,n-1,m-1); 
        
        else return t[n][m] = max(helper(x,y,n,m-1), helper(x,y,n-1,m)); 
    }
    
    int longestCommonSubsequence(string x, string y) {
        int n = x.length(); 
        int m = y.length(); 
        
        memset(t,-1,sizeof(t)); 
        
        return helper(x,y,n,m); 
    }
};