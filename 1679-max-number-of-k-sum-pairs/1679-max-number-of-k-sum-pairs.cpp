class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count =0;
        unordered_map<int,int> mp;
        
        for(int i =0;i<nums.size();i++){
        
            int diff = k - nums[i];  
            if(mp[diff]>0){
                
                count++;     
                mp[diff]--;  
                
            }
            else{
                mp[nums[i]]++;  
            }
            
            
        }
        
        return count;
    }
};