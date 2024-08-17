class Solution {
public:
    int fib(int n) {
//         if(n==0) return 0;
//         if(n==1) return 1;
        
//         int ans = fib(n-1) + fib(n-2);
//         return ans;
        
        
        if (n <= 1)
            return n;
        vector<int> dp(n + 1, -1);

        if (dp[n] != -1)
            return dp[n];

        dp[n] = fib(n - 1) + fib(n - 2);
        return dp[n];
    }
};