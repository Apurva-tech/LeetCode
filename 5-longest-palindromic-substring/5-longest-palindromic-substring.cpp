class Solution {
public:
    string longestPalindrome(string s) {
        int n =s.size();
        vector<vector<bool>> dp(n,vector<bool>(n,true));
        string ans=s.substr(0,1);;
        for(int i=1;i<s.size();i++){
           int row = 0;
           int col = i;
           while(col<n){
               if(s[row]==s[col]){
                   dp[row][col] = dp[row+1][col-1];
                   if(col-row+1>ans.size() && dp[row][col]){
                      ans.clear();
                      ans = "" + s.substr(row,col-row+1);
                   }
               }
               else
                   dp[row][col] = false;
               row++;
               col++;
           }
        }
        return ans;
    }
};