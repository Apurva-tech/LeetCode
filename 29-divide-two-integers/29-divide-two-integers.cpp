class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor == 1) return dividend;
        long double sign = (dividend < 0 ^ divisor < 0) ? -1 : 1;    
        long double ldividend = labs(dividend);
        long double ldivisor = labs(divisor);
     
        long long res = exp(log(ldividend)-log(ldivisor)); 
        
        if(res > INT_MAX)
            return sign == 1 ? INT_MAX : INT_MIN;
        
        return sign * (int)res;
    }
};