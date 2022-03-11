class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res;
        for(int i = 0; i < l.size(); ++i){
            vector<int> t;
            for(int j = l[i] ; j <= r[i]; j++){
                t.push_back(nums[j]); 
            }
            sort(t.begin(), t.end()); 
            if(t.size() <= 1) res.push_back(false); 
            else{
                int diff = t[1] - t[0];
                bool flag = true;
                for(int a = 0; a < t.size()-1; a++){
                    if(t[a+1] - t[a] != diff){
                        flag = false;
                        break;
                    }
                }
                res.push_back(flag); 
            }
            
        }
        return res;
    }
};