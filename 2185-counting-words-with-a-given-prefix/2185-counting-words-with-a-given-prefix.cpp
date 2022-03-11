class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0; 
        int m = pref.size(); 
        for(auto &x : words){
            bool flag = true;
            if(x.size() >= m){
            for(int i = 0; i < m; ++i){
                if(x[i]!=pref[i]) flag = false;
                }
            ans += (flag ? 1 : 0);
            }
        }
        
        return ans;
    }
};