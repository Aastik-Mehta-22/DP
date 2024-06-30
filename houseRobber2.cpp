// Leetcode 213
class Solution {
public:
    int solve(vector<int> &nums,int index,vector<int> &dp,int end){
        if(index < end ) return 0;

        if(dp[index] != -1) return dp[index];
        int include = nums[index] + solve(nums,index-2,dp,end);
        int exclude = 0 + solve(nums,index-1,dp,end);

        return dp[index] = max(include,exclude);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);

        vector<int> dp(n,-1);
        vector<int> dpTwo(n,-1);
        int ans = solve(nums,n-2,dp,0);

        int ansTwo = solve(nums,n-1,dpTwo,1);

        return max(ans,ansTwo);
    }
};