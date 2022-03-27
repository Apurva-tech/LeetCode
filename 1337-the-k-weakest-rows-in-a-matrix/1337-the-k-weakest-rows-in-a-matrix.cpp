class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int row = mat.size();
        int col = mat[0].size();
        
        vector<pair<int, int>> v(row);
        
        for (int i = 0; i < row; ++i) {
            int count = 0;
            for (int j = 0; j < col; ++j) {
                if (mat[i][j] == 1)
                    count++;
            }
            v[i] = {count, i};
        }
        
        sort(v.begin(), v.end());
        
        vector<int> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(v[i].second);
        }
        
        return ans;
    }
};