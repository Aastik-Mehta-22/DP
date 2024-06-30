//leetcode 198

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);

        dp[0] = nums[0];
        for(int i = 1;i<=n-1;i++){
            int exclude = 0 + dp[i-1];
            int include = nums[i];
            if(i>1) include = nums[i] + dp[i-2];

            dp[i] =  max(exclude,include);
        }
        return dp[n-1];
    }
};