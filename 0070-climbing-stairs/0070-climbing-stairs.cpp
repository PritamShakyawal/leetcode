class Solution {
public:
    int climbStairs(int n) {
        // if(n==0) return 1;
        // if(n==1) return 1;
        // int ans = climbStairs(n-1) + climbStairs(n-2);
        // return ans;
        
        
//         if(n==0) return 1;
//         if(n==1) return 1;
        
//         vector<int> dp(n + 1, -1);

//         if (dp[n] != -1)
//             return dp[n];

//         dp[n] = climbStairs(n-1) + climbStairs(n-2);
//         return dp[n];
        
        // vector<int> dp(n+1, -1);
        // dp[0] = 1;
        // dp[1] = 1;
        // for(int i=2; i<=n; i++) {
        //     dp[i] = dp[i-1] + dp[i-2];
        // }
        // return dp[n];
        
        
        int prev1 = 1;
        int prev2 = 1;
        int cur=1;
        for(int i=2; i<=n; i++) {
            cur = prev1 + prev2;
            prev2 = prev1;
            prev1 = cur;
        }
        return cur;
    }
};