class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        for (int i = 0, start = 0, end = 0; i < s.length(); i++) {
            end = max(end, (int)s.find_last_of(s[i]));
            if (i == end) {
                ans.push_back(end - start + 1);
                start = end + 1;
            }
        }
        return ans;
    }
};