class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp; string ans;
        
        for(auto x : s) mp[x]++;
        
        priority_queue<pair<int, char>> pq; 
        
        unordered_map<char, int> :: iterator itr;
        
        
        for(itr=mp.begin();itr!=mp.end();itr++){
            // cout << "s: " << itr->second << " " << itr->first << endl; 
            pq.push({itr->second,itr->first});
            // cout << "s: " << pq.top().second << " " << pq.top().first << endl; 
        }
        
        while(!pq.empty()){
            ans+=string(pq.top().first,pq.top().second); 
            pq.pop();
        }
        
        return ans; 
    }
};