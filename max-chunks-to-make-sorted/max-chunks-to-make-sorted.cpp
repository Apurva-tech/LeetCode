class Solution {
public:
    int maxChunksToSorted(vector<int>& v) {
        int i,co=0,sum1=0,ans=0;
        for(i=0;i<v.size();i++)
        {
            sum1+=i;
            co+=v[i];
            if(sum1==co)
                ans++;
        }
        return ans;
    }
};