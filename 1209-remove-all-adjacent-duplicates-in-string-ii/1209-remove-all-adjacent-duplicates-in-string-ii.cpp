class Solution {
public:
    string removeDuplicates(string s, int k) {
         vector<pair<char,int>> st;
        for(char c : s) {
            if(st.empty() || st.back().first != c) {
                st.push_back({c,1});
            }
            else if(++st.back().second == k ) 
                st.pop_back();
        }
        string result="";
        for(auto t : st) {
            result.append(t.second,t.first);
        }
        return result;
    }
};