class Solution {
public:
    bool isIsomorphic(string s, string v) {
        // Check if the strings are same, if not return false
        if (s.size() != v.size())
            return false;
        // Create set S to eliminate the already mapped char from string t
        set<char> S;
        // Hashmap to map to the char of s to char of t
        unordered_map<char, char> m;
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (m.find(ch) != m.end()) {
                if (m[ch] != v[i])
                    return false;
            }
            else {
                
                if (S.count(v[i]) > 0)
                    return false;
                m[ch] = v[i];
                S.insert(v[i]);
            }
        }
        return true; 
    }
};