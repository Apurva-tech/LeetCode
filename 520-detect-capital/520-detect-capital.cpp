class Solution {
public:
    bool detectCapitalUse(string word) {
        int ans = 0; 
        for(char ch : word){
            if(isupper(ch)) ans++;
        }
        cout << ans << endl; 
        // if(ans == 0) return true; 
        // if(ans == 1 && isupper(word[0])) return true; 
        // if(ans == word.size()) return true; 
        if((ans == 0) || (ans == 1 && isupper(word[0])) || (ans == word.size())) return true;
        return false;
    }
};