class Solution {
public:
    int threeSumMulti(vector<int>& a, int t) {
        // 1 -> 2, 2 -> 2, 3 -> 2, 4 -> 2, 5 -> 2
        // 1,2,3 - 8
        // 1,3,4 - 8
        int n=a.size();
        unordered_map<int,long> mp;
        int i,j,m=1e9+7;
        long c=0;
        
        for(i=0;i<n;i++)
        {
            c+=mp[t-a[i]];
            
            for(j=0;j<i;j++)
                mp[a[i]+a[j]]++;
        }
        
        return c%m;
    }
};