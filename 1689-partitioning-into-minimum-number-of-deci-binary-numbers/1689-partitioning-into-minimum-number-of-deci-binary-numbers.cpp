class Solution {
public:
    int minPartitions(string n) {
        int ans = INT_MIN; 
        for(char x : n) ans = max(ans, (int) x - 48); 
        return ans;
    }
};