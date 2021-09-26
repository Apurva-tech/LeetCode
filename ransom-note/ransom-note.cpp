class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp; 
        for(auto ch:magazine) mp[ch]++; 
       
        for(auto ch : ransomNote){
            if(mp.find(ch) != mp.end() && mp[ch]!=0){
                mp[ch]--; 
            }
            else return false;
        }
    
        return true;
    }
};