class Solution {
public:
    void solve(int ind,vector<int>& nums,vector<vector<int>>&ans)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return;
        }
       for(int i=ind;i<nums.size();i++)
       {
           swap(nums[i],nums[ind]);  
           solve(ind+1,nums,ans); 
           //ind is increased by one so that swapping is done with next index element in further calls
           swap(nums[i],nums[ind]); 
           // swapping it back to original order after recursion call is over
       }
    }
    vector<vector<int>> permute(vector<int>& nums) {
    
        vector<vector<int>>ans;
	   solve(0,nums,ans);
        return ans;
    }
};