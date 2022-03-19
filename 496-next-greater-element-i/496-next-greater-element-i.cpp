class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // [3, 4, -1, -1]
        // st : [1,2]
        unordered_map<int, int> mp; 
        // Decreasing monotonic stack: 
        stack<int> st; 
        for(int i = 0; i < nums2.size(); i++){
            while(!st.empty() && st.top() < nums2[i]){
                mp[st.top()] = nums2[i]; 
                st.pop(); 
            }
            st.push(nums2[i]); 
        }
        while(!st.empty()){
            mp[st.top()] = -1; 
            st.pop(); 
        }
        vector<int> res;
        for(int i = 0; i < nums1.size(); ++i){
            if(mp.find(nums1[i])!=mp.end()) res.push_back(mp[nums1[i]]); 
        }
        return res;
    }
};