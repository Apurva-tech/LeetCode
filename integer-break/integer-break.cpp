class Solution {
public:
    int integerBreak(int n) {
        vector<int> opt(n+1, 0);
        opt[0] = 1;
        opt[1] = 1;
        
        for(int i = 2; i < n; i++){
            for(int j = 1; j <= i; j++){
                opt[i] = max(opt[i], j*opt[i-j]);
            }
        }
        
        opt[0] = 0;
        for(int j = 1; j <= n; j++){
            opt[n] = max(opt[n], j*opt[n-j]);
        }
        return opt[n];
    }
};