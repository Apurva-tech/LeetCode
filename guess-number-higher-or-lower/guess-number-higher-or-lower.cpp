/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 1, h = n; 
        // cout << "n " << n << endl; 
        while(l <= h){
            int mid = l + (h-l)/2; 
            // cout << "mid " << mid << endl; 
            if(guess(mid) == 0) return mid; 
            else if(guess(mid) == 1) {
                // cout << 'l ' << l << endl; 
                l = mid + 1; 
            }
            else{
                // cout << 'h ' << h << endl; 
                h = mid - 1;
            }
        }
        
        return 0; 
    }
};