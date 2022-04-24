class UndergroundSystem {
public:
    unordered_map<string,pair<int,int>>avg;
    unordered_map<int, pair<string,int>>in_st;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        in_st[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        pair<string,int>in_details = in_st[id];
        string in_st_name = in_details.first;
        int in_st_time = in_details.second;
        string st_hash = in_st_name + "_" + stationName;
        int treq = t - in_st_time;
        if(avg.count(st_hash)){
            pair<int,int>p = avg[st_hash];
            avg[st_hash] = {treq+p.first, p.second+1};
        }
        else{
            avg[st_hash] = {treq,1};
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        string st_hash = startStation + "_" + endStation;
        pair<int,int>frac = avg[st_hash];
        double avg_time = frac.first*1.0/frac.second;
        return avg_time;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */