// GFG LINK : https://www.geeksforgeeks.org/problems/minimal-cost/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimal-cost


class Solution {
  public:
    int solve(int n,vector<int> &height,int k,vector<int> &dp){
        if(n == 0) return 0;
        int ans = INT_MAX;
        if(dp[n] != -1) return dp[n];
        
        for(int i = 1;i<=k;i++){
            if(n-i >= 0){
                int temp = solve(n-i,height,k,dp) + abs(height[n]-height[n-i]);
                ans = min(ans,temp);
            }
        }
        
        return dp[n] = ans;
        
    }
    
    int minimizeCost(vector<int>& height, int n, int k) {
        // Code here
        vector<int> dp(n,-1);
        return solve(n-1,height,k,dp);
       
        
    }
};