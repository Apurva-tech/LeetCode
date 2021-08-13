class Solution {
public:
    int helper(vector<int>a1, vector<int> a2, int n, int m){
        int t[n+1][m+1]; 
        
        // Initialization
        for(int i = 0 ; i <= n; ++i)
            for(int j = 0 ; j <= m; ++j){
                if(i == 0 || j == 0) t[i][j] = 0; 
            }
        
        // Choice diagram
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= m; ++j){
                if(a1[i-1] == a2[j-1]) 
                    t[i][j] = 1 + t[i-1][j-1];
                else 
                    t[i][j] = 0; 
            }
        
        int ans = INT_MIN; 
        
        for(int i = 0 ; i <= n; ++i)
            for(int j = 0 ; j <= m; ++j){
                if(t[i][j] > ans) ans =  t[i][j]; 
            }
        
        return ans; 
        
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size(); 
        
        return helper(nums1, nums2, n, m); 
    }
};