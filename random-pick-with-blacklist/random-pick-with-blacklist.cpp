#define pb push_back
class Solution {
public:
    int N;
    int b=0;    
    unordered_map<int,int> mp; 

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
