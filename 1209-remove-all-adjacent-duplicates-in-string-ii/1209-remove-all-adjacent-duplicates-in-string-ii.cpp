class Solution {
public:
    string removeDuplicates(string s, int k) {
        if (k >= s.size()) return s;

        string res = "";
        int counter = 1;
        
        for (int i = 0; i < s.size(); ++i)
            if (res.empty()) 
                res.push_back(s[i]);
            else if (counter < k) {
                if (s[i] == res.back()) ++counter;
                else counter = 1;
                
                res.push_back(s[i]);

                if (counter == k) {
                    for (int j = 0; j < k; ++j)
                        res.pop_back();

                    counter = 1;
                    int size = res.size();
                    while (counter < size && res[size-counter-1] == res[size-counter])
                        ++counter;
                }
            }

        return res;
    }
};