class Solution {
public:
    int countPrimes(int n) {
        // The Sieve of Eratosthenes
        if(n == 0 || n == 1) return 0;
        vector<bool>primes(n+1, true);
        primes[0] = primes[1] = false;
        for(int i = 2; i*i <= n; i++)
            if(primes[i])
                for(int j = 2; i*j <= n; j++)
                    primes[i*j] = false;
        
        int ans = 0;
        for(int i = 2; i < n; i++)
            if(primes[i]) ans++;
        return ans; 
    }
};