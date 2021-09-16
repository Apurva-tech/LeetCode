class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto x : nums) mp[x]++; 
        
        for(auto x : mp){
            if(x.second >= 2) return true;
        }
        // O(n) space, O(n) time
        return false;
    }
};