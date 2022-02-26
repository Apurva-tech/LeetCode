class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp; 
        vector<int> ans;
        for(auto x : nums) mp[x]++; 
        for(auto y : mp){
            if(y.second > nums.size()/3) ans.push_back(y.first); 
        }
        return ans;
    }
};