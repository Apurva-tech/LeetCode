class Solution {
public:
    int findComplement(int n) {
        if(n == 0) return 1;
        int div = log2(n);
        return n ^ (int)(pow(2.0, div+1) - 1);
    }
};