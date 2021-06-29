class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1,-1}; 
        int l = 0, r = nums.size()-1, mid = (l+r)/2; 
        while(l <= r){
            mid = (l+r)/2; 
            if(nums[mid] == target){
                res[0] = mid; 
                r = mid-1; 
            }
            else if(nums[mid] < target){
                l = mid + 1; 
            }
            else{
                r = mid -1; 
            }            
        }
        
        l = 0; r = nums.size() - 1; 
        
        while(l <= r){
            mid = (l+r)/2; 
            if(nums[mid] == target){
                res[1] = mid; 
                l = mid+1; 
            }
            else if(nums[mid] < target){
                l = mid + 1; 
            }
            else{
                r = mid -1; 
            }            
        }
        
        return res; 
        
    }
};