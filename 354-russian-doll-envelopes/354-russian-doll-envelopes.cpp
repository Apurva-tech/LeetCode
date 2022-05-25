class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end());
        vector<int> res;
        res.reserve(envelopes.size());
        int i=0;
        while(i<envelopes.size()){
            deque<vector<int>::iterator> todo;
            int current = envelopes[i][0];
            while(i<envelopes.size() && envelopes[i][0] == current){
                todo.push_front(std::lower_bound(res.begin(), res.end(), envelopes[i++][1]));
            }

            for(int j=0; j<todo.size(); j++){
                if(todo[j]==res.end()) res.push_back(envelopes[i-j-1][1]);
                else *(todo[j]) = envelopes[i-j-1][1];
            }
        }
        return res.size();
    }
};