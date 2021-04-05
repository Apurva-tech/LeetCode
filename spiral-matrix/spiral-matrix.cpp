class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int dir=0;
        int n = matrix.size();
        int m = matrix[0].size();
        int t = 0;
        int b = n-1;
        int l = 0;
        int r = m-1;
        vector<int> arr;
        while(l<=r && t<=b){
            if(dir==0){
                for(int i=l; i<=r; i++){
                    arr.push_back(matrix[t][i]);
                }
                t++;
            }
            if(dir==1){
                for(int j=t;j<=b;j++){
                    arr.push_back(matrix[j][r]);
                }
                r--;

            }
            if(dir==2){
                for(int k=r;k>=l;k--){
                    arr.push_back(matrix[b][k]);
                }
                
                b--;
            }
            if(dir==3){
                for(int o=b; o>=t;o--){
                    arr.push_back(matrix[o][l]);
                }
                
                l++;
            }
            dir = (dir+1)%4;
        }
        return arr;
    }
};