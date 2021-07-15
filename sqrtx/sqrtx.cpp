class Solution {
public:
    int mySqrt(int x) {
        int l = 1, mid, h = x; 
        while(l<=h){
            mid = l +(h-l)/2; 
            if(mid == x/mid) {
                return mid; 
            } 
            if(mid > x/mid) {
                h = mid - 1;
               
            }
            else {
                l = mid + 1; 

            }
            
        }
        return h; 
    }
};