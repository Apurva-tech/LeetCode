class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) ans.push_back(nums[i]); 
        return ans; 
    }
};