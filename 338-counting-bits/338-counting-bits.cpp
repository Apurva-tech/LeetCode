class Solution {
public:
    size_t popcount(size_t n) {
        std::bitset<sizeof(size_t) * CHAR_BIT> b(n);
        return b.count();
    }
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i = 0; i <= n; ++i){
            res.push_back(popcount(i));
        }
        return res;
    }
};