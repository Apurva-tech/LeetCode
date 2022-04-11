class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int columns = grid[0].size();
        int count = rows * columns;
        k %= count;
        
        std::vector<std::vector<int>> res(rows, std::vector<int>(columns));
        
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < columns; ++j) {
                int newPos = (i * columns + j + k) % count;
                int newRow = newPos / columns;
                int newColumn = newPos % columns;
                res[newRow][newColumn] = grid[i][j];
            }
        }
        return res;
    }
};