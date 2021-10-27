class Solution {
public:
    int helper(int start, int diff,int elements){
        int ans = 0;
        for(int i = 0 ; i< elements ; i++)
        {
            ans = ans + start;
            start = start + diff;
        }
        return ans;
    }
    
    int minOperations(int n) {
        //if n is odd then we have a center number and try to reduce other numbers to center number with number of operations starting from 2 and next being 4 and 6 and so on.
        if(n % 2 != 0){
            return helper(2,2,n/2);
        } // if n is even then we try to reduce numbers of a number that is mid of two middle elements with number of operations starting from 1 and next 3 and 5 and so on.
        else{
            return helper(1,2,n/2);
        }
    }
};