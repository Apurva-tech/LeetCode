class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& A) {
        sort(A.begin(),A.end());
        vector<vector<int>> V;
        int n = A.size(), min = INT_MAX;
        for (int i = 1; i < n; i++) {
            int diff = A[i] - A[i - 1];
            if (min == diff) {
                V.push_back({A[i - 1], A[i]});
            } else if (min > diff) {
                V.clear();
                min = diff;
                V.push_back({A[i - 1], A[i]});
            }
        }
        return V;
    }
};