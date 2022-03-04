class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double> row = {(double)poured};
        for (int i = 1; i <= query_row; i++) {
            vector<double> rowNext(i + 1);
            for (int j = 0; j < row.size(); j++) {
                double spill = (row[j] - 1) / 2.0;
                if (spill > 0) {
                    rowNext[j] += spill;
                    rowNext[j + 1] += spill;
                }
            }
            row = rowNext;
        }
        return min(1.0, row[query_glass]);
    }
};