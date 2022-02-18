class Solution {
public:
    string removeKdigits(string num, int k) {
        // edge cases
        if (num.length() <= k)
            return "0";
        
        if (k == 0)
            return num;
        
        string stack;
        for (int i = 0; i < num.length(); ++i) {
            while (k > 0 && !stack.empty() && num[i] < stack.back())
                stack.pop_back(), --k;
            
            // prevent leading zeros
            if (!stack.empty() || num[i] != '0') 
                stack.push_back(num[i]);
        }
        
        // remove the extra elements
        stack.resize(std::max((ssize_t) stack.length() - k, (ssize_t) 0));
        
        return stack.empty() ? "0" : stack;
    }
};