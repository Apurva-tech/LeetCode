class Solution {
public:
    int addDigits(int n) {
        while (n > 9) {n = n / 10 + n % 10;};
        return n;
    }
};