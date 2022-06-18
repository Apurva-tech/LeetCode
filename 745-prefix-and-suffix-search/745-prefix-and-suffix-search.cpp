class WordFilter {
public:
    unordered_map<string,int>m;
    WordFilter(vector<string>& words) {
        int n = words.size();
        for(int i=0;i<n;i++){
            int sz = words[i].size();
            string pre = "",suf = "";
            for(int j=0;j<=sz;j++){
                suf = "";
                for(int k=sz-1;k>=0;k--){
                    suf = words[i][k]+suf;
                    m[pre + "#" + suf] = i;
                }
                pre = pre+words[i][j];
            }
        }
    }
    int f(string prefix, string suffix) {
        if(m.find(prefix + "#" + suffix)==m.end()) return -1;
        return m[prefix + "#" + suffix];
    }
}; 

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */