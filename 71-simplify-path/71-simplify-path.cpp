class Solution {
public:
    string simplifyPath(string path) {
        if(path[path.size()-1]!='/')
            path.push_back('/');
        string dir = "";
        stack<string> st;
        for(int i=0;i<path.size();i++){
            if(path[i]=='/'){
                if(dir.empty())
                    continue;
                if(dir.compare(".")==0){
                    // ignore
                }    
                else if(dir.compare("..")==0){
                    if(!st.empty())
                        st.pop();            
                }
                else{
                    st.push(dir);
                }
                dir = ""; // remove previous directory
            }
            else
                dir.push_back(path[i]);
        }
        dir = "";
        while(!st.empty()){
            dir =  "/" + st.top() +dir ;
            st.pop();
        }
        return dir.empty() ? "/" : dir;
    }
};