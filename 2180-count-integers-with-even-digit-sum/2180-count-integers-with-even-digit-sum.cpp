class Solution {
public:
    bool check (int x){
        int ans = 0; 
        while(x){
            ans += (x%10); 
            x /= 10;
        }
        return ans%2 == 0 ? true: false;
    }
    int countEven(int num) {
        int ans = 0;
        while(num > 0){
            if(check(num)) ans++; 
            num--;
        }
        return ans;
    }
};