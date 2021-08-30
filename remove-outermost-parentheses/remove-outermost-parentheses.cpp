
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";
        stack<int> st;
        for(auto ch : s){
            if(ch=='('){
                if(st.size()>0){
                    result+=ch;
                }
                st.push(ch);
            }
            else{
                if(st.size()>1){
                    result+=ch;
                }
                st.pop();
            }
        }
        return result;
    }
};