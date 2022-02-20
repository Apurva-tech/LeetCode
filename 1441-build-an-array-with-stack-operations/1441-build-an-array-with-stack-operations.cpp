class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans; 
        int p1 = 0;
        int val = 1;
        while(p1 < target.size()) {
            ans.push_back("Push");
            if(val == target[p1]) {                
                p1++;
            } else {
                ans.push_back("Pop");
            }
            val++;
        }
        return ans;
    }
};