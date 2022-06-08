class Solution {
public:
    void fun(vector<vector<string>>& ans, vector<string>& temp, int r, set<int>& c, set<int>& d1, set<int>& d2, int n) {
        
        if(r == n) {
           ans.push_back(temp); 
        }
        
        for(int i=0;i<n;i++) {
            if(c.find(i) == c.end() && d1.find(r-i) == d1.end() && d2.find(r+i) == d2.end()) {
                c.insert(i); d1.insert(r-i); d2.insert(r+i);
                temp[r][i] = 'Q';
                fun(ans, temp, r+1, c, d1, d2, n);
                temp[r][i] = '.';
                
                c.erase(i); d1.erase(r-i); d2.erase(r+i);
            }
        }
    }
    
    int totalNQueens(int n) {
        set<int> c, d1, d2;
        string dots = "";
        for(int i=0;i<n;i++) dots.push_back('.');
        
        vector<string> temp(n, dots);
        vector<vector<string>> ans;
        fun(ans, temp, 0, c, d1, d2, n);
        
        return ans.size();
    }
};