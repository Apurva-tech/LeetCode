class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int ans = 0;
        for(int i = 0; i < arr.size()-1; ++i){
            int temp = 0, j = i; 
            if(arr[i] < arr[i+1]){
                j = i; 
                while(arr[j] < arr[j+1] && j+1 <= arr.size()-1){
                    j++; 
                    if(j == arr.size()-1) break;
                }
                cout << j << endl;
                temp = arr[j]-arr[i];
                
            }
            i = j;
            ans += temp;
        }
        return ans; 
    }
};