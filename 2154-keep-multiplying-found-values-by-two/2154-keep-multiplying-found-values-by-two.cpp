class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int res = original; 
        unordered_set <int> s ;
        for(auto x : nums) s.insert(x); 
        
        while(true){
           if(s.find(res) != s.end()){
               res *= 2;  
           }
            else{
                break; 
            }
        }
        return res; 
    }
};