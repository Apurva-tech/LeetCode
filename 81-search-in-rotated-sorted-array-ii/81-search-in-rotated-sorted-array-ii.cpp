class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // int n = nums.size(), start = min_element(nu); 
        // vector<int> n; 
        for(auto x : nums) if(x == target) return true;
        return false;
    }
};