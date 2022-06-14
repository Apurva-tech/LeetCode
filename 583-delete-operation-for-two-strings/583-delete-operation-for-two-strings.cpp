class Solution {
public:
    int lcs(string &word1, string &word2, int M, int N, vector<vector<int>> &memo) {
        if (M == 0 || N == 0)
            return 0;
        if (memo[M][N] > 0)
            return memo[M][N];
        if (word1[M-1] == word2[N-1])
            memo[M][N] = 1 + lcs(word1, word2, M-1, N-1, memo);
        else
            memo[M][N] = max(lcs(word1, word2, M, N-1, memo), lcs(word1, word2, M-1, N, memo));
        return memo[M][N];
    }
    int minDistance(string word1, string word2) {
        int M = word1.length(), N = word2.length();
        vector<vector<int>> memo(M+1, vector<int>(N+1, 0));
        return M + N - 2 * lcs(word1, word2, M, N, memo);
    }
};