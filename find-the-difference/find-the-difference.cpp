class Solution {
public:
    char findTheDifference(string s, string t) {
        int s1 = 0; 
        for(auto x:s) s1 += x; 
        int s2 = 0; 
        for(auto x:t) s2 += x; 
        
        char charValue=(s2 - s1) ; 
        
        cout << charValue; 
        
        return charValue; 
        
    }
};