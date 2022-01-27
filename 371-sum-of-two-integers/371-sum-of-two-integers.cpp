class Solution {
public:
    int getSum(int a, int b) {
        return b==0? a:getSum(a^b, (unsigned int)(a&b)<<1);
    }
};