class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for(int i = 0; i < nums.size(); i++){
            int s = nums[i], l = INT_MIN; 
            if(i < nums.size()-1 && nums[i+1] == (nums[i] + 1)){
                while(i < nums.size()-1 && nums[i+1] == nums[i] + 1) i++; 
                l = nums[i];
            }
            if(l != INT_MIN) ans.push_back(to_string(s) + "->" + to_string(l) ); 
            else ans.push_back(to_string(s)); 
        } 
        return ans;
    }
};