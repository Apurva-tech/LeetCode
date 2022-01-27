class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        int n = num > 0 ? num : -num;
        string ans = "";
        while(n > 0){
            ans += (n % 7) + '0';
            n = n / 7;
        }
        reverse(ans.begin(), ans.end());
        return num > 0 ? ans : "-" + ans;
    }
};