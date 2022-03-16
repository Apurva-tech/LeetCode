class Solution {
public:
    int getCost(int curr,int move,int push,int val){
        vector<int>v;
        while(val > 0){
            v.push_back(val%10);
            val = val/10;
        }
        int res = 0;
        for(int i=v.size()-1;i>=0;i--){
            if(curr != v[i]){res += move; curr = v[i];}
            res += push;
        }
        return res;
    }
    int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
        int minutes = targetSeconds/60,seconds = targetSeconds%60;
        int res = INT_MAX;
        if(minutes < 100){res = min(res,getCost(startAt,moveCost,pushCost,minutes*100 + seconds));}
        if(minutes>0 && seconds<40){res = min(res,getCost(startAt,moveCost,pushCost,(minutes-1)*100 + seconds+60));}
        return res;
    }
};