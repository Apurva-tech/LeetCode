bool sortcol(const vector<int>& v1, const vector<int>& v2){
        if(v1[0]!=v2[0]) return v1[0] < v2[0];
        return v1[1] > v2[1]; 
}

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& vect) {
        sort(vect.begin(), vect.end(), sortcol);
        int ans = 0, mx = -1;
        for(int i = 0; i < vect.size(); i++){
           if(mx != -1){ if(vect[i][1] <= mx){ 
                ans++; 
            }
            }
            mx = max(mx, vect[i][1]); 
        }
        return vect.size()-ans;
    }
};