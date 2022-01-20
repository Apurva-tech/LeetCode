class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int l = 1, r = *max_element(piles.begin(), piles.end()), mid = (r-l)/2 + l;
        while(l < r){
            int totaltime = 0; 
            mid = (r-l)/2 + l;
            for(auto x:piles){ 
                int currtime = x/mid + (x%mid != 0); 
                totaltime += currtime;
                if(totaltime > h) break;
            }
            if (totaltime <= h) {
                r = mid;
            } else {
                l = mid+1;
            }  
        }
       return r; 
    }
};