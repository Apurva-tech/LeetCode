class Solution {
    public void rotate(int[] nums, int k) {
        if(k > nums.length)
            k=k%nums.length;
        int[] res = new int[nums.length];
        for(int i = 0; i < k; i++){
            res[i] = nums[nums.length - k + i]; 
        }
        int j=0;
        for(int i=k; i<nums.length; i++){
            res[i] = nums[j];
            j++;
        }
 
        System.arraycopy( res, 0, nums, 0, nums.length ); 
        }
    }