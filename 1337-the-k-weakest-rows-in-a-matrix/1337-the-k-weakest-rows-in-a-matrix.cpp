class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // priority_queue <int, vector<int>, greater<int>> gq;
        // vector<int> res;
        // for(auto x : mat){
        //     int soldiers = 0; 
        //     for(auto y : x){
        //         if(y == 1) soldiers++;
        //     }
        //     gq.push(soldiers); 
        // }
        // while (!gq.empty()) { 
        //     int t = gq.top(); 
        //     gq.pop();
        //     auto it = find(gq.begin(), gq.end(), t); 
        //     res.push_back(it - v.begin()); 
        // }
        // return res;
        int n=mat[0].size();
        for(int i=0; i<mat.size(); i++){
            mat[i].push_back(i);
        }
        sort(mat.begin(), mat.end());
        vector<int> ans(k);
        for(int i=0; i<k; i++){
            ans[i]=mat[i][n];            
        }
        return ans;
    }
};