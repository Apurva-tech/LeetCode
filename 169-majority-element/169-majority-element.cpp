#include <bits/stdc++.h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=1;
        int maxCount=1;
        int currentElement = nums[0];
      
        for (int i = 1; i < nums.size() ; i++) {
            if(currentElement == nums[i]){
                count++;
            }else{
                if(count > maxCount){
                    maxCount = count;
                }
                currentElement = nums[i];
                count = 1;
            }
            if(count > nums.size()/2) return currentElement;
        }
        
       return currentElement; 
    }
};