class Solution {
public:
    string removeDuplicates(string s) {
        string res = ""; 
        stack<char> st;
        st.push(s[0]); 
        
        for(int i = 1; i < s.length(); i++){
            
            if(st.empty()) {
                st.push(s[i]);
                i++; 
            }
            if(st.top() == s[i]) st.pop(); 
            else {
                st.push(s[i]); 
            }
        }
        
        while (!st.empty()) {
            cout << st.top();
            if(st.top() != '\x00') res.push_back(st.top());
            st.pop();
        }
        
        reverse(res.begin(), res.end());
        return res; 
        
    }
};