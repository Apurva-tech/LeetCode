class Solution {
public:
    
    int rev(int n) {
        int t = n, reverse = 0, r;
        while (t) {
            r = t % 10;
            reverse = reverse * 10 + r;
            t /= 10;
        }
        return reverse;
    } 
    int countNicePairs(vector<int>& arr) {
        unordered_map<int, int> mp;
        long res = 0;

        for (int x: arr) {
            int val = x - rev(x);
            res += mp[val];
            mp[val]++;
        }

        // Print the number of pairs
        return res%1000000007;
    }
};