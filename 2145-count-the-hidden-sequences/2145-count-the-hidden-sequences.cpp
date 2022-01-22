class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long n = differences.size(); 
        long h = 0, minI = 0, maxI = 0; 
        
        for(long i = 0; i < n; i++){
            h += differences[i]; 
            if(h > maxI) maxI = h;
            if(h < minI) minI = h;
        }
        if(abs(maxI - minI) > abs(upper - lower)) return 0;
        return abs(abs(lower-upper)-abs(maxI - minI))+1;
    }
};