class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int> map;
        for(int i=0;i<A.size();i++){
            if(map[A[i]]>0)
                return A[i];
            map[A[i]]++;
        }   
        return 0;
    }
};