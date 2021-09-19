class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0; int t = 0;
        unordered_map<int, int> mp; 
        for(int i = 0 ; i < nums.size(); ++i){
            t += nums[i]; 
            if(t == k) ans++;
            if(mp.find(t - k) != mp.end()) {
                ans += mp[t-k];
            }
            mp[t]++;
        }
        return ans;
    }
};