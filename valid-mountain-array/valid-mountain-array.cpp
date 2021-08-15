class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int pattern = 0; 
        for(int i = 0 ; i < arr.size()-1; ++i){
            if(arr[i] < arr[i+1]){
                pattern++;
            }
            else break; 
        }
        if(pattern == 0 || pattern == arr.size()-1) return false;
        for(int i = pattern;i < arr.size()-1; ++i){
            if(arr[i] <= arr[i+1]){
                return false;
            }
        }
        return true;
    }
};