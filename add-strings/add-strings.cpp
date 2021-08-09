#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Solution {
public:
    
    string addStrings(string num1, string num2) {
        reverse(num1.begin(), num1.end());  reverse(num2.begin(), num2.end());
        vector<int> res;
        int i = 0, j = 0, carry = 0, sum; 
        
        while(i < num1.size() || j < num2.size()){
            int a, b;
            if(i < num1.size()){
                a = (int)num1[i]- '0';
                i++; 
            }
            else a = 0; 
            
            if(j < num2.size()){
                b = (int)num2[j]- '0';
                j++;
            }
            else b = 0;
            
             // cout << "ab: " << a << " " << b << endl; 
            
            sum = carry + a + b; 
            carry = (sum >= 10) ? 1 : 0;
            sum = sum % 10; 
            
            // cout << "sum: " << sum << endl; 
            // cout << "carry: " << carry << endl; 
            res.push_back(sum); 
        }
        
        if(carry > 0) res.push_back(carry); 
        
        // for(int a = 0; a < res.size(); ++a) cout << res[a] << " "; 
        
        reverse(res.begin(), res.end());
        
        std::ostringstream oss;

          if (!res.empty())
          {
            // Convert all but the last element to avoid a trailing ","
            std::copy(res.begin(), res.end()-1,
                std::ostream_iterator<int>(oss, ""));

            // Now add the last element with no delimiter
            oss << res.back();
          }
        
        string ans = oss.str(); 
        
        return ans;
    }
};