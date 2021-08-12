class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<vector<string> > vRes;
        
        unordered_map<string, vector<string> > anagramMap;
        for(auto &s : strs)
        {
            auto word = s;
            sort(s.begin(), s.end());
            anagramMap[s].push_back(word);
        }
        
        for(const auto &anagram : anagramMap)
        {
            vRes.push_back(anagram.second);
        }
        return vRes;
    }
};