class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        int n = nums.size();
        int score[n];
        for(int i=n-1 ; i>=0 ; i--)
        {
            while(pq.size() && pq.top().second>i+k)
                pq.pop();
            
            score[i]=nums[i];
            score[i]+=(pq.size() ? pq.top().first : 0);
            pq.push({score[i], i});
        }
        return score[0];
    }
};