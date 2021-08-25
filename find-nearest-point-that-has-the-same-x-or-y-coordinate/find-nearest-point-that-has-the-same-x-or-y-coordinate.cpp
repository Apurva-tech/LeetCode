typedef pair<double, int> pi;
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int res = -1, bestDist = INT_MAX;
        // parsing points
        for (int i = 0, cx, cy, currDist, lmt = points.size(); i < lmt; i ++) {
            // assigning cx and cy
            cx = points[i][0], cy = points[i][1];
            // looking for a match
            if (x == cx || y == cy) {
                // computing currDist and in case updating bestDist and res
                currDist = abs(y - cy) + abs(x - cx);
                if (currDist < bestDist) {
                    bestDist = currDist, res = i;
                }
            }
        }
        return res;
    }
};