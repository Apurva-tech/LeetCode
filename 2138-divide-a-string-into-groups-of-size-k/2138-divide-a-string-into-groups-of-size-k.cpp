class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        if(k > s.size()){
            int x = k-s.size();
            while(x--){
                s += fill; 
            }
            return {s}; 
        }
        vector<string> res;
        for(int i = 0 ; i < s.size(); i++){
            string t = "";
            int temp = k, p = 0; 
            while(temp > 0){
                temp--;
                t += s[i];
                if(i == s.size() - 1 && temp!=0){
                     p = 1;
                     while(temp>0){
                         temp--;
                         t += fill; 
                     }
                }
                i++;
            }
            i--;
            res.push_back(t); 
        }
        return res;
    }
};