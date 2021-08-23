class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        for(int i = 0; i < score.size(); ++i){
            pq.push({score[i],i});
        }
        string t;
        int count = 1; 
        vector<string> res(score.size());
        while(!pq.empty()){
            auto [score,i] = pq.top();
            pq.pop();
            t = to_string(count); 
            if(count == 1) t = "Gold Medal"; 
            else if(count == 2) t = "Silver Medal"; 
            else if(count == 3) t = "Bronze Medal"; 
            res[i] = t; 
            count++;
        }
        
        return res;
    }
};