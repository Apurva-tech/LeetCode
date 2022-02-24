class Solution {
public:
    int findMax(int i, int j , int k){
        int ret = max(i,j);
        ret = max(ret, k);
        return ret;
    }
    
    int findMin(int i, int j , int k){
        int ret = min(i,j);
        ret = min(ret, k);
        return ret;
    }
    
    int maxProduct(vector<int>& nums) {
        int ans = nums[0], currM = nums[0], prevM = nums[0], prevm = nums[0]; 
        for(int i = 1; i < nums.size(); i++){
            currM = findMax(prevM * nums[i], prevm * nums[i], nums[i]); 
            int currm = findMin(prevM * nums[i], prevm * nums[i], nums[i]); 
            ans = max(ans, currM); 
            prevM = currM; 
            prevm = currm; 
        }
        return ans;
    }
};