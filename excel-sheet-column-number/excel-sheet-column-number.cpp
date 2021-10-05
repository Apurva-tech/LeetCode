class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        int n = columnTitle.size();
        for(int i = 0; i < n; i++)
            res = res * 26 + (columnTitle[i] - 'A' + 1);

        return res;
    }
};