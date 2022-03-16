class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st; 
        int i = 0, j = 0; 
        while(i < pushed.size()){
            st.push(pushed[i]); 
            i++; 
            while(st.size() > 0 && st.top() == popped[j]){ 
                j++;
                st.pop(); 
            } 
        }
        return st.size()==0; 
    }
};