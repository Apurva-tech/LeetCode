class Solution {
public:
    int solve(string y){
    string x;
    bool f = false;
    for(int i=0;i<y.size();i++){
        if(y[i]=='0' && !f) continue;
        else if(y[i]!='0' || f){
            x+=y[i];
            f = true;
        }
    }
    int c = 0;
    if(x.size()>0){
    for(auto z:x){
        c = (c*10)+(z-'0');
    }
    }
    return c;
}
int compareVersion(string s1, string s2) {
    vector<int>v1,v2;
    string y = "";
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='.'){
            v1.push_back(solve(y));
            y = "";
        }else{
            y+=s1[i];
        }
    }
    v1.push_back(solve(y));
    y = "";
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='.'){
            v2.push_back(solve(y));
            y = "";
        }else{
            y+=s2[i];
        }
    }
    v2.push_back(solve(y));
    
    for(int i=0;i<max(v1.size(),v2.size());i++){
        int x = i<v1.size()?v1[i]:0;
        int y = i<v2.size()?v2[i]:0;
        if(x>y) return 1;
        else if(x<y) return -1;
    }
    
    return 0;
}
};