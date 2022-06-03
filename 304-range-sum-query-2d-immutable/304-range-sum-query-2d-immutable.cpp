class NumMatrix {
public:
    vector<vector<int>> v;
    NumMatrix(vector<vector<int>>& matrix) {
        v = vector<vector<int>>(matrix.size() + 1, vector<int>((matrix.size() ? matrix[0].size() : 0) + 1));
        for(int i = 1; i < v.size(); i++)
            for(int j = 1; j < v[0].size(); j++) 
                v[i][j] = matrix[i - 1][j - 1] + v[i][j - 1] + v[i - 1][j] - v[i - 1][j - 1];
    }

    int sumRegion(int r1, int c1, int r2, int c2) {
        return v[r2 + 1][c2 + 1] - v[r1][c2 + 1] - v[r2 + 1][c1] + v[r1][c1];
    }

};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */