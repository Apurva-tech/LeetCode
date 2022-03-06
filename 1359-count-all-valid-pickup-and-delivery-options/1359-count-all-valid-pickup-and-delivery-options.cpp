class Solution {
public:
    int countOrders(int n) {
        long long m = 1e9+7, ans = 1;
        for(int i = 1; i <= n; i++){
            ans *= (i)%m;
            ans = (ans * (2*i-1)%m); 
        }
        return ans;
    }
};