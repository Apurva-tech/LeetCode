class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        // Time complexity: O(N) 
        // Space complexity: O(1)
        int pattern = 0; 
        // Find Peak
        for(int i = 0 ; i < arr.size()-1; ++i){
            if(arr[i] < arr[i+1]){
                pattern++;
            }
            
            else break; 
        }
        // Check if strictly decreasing 
        if(pattern == 0 || pattern == arr.size()-1) return false;
        for(int i = pattern;i < arr.size()-1; ++i){
            if(arr[i] <= arr[i+1]){
                return false;
            }
        }
        return true;
    }
};