class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char, int>> st; 
        unordered_set<int> sets;
        string res = ""; 
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '('){
                st.push(make_pair(s[i], i)); 
            }
            if(s[i] == ')'){
                if(st.empty() || st.top().first == ')') st.push(make_pair(s[i], i)); 
                if(st.top().first == '('){
                    st.pop(); 
                }
            }
        }
        
        while(!st.empty()){
            // cout << st.top().first << " " << st.top().second << endl;
            sets.insert(st.top().second); 
            st.pop();
        }
        
        for(int i = 0; i < s.size(); i++){
            if(sets.find(i) == sets.end()) res += s[i]; 
        }
        
        return res;
    }
};