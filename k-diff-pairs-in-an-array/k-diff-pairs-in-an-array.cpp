class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        set<pair<int,int>> unique;
      for(int i=0; i<nums.size(); i++) {
         if(mp.count(nums[i]-k))unique.insert(make_pair(min(nums[i]-k,nums[i]),max(nums[i]-k,nums[i])));
         if(mp.count(nums[i]+k))unique.insert(make_pair(min(nums[i]+k,nums[i]),max(nums[i]+k,nums[i])));
         mp[nums[i]]++;
      }
        return (int)unique.size();
    }
};