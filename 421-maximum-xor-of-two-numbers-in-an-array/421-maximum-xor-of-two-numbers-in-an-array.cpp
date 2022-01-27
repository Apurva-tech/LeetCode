class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int max = 0, mask = 0;
        unordered_set<int> t;
        // search from left to right, find out for each bit is there 
        // two numbers that has different value
        for (int i = 31; i >= 0; i--){
            // mask contains the bits considered so far
            mask |= (1 << i);
            t.clear();
            // store prefix of all number with right i bits discarded
            for (int n: nums){
                t.insert(mask & n);
            }
            
            // now find out if there are two prefix with different i-th bit
            // if there is, the new max should be current max with one 1 bit at i-th position, which is candidate
            // and the two prefix, say A and B, satisfies:
            // A ^ B = candidate
            // so we also have A ^ candidate = B or B ^ candidate = A
            // thus we can use this method to find out if such A and B exists in the set 
            int candidate = max | (1<<i);
            for (int prefix : t){
                if (t.find(prefix ^ candidate) != t.end()){
                    max = candidate;
                    break;
                }
                
            }
        }
        return max;
    }
};