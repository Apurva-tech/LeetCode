class Solution {
public:
    int numRescueBoats(vector<int>& ppl, int limit) {
        sort(ppl.begin(), ppl.end());
        int n = ppl.size(); 
        int i = 0, j = n-1, res = 0;
        while(i <= j){
            res++;
            if(ppl[i]+ppl[j] <= limit) i++;
            j--;
        }
        return res;
    }
};