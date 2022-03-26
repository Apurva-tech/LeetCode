class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1; 
        while(l <= r){
            int mid = (r-l)/2 + l; 
            if(nums[mid] == target) return mid;
            if(nums[mid] < target){
                l = mid+1; 
            }
            if(nums[mid] > target){
                r = mid-1;
            } 
        }
        // cout << nums[mid]; 
        return -1;
    }
};