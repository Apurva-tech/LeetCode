class Solution {
public:
    bool isValid(vector<int>v, int mid, int m)
    {    
        int count=1,sum=0;;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
            if(sum>mid)
            {
                sum=v[i];
                count++;
            }
        }
        if(count>m)
            return false;
        else return true;
    }
    int splitArray(vector<int> nums, int m) {

        int sum=0,maxE=INT_MIN;
        for(int i=0;i<nums.size();i++)
             {
                sum+=nums[i];
                 maxE= max(maxE,nums[i]);
             }

        if(m==nums.size())
            return maxE;

        int start=maxE, end= sum,mid, res;

       while(start<=end)
        {
            mid= start+ (end-start)/2;
            if(isValid(nums,mid,m))
            {
                res=mid;
                end= mid-1;
            }
            else start=mid+1;
        }
        return res;
    }
};