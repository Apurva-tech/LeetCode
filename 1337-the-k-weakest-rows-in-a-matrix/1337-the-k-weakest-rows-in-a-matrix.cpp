typedef pair<int, int> pi;
  
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pi, vector<pi>, greater<pi> > pq;
        vector<int> res, num;
        for(int i = 0; i < mat.size(); i++){
            int soldiers = 0; 
            for(auto y : mat[i]){
                if(y == 1) soldiers++;
            }
            // cout << i << " total sold: " << soldiers << endl;
            pq.push(make_pair(soldiers, i));
        }
        while (!pq.empty() && k > 0) { 
            k--;
            pair<int, int> top = pq.top();
            res.push_back(top.second);
            // cout << top.first << " " << top.second;
            pq.pop();
        }
        return res;
        
    }
};