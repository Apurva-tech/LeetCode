class Solution {
public:
    int maxCoins(vector<int>& piles) {   
       // [2,4,1,2,7,8]
       // [1,2,2,4,7,8]
       // 1 2. 3 4. 5 6. 7 8. 9 
        int n = piles.size(), op = n/3, res = 0, i = n-2;
        sort(piles.begin() , piles.end()); 
        while(op--){
            res += piles[i];
            i -= 2;
        }
        return res; 
    }
};