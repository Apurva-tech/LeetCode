class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int curr = 0;
        vector<int> ans;
        for(int i : nums){
            curr += i;
            ans.push_back(curr);
        }
        return ans;
    }
};