class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int prod = 0;
        for(auto x : nums) prod ^= x;
        return prod;
    }
};