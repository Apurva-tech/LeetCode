class Solution {
public:
    bool isParam (string line)
{
    if (isdigit(atoi(line.c_str())))
        return true;

    return false;
}
    int calPoints(vector<string>& ops) {
        stack<int> st; 
        // cout << "1 here" << endl;
        for(int i = 0; i < ops.size(); i++){
            // cout << "2 here" << endl;
            if(ops[i] == "D"){
                // cout << "4 here" << endl;
                int ls = st.top(); st.pop(); 
                st.push(ls); 
                st.push(ls*2); 
            }
            else if(ops[i] == "+" ){
                // cout << "5 here" << endl;
                int ls = st.top(); st.pop(); 
                int sls = st.top(); st.pop();
                st.push(sls); 
                st.push(ls); 
                st.push(ls + sls); 
            }
            else if(ops[i] == "C"){
                st.pop(); 
            }
            else{ st.push(stoi(ops[i]));}
        }
        // cout << "7 here" << endl;
        int ans = 0; 
        while(!st.empty()){
            ans += st.top(); 
            st.pop();
        }
        
        return ans; 
    }
};