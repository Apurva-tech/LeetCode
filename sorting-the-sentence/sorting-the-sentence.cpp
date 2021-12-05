class Solution {
public:
    string sortSentence(string s) {
         map<int,string>m;
        int i=0;
        while(i<s.size()){
            string temp="";
            while(!isdigit(s[i])){
                temp+=s[i];
                i++;
            }
            m[s[i]]=temp;
            i+=2;
        }
        string ans="";
        for(auto x:m){
            ans+=x.second;
            ans+=" ";
        }
        ans.erase(ans.size()-1);
        return ans;
    }
};