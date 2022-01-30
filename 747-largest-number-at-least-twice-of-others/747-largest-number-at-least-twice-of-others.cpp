class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int M = *max_element(nums.begin(), nums.end()), res = 0; 
        for(int i = 0; i < nums.size(); ++i) {
            // cout << nums[i] << " "; 
            if(2 * nums[i] > M && M != nums[i]) return -1; 
            if(M == nums[i]) res = i; 
        }
        return res;
    }
};