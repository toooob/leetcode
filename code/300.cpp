//300.最长上升子序列
class Solution {
public:
	int lengthOfLIS(vector<int>& nums) {
		if (nums.size() == 0)
			return 0;
		vector<int> dp(nums.size(), 0);
		dp[0] = 1;
		int res = 1;
		for (int i = 1; i < nums.size(); i++) {
			dp[i] = 1;
			for (int j = 0; j < i; j++) {
				if (nums[i] > nums[j] && dp[i] < dp[j] + 1) {
					dp[i] = dp[j] + 1;
				}
			}
			if (res < dp[i]) {
				res = dp[i];
			}
		}
		return res;
	}
};