class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3) return 0; 
        int res = 0, j = 0; 
        for(int i = 2; i < nums.size(); i++){
            if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2]) res += (++j);
            else j = 0;
        }
        return res;
    }
};