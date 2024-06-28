//Leetcode 509
class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int prev = 0;
        int curr = 1;
        int ans;
        for(int i = 2;i<=n;i++){
            ans = prev + curr;
            prev = curr;
            curr = ans;
        }

        return curr;
    }
};