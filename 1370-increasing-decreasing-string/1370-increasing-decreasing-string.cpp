class Solution {
public:
    string sortString(string s) {
        string res = ""; 
        unordered_map<char, int> mp; 
        for(auto x : s) mp[x]++; 
        // for(auto x : mp) cout << x.first << " " << x.second << endl; 
        vector<pair<char, int>> elems(mp.begin(), mp.end());
        sort(elems.begin(), elems.end());
        // for(auto x : elems) cout << x.first << " " << x.second << endl;
        int t = 0;
        while(t < s.size()){
            // cout << res.size() << " ";
            if(t%2 == 0){
               for(int i = 0; i < elems.size(); ++i){
                   if(elems[i].second>0) res += elems[i].first; elems[i].second--;
                   // cout << "even: " << elems[i].first << " " << elems[i].second << endl;
               } 
            }
            else{
                for(int i = elems.size()-1; i >= 0; --i){
                    if(elems[i].second>0) res += elems[i].first; elems[i].second--;
                    // cout << "odd: " << elems[i].first << " " << elems[i].second << endl;
                }
            }
            t++;
        }
        return res;
    }
};