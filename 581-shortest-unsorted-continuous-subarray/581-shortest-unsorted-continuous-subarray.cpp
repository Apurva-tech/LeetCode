class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int minVal=INT_MAX;
        int maxVal=INT_MIN;
        
        for(int i=1;i<nums.size();++i)
            if(nums[i]<nums[i-1])
                minVal=min(nums[i],minVal);
        
        for(int i=nums.size()-2;i>=0;--i)
            if(nums[i]>nums[i+1])
                maxVal=max(nums[i],maxVal);
        
        int i=0;
        for(;i<nums.size();++i)
            if(nums[i]>minVal)
                break;
        
        int j=nums.size()-1;
        for(;j>=0;--j)
            if(nums[j]<maxVal)
                break;
        
        return i>j?0:j-i+1;
    }
};