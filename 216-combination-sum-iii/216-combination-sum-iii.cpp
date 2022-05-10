class Solution {
public:
    vector <vector<int>> ans;
    vector <int> temp;
    void combSum2(vector <int> a,int t,int id,int k){
        if(t==0){

            if(temp.size()==k)
                ans.push_back(temp);
            return;
        }
        for(int i=id;i<a.size();i++){
            if(a[i]>t)break;
            
            temp.push_back(a[i]); 
            combSum2(a,t-a[i],i+1,k);
            temp.pop_back(); //backtrack
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector <int> v; 
        for(int i=1;i<10;i++)
            v.push_back(i);
        combSum2(v,n,0,k);
        return ans;
        
    } 
};