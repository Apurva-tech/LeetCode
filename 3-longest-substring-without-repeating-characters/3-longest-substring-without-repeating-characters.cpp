class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> myMap;
        int res = 0;
        int start = 0;
        for (int i = 0; i < s.size(); i++) {
            if (myMap.find(s[i]) != myMap.end()) {
                res = max(res, i-start);
                start = max(start, 1+myMap[s[i]]);
            }
            myMap[s[i]] = i;
        }
        res = max(res, (int)s.size()-start);
        return res;
    }
};