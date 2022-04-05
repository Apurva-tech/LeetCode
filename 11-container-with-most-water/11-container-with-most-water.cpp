class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1, res = INT_MIN; 
        while(i <= j){
            int temp = min(height[i], height[j]); 
            res = max(res, (j - i) * temp); 
            if(height[j] < height[i]) j--; 
            else i++;
        }
        return res;
    }
};