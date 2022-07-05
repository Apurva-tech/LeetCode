class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int count=1, maxLen=1;
        for(int i=0;i<nums.size();i++)
            cout<<nums[i]<<" ";
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==1)
                count++;
            else if(nums[i]==nums[i-1])
                continue;
            else
                count=1;
            maxLen=max(maxLen,count);
        }
        return maxLen;
    }
};