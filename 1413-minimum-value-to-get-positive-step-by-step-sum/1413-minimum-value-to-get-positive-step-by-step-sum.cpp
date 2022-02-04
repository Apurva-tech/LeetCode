class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int MinSum = 0, ans = INT_MAX;
        for(auto x : nums){
            MinSum += x;
            ans = min(ans, MinSum); 
        }
        if(ans > 0) return 1;
        return 1-ans;
    }
};