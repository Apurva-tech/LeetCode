class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = INT_MIN; 
        for(auto x : accounts){
            int sum = 0;
            for(auto y : x) sum += y;
            res = max(res, sum); 
            }
        return res;
    }
};