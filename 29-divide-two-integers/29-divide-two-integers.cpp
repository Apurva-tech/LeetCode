class Solution {
public:
    int divide(int dividend, int divisor) {
        // Find sign of resultant
        long double sign = (dividend < 0 ^ divisor < 0) ? -1 : 1; 
        
        if(divisor == 1) return  dividend; 
        
        // Take abs of long double
        long double longDividend = labs(dividend);
        long double longDivisor = labs(divisor);
     
        // res = exp (log(a) - log(b)) 
        long long res = exp(log(longDividend)-log(longDivisor)); 
        
        if(res > INT_MAX) return sign == 1 ? INT_MAX : INT_MIN;
        
        return sign * (int)res;
    }
};