class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int> sum;
        sum.push_back(0);
        unordered_map<int,int> lastIdx;
        int ans = 0;
        for(int l=0,r=0;r<n;r++) {
            int curEl = nums[r];
            sum.push_back(curEl + sum[r]);
            if (lastIdx.find(curEl) != lastIdx.end() && lastIdx[curEl] >= l) {
                l = lastIdx[curEl] + 1;
            }
            ans = max(ans, sum[r+1] - sum[l]);
            lastIdx[curEl] = r;
        }
        for(auto itr:lastIdx){
            cout<<itr.first<<" "<<itr.second<<endl;
        }
        return ans;
    }
};