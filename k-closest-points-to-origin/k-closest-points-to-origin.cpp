typedef pair<double, int> pi;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<double> nums; 
        for(int i = 0; i < points.size(); i++){ 
            double t = sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            nums.push_back(t); 
        }
        
        unordered_map<int, double>mp; 
        
        for(int i = 0; i < points.size(); i++) mp[i] = nums[i];
        
        priority_queue<pi, vector<pi>, greater<pi> > pq;
        
        unordered_map<int, double> :: iterator itr;
        for(itr=mp.begin();itr!=mp.end();itr++){
            // cout << "dist: " << itr->second << " ind: " << itr->first << endl; 
            pq.push(make_pair(itr->second , itr->first));
        }
        vector<vector<int>> ans(k);
        for(int i=0;i<k;i++){
            ans[i]=points[pq.top().second];
            pq.pop();
        }
        return ans;
    }
};