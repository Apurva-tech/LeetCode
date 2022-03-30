class Solution {
public:
    bool Search(vector<int> a, int target){
        int l = 0, r = a.size()-1;
        while(l <= r){
            int mid = (r-l)/2+l; 
            if(a[mid] == target) return true; 
            if(a[mid] > target) r = mid-1;
            if(a[mid] < target) l = mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size(); 
        vector<int> newM;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                newM.push_back(matrix[i][j]);
            }
        }
        return Search(newM, target);
    }
};