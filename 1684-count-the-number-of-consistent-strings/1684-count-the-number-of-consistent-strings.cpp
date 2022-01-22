class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int k = 0;
        unordered_set <char> uset ;
        for(auto x : allowed){
            uset.insert(x); 
        }
        for(auto x : words){
            bool flag = true;
            for(int i = 0 ; i < x.size(); i++){
                if (uset.find(x[i]) == uset.end()) flag = false;
            }
            if(flag) k++;
        }
        return k;
    }
};