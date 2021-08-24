class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        map<int,priority_queue<int>> pq;
        for(auto &x: nums)
            mp[x]++;
        for(auto &x : mp)
            pq[x.second].push(x.first);
        vector<int> v;
        for( auto &x: pq){
            int a = x.first;
            while(!x.second.empty()){
                while(a--)
                v.push_back(x.second.top());
                a = x.first;
                x.second.pop();
            }
        }
        return v;
    }
};