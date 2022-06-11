class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int s = 0, n = nums.size(), ans = INT_MIN;
        for(int i : nums) s += i; 
        if(s < x) return -1;
        int l = 0, r = 0, winSum = 0; 
        while(r < n){
            winSum += nums[r]; 
            while(winSum > (s - x)){
                winSum -= nums[l];
                l++;
            }
            if(winSum == (s - x)) ans = max(ans, r-l+1);
            r++;
        }
        return ans == INT_MIN ? -1 : n-ans;
    }
};