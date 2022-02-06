class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        int i = 0, v = 0, temp = nums[0];
        while(i < nums.size()-1){
            if(temp != nums[i]) v = 0;
            temp = nums[i];
            
            if(nums[i] == nums[i+1]){
                v++;
            }
            if(v == 2){ 
                i++;
                while(nums[i] == temp){
                    nums[i] = INT_MAX;
                    i++;
                    if(i == nums.size()) break;
                }
                v = 0;
            }
            else i++;                  
        }
        
        int k = -1;
        for(i = 0; i < nums.size(); i++){
            if(nums[i] != INT_MAX)
                swap(nums[++k], nums[i]);
        }
        return k+1;
    }
};