class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int clock = 0, counterclock =0;
        for(int i = start; i != destination; i = (i+1)%distance.size()){
            clock += distance[i]; 
        }
        for(int i = destination; i != start; i = (i+1)%distance.size()){
            counterclock += distance[i]; 
        }
        return min(clock, counterclock);
    }
};