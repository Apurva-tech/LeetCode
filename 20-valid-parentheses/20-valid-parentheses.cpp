class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 1){
            return false;
        }
        else if(s[0] == ')' || s[0] == '}' || s[0] == ']'){
            return false; 
        }
        else{
            stack <char> st; 
        for(int i = 0; i< s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }          
                     
            else if((s[i] == ')' || s[i] == '}' || s[i] == ']') && (st.empty())){
            return false; 
        }
            
            else if((s[i] == ')' && st.top() == '(') || (s[i] == ']' && st.top() == '[') || (s[i] == '}' && st.top() == '{')) {
                st.pop();
            }
            
            else if((s[i] == ')' || s[i] == '}' || s[i] == ']') && (!st.empty())){
            return false;
        }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false; 
        }
        }
    }
};