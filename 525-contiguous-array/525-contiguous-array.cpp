class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> um{{0, -1}};
        int cnt = 0, maxLen = 0;
        for(int i = 0; i < nums.size(); i++){
            cnt += nums[i] == 0 ? -1 : 1; 
            if(um.count(cnt)) maxLen = max(maxLen, i - um[cnt]); 
            else um[cnt] = i;
        }
        return maxLen;
    }
};