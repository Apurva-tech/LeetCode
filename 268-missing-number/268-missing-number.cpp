class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int nSum = accumulate(nums.begin(), nums.end(), 0); 
        // for(int i : nums) nSum += i;
        int n = nums.size(); 
        return n*(n+1)/2 - nSum;
    }
};