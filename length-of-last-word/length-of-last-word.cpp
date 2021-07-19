class Solution {
public:
    int lengthOfLastWord(string s) {
      int i = s.length()-1;
        while(i>=0 && s[i] == ' ') i--;
        int l=0;
        while(i>=0 && s[i--] != ' ') l++;
        return l;   
    }
};