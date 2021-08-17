class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        v.resize(n);
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
           v[i]=v[i-1]+nums[i]; 
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
            return v[right];
       
        else
             return v[right]-v[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */