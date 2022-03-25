class Solution {
public:
    int balancedStringSplit(string s) {
        int r = 0, l = 0, res = 0; 
        for(auto x : s){
            if(x == 'R') r++; 
            else l++; 
            if(r == l){
                r = 0; 
                l = 0; 
                res++;
            }
        }
        return res;
    }
};