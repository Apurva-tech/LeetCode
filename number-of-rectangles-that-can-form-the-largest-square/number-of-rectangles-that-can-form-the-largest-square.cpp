class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int,int> maxsquarelen;
        int maxlen=INT_MIN;
        for(auto rectangle : rectangles){
            maxsquarelen[min(rectangle[0],rectangle[1])]++;
            maxlen = max(maxlen,min(rectangle[0],rectangle[1]));//store the maxpossible length of square formed
        }
        return maxsquarelen[maxlen];
    }
};