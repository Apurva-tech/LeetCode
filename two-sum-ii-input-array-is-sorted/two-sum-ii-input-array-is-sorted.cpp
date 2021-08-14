class Solution {
public:
    vector<int> twoSum(vector<int>& res, int k) {
        int l = 0, h = res.size()-1; 
        
        while(l < h){
            cout << res[l] + res[h] << " "; 
            if(res[l] + res[h] == k) return {l+1, h+1}; 
            if(res[l] + res[h] < k) l++; 
            else if(res[l] + res[h] > k) h--; 
        }
        
        return {}; 
    }
};