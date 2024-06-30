// code360 https://www.naukri.com/code360/problems/frog-jump_3621012?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTabValue=PROBLEM
#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n,0);
    dp[0] = 0;

    for(int i = 1;i<=n-1;i++){
        int left = dp[i-1] + abs(heights[i]-heights[i-1]);
        int right = INT_MAX;
        if(i > 1) right  = dp[i-2] + abs(heights[i]-heights[i-2]);


        dp[i] = min(left,right);
    }

    return dp[n-1];
}