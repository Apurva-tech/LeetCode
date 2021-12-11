#define pb push_back
class Solution {
public:
    int N;
    int b=0;    
    unordered_map<int,int> mp;  // for remapping of blacklist element in range(0,N-b) to un blacklist
                                // element in range [N-b,N)

    Solution(int n, vector<int>& blacklist) {
        N=n;
        set<int> black;
        b=blacklist.size();
        for(int i=0;i<blacklist.size();i++){
            if(blacklist[i]>=N-b){
                black.insert(blacklist[i]);
            }
        }
        int j=N-b;
        
        for(int i=0;i<blacklist.size();i++){
            if(blacklist[i]<N-b){
                while(black.find(j)!=black.end()){
                    j++;
                }
                mp[blacklist[i]]=j; 
                j++;
            }
        }
    }
    
    int pick() {
        int num=rand()%(N-b);
        if(mp.find(num)!=mp.end()){
            return mp[num];
        }
        
        return num;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(n, blacklist);
 * int param_1 = obj->pick();
 */