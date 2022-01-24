class Solution {
public:
    string capitalizeTitle(string title) {
        string res = "", temp = ""; 
        int n = title.size(); 
        for(int i = 0; i < n; i++){
            if(title[i]!=' '){
                temp += title[i]; 
            }
            if(title[i]==' '|| i == n-1){
                transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
                if(temp!="" && temp.size() > 2) temp[0] = toupper(temp[0]);
                
                if(i!=n-1) res += temp + " ";
                 
                if(i==n-1) res += temp;
        
                temp = "";
            }
            
        }
        
        return res;
    }
};