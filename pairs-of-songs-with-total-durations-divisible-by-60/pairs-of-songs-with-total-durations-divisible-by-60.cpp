class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        auto mod_60 = [](int x) { return x % 60 ; };
        
        int pairCount = 0;
        
        for( int songDuration : time){
            
            // // Apply two-sum model with objective is (x + y) % 60 = 0
            
            int remainder = mod_60( songDuration);
            int complement = mod_60( 60 - remainder );
            
            // update pairCount with complement
            pairCount += remainderOcc[ complement ];
            
            // update occurrence of current remainder
            remainderOcc[ remainder ] += 1;
        }
        
        return pairCount;
    }
    
private:
    map<int, int> remainderOcc;
};
