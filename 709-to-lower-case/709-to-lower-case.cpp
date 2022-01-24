class Solution {
public:
    string toLowerCase(string temp) {
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        return temp;
    }
};