class Solution {
public:
    vector<int> twoSum(vector<int>& res, int k) {
        vector<int> ans;  
        unordered_map<int, int> mp; 
        
        for(int i = 0; i < res.size(); ++i){
            if(mp.find(k - res[i])!=mp.end()){
                ans.push_back(i); 
                ans.push_back(mp[k-res[i]]); 
                return ans;
            }
            else mp[res[i]] = i; 
        }
        return ans; 
    }
};