class Solution {
public:
    int ans = 0;
    vector<char> v = {'a', 'e', 'i', 'o', 'u'};

    void res(string &s, int n, int i){
        if(s.size()==n){
            ans++; return;
        }
        for(; i< v.size(); i++){
            s+=v[i];
            res(s,n,i);
            s.pop_back();
        }
    }

    int countVowelStrings(int n) {

        string s = "";
        res(s,n, 0);
        return ans;
    }
};