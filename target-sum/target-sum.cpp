class Solution {
public:
    
    int find(vector<int> arr, int sum){
        int n = arr.size(); 
        int t[n+1][sum+1]; 
        
        // Initialisation
        
        t[0][0] = 1; 
        for (int i = 1; i <= sum; i++)
            t[0][i] = 0;
        for (int i = 1; i <= n; i++)
            t[i][0] = 1;
        
        // Choice Diagram
        
        for (int i = 1; i <= n; i++)
            for (int j = 0; j <= sum; j++){
                if(arr[i-1]>j){
                    t[i][j]=t[i-1][j];
                }else{
                    t[i][j]=t[i-1][j]+t[i-1][j-arr[i-1]];
                }
            }
        
        return t[n][sum]; 
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int sum = 0; 
        for(auto x : nums) sum += x; 
        
        int s1=sum+target;
        
        if(s1%2!=0){
            return 0;
        }
        
        s1=s1/2;
        
        return find(nums, s1);
    }
};