class Solution {
public:
    vector<int> nums; 
    void getDigit(int n){
        while(n){
            nums.push_back(n%10); 
            n /= 10; 
        }
    } 
 
    
    int nextGreaterElement(int n) { 
        string num = to_string(n);
        if (next_permutation(num.begin(), num.end())) {
            long res = stol(num);
            return res > INT_MAX ? -1 : res;
        } else {
            return -1;
        }
    }
};