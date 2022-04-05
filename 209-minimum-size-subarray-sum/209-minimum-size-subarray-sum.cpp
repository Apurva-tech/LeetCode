class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // [2,5,6,8,12,15]
        int n = nums.size(), res = INT_MAX; if(n == 0) return 0; 
        vector<int> sum(n+1, 0); 
        for(int i = 1; i <= n; ++i){
            sum[i] = sum[i-1]+nums[i-1]; 
        }
        for (int i = 1; i <= n; i++) {
            int to_find = target + sum[i - 1];
            auto bound = lower_bound(sum.begin(), sum.end(), to_find);
            if (bound != sum.end()) {
                res = min(res, static_cast<int>(bound - (sum.begin() + i - 1)));
            }
        }
        return (res != INT_MAX) ? res : 0;
    }
};