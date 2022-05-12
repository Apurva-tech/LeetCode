class Solution {
public: 
    set<vector<int>>ans; 
    void permute(vector<int>& a, int l, int r){
        // Base case
        if (l == r)
            ans.insert(a);
        else
        {
            // Permutations made
            for (int i = l; i <= r; i++)
            {

                // Swapping done
                swap(a[l], a[i]);

                // Recursion called
                permute(a, l+1, r);

                //backtrack
                swap(a[l], a[i]);
            }
        }
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        ans.clear();
        int index=0;
        int n=nums.size();
        permute(nums,index,n-1);
        
            vector<vector<int>>ans1;
        
        for(auto i: ans){
            ans1.push_back(i);
        }
        
        return ans1;
        
    }
};