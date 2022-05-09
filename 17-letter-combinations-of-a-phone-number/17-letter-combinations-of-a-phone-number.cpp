vector<vector<char>> m = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'}, 
                          {'m', 'n', 'o'}, {'p', 'q', 'r', 's'}, {'t', 'u', 'v'}, {'w', 'x', 'y', 'z'}};

class Solution {
public:
    void tryCombination(int index, string& digits, string& row, vector<string>& res) {
        if (index == digits.length()) {
            res.push_back(row);
            return;
        }
        
		//try to fill each letters with each index.
        for (int i = 0; i < m[digits[index] - '0' - 2].size(); i++) {
            row[index] = m[digits[index] - '0' - 2][i];
            tryCombination(index+1, digits, row, res);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.empty()) return res;
        string row(digits.length(), ' ');
        tryCombination(0, digits, row, res);
        return res;
    }
};