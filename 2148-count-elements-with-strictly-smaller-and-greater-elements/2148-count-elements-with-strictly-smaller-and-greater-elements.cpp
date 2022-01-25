class Solution {
public:
    int countElements(vector<int>& nums) {
	    int n = nums.size(); 
        if (n == 0) return 0;
		int m = nums[0], minOcc = 1, M = nums[0], maxOcc = 1;
		for (int i = 1; i < n; ++i) {
			if (nums[i] < m) {
				m = nums[i];
				minOcc = 1;
			} else if (nums[i] == m) {
				minOcc++;
			}
			if (M < nums[i]) {
				M = nums[i];
				maxOcc = 1;
			} else if (M == nums[i]) {
				maxOcc++;
			}
		}
		return m == M ? n - minOcc : n - minOcc - maxOcc;
		}
};