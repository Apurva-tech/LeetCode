class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, mid, h = nums.size()-1; 
        while(l<=h){
            mid = l + (h-l)/2; 
            if(nums[mid] == target) return mid; 
            if(nums[l] <= nums[mid]){
               if(nums[mid] > target && nums[l] <= target) h = mid-1;
                else l = mid+1;
            }
            
            else{
                if(nums[mid] < target && nums[h] >= target) l = mid+1; 
                else h = mid-1; 
            }
        } 
        return -1; 
    }
};