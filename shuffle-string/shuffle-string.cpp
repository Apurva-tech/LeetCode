class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i=0;
        while(i!=indices.size()){
            if(indices[i]==i)i++;
            else {
                swap(s[i],s[indices[i]]);
                swap(indices[i],indices[indices[i]]);
            }
        }
        return s;
    }
};