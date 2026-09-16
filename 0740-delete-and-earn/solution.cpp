class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int maxi = nums[n-1];

        vector<int> points(maxi+1, 0);

        for(int num : nums) {
            points[num] += num;
        }

        vector<int> dp(maxi+1, 0);
        dp[0] = points[0];

        for(int i = 1; i <= maxi; i++) {
            int pick = points[i];

            if(i > 1) {
                pick += dp[i-2];
            }

            int nonPick = dp[i-1];

            dp[i] = max(pick, nonPick);
        }
        return dp[maxi];
    }
};