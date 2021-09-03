class Solution {
public:
    
    int nthUglyNumber(int n) {
        set<long long> p, q;
        p.insert(1); 
        while((int)q.size() != n){
            long long next = *p.begin();
            q.insert(next); 
            p.erase(next); 
            p.insert(2*next); 
            p.insert(3*next); 
            p.insert(5*next); 
        }
        
        return *q.rbegin(); 
    }
};