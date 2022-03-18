class Solution {
public:
    void sortColors(vector<int>& nums) {
        int L = 0, M = 0, H = nums.size()-1; 
         
        while(M <= H){
            if(nums[M] == 0){
                swap(nums[M++], nums[L++]); 
                // M++;
                // L++;
            }
            
            else if(nums[M] == 1){
                M++; 
            }
            
            else if(nums[M] == 2){
                swap(nums[M], nums[H--]); 
                // H--; 
            } 
        }
    }
};