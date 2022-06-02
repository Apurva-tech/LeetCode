class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix[0].size(), n = matrix.size(); 
        vector<vector<int>> res(m,vector<int> (n,0)); 
        for(int i=0;i<n;i++){
            for(int j = 0;j < m; j++){
                res[j][i] = matrix[i][j]; 
            }
        }
        return res;
    }
};