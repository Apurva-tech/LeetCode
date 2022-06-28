class Solution {
public:
    int minDeletions(string s) {
        unordered_map<int, int> freqMap;
        
        for(char c : s) {
            freqMap[c]++;
        }
        //freqMapMap
        map<int, vector<char>>  fmm;
        
        for(auto& [c, count] : freqMap) {
            fmm[count].push_back(c);
        }
        
        int ans = 0;
        
        for(auto it = fmm.rbegin(); it != fmm.rend(); it++) {
            
            int size = it->second.size();
            int count = it->first;
            if(count == 0) continue;
            for(int i = 1; i < size; i++) {
                fmm[count-1].push_back(it->second[i]);
            }
            
            ans += size-1;
            
        }
        return ans;
        
    }
};