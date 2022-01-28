class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int cnt[46] = {};
        for (auto i = lowLimit; i <= highLimit; ++i) {
            int sum = 0, n = i;
            while(n) {
                sum += n % 10;
                n /= 10; 
            }
            ++cnt[sum];
        }
        return *max_element(begin(cnt), end(cnt));
    }
};