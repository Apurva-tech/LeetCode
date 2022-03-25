class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int res = INT_MIN;
        for(int i = 0; i < nums.size()/2; ++i){
            res = max(res, nums[i]+nums[nums.size()-i-1]);
        }
        return res;
    }
};