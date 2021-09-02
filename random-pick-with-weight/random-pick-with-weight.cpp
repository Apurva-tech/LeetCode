#define pb push_back

class Solution {
public:
    vector<int> cumsum; 
    Solution(vector<int>& w) {
        cumsum.pb(w[0]); 
        for(int i = 1; i < w.size(); i++) cumsum.pb(cumsum.back() + w[i]); 
    }
    
    int pickIndex() {
        int random = rand()%(cumsum.back()); 
        return upper_bound(cumsum.begin(), cumsum.end(), random) - cumsum.begin(); 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */