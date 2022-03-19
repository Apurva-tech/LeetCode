class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        // Decreasing st
        // 1, 3, 4, 2
        stack<int> st;
        // unordered_map<pair<int, int>, int> mp;
        
        int n = nums.size(), i = max_element(nums.begin(), nums.end()) - nums.begin(), cnt = 0; 
        vector<int> res (n);
        // res[i] = -1; st.push(nums[i]);
        // i--;cnt++;
        while(cnt <= n){
            while(!st.empty() && st.top() <= nums[i]){
                // mp[make_pair(st.top(), i)] = nums[i]; 
                st.pop(); 
            }
            res[i] = st.size() == 0 ? -1 : st.top();
            st.push(nums[i]);
            cnt++;
            i--; if(i == -1) i = n-1;
        }
        
        // for(int j = 0; j < nums.size(); j++){
        //     if(mp.find(nums[j])!=mp.end()) nums[j] = mp[nums[j]];
        //     else nums[j] = -1;
        // }
        
        return res;
    }
};