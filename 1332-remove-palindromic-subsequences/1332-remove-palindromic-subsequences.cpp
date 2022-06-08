class Solution {
public:
    int removePalindromeSub(string s) {
        string check = s;
        reverse(s.begin(), s.end());  
        return s == check ? 1 : 2;
    }
};