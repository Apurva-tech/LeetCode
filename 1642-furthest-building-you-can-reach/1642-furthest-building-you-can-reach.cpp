class Solution {
public:
    bool check(vector<int>&arr,int bricks,int ladders,int &mid){
        vector<int>v;
        for(int i=1;i<=mid;i++){
            if(arr[i]>arr[i-1]){
                v.push_back(arr[i]-arr[i-1]);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        for(auto it:v){
            if(ladders){
                ladders--;
            }
            else{
                bricks-=it;
            }
        }
        return bricks>=0;
    }
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        int l=0,r=n-1;
        int ans=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(check(heights,bricks,ladders,mid)){
                ans=max(ans,mid);
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};