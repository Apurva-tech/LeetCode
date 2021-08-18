class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        vector<int> d;
        while(x > 0){
            d.push_back(x%10); 
            x = x/10; 
        }
        if(d.size() == 1) return true; 
        for(int i = 0; i < d.size()/2; ++i){
            // cout << d[d.size()-i-1];
            if(d[i] != d[d.size()-i-1]) 
                return false;
        }
        return true;
    }
};