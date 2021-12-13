class Solution {
public:
    int maxPower(string s) {
        if(s.size() == 1) return 1;
        int currMax = 0;
        int maxLen = 0;
        
        for(int i=1; i<s.size(); i++) {
            if(s[i] == s[i-1])
                currMax++;
            else
                currMax = 0;
            
            maxLen = max(maxLen, currMax+1);
        }
        
        return maxLen;
    }
};