class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        return 1 + accumulate(begin(s), end(s), 0, [](int res, const auto &s) {
        return max(res, (int)count(begin(s), end(s), ' ')); });
    }
};