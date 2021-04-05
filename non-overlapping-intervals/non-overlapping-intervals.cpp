class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end()); //sorting 
        
        int start =0;
        int end = 0;
        int length =0;
        
        while(end <intervals.size()){
            start = end++;
            while(end<intervals.size() and intervals[start][1]>intervals[end][0]){
                if(intervals[end][1]<intervals[start][1])
                    intervals[start][1]=intervals[end][1];
                length++;
                end++;
            }
            
        }
        return length;
    }
};