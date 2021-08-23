class Solution {
public:
    string helper(string &x, string &y, int n , int m) {
        int t[n+1][m+1]; 
        // Initialisation
        for(int i = 0; i <= n; ++i)
            for(int j = 0; j <= m; ++j){
                if(i == 0 || j == 0) t[i][j] = 0; 
            }
        
        // Choice diagram 
        
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= m; ++j){
                if(x[i-1] == y[j-1]) t[i][j] = 1 + t[i-1][j-1];
                else t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        
        string s; 
        int i = n, j = m; 
        while(i > 0 && j > 0){
            if(x[i-1] == y[j-1]){
                s += x[i-1];
                i--; 
                j--; 
            }
            else{
                if(t[i][j-1] > t[i-1][j]) {
                    s += y[j-1];
                    j--; 
                }
                else{
                    s += x[i-1];
                    i--;
                }
            }
        }
        
        while(i>0){
            s.push_back(x[i-1]);
            i--;
        }

        while(j>0){
            s.push_back(y[j-1]);
            j--;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    
    string shortestCommonSupersequence(string str1, string str2) {
       int n = str1.length(), m = str2.length();
        return helper(str1, str2, n, m); 
    }
};