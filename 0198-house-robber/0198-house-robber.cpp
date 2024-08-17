class Solution {
    private: 
    int f(vector<int> &nums, int n, vector<int> &dp){
        int maxi = INT_MIN;
        if(n==0) return nums[0];
        if(n<0) return 0;
        
        if(dp[n] != -1){
            return dp[n];
        }
        
        int i = n;
        int pick = nums[i] + f(nums, n-2, dp);
        int notPick = f(nums, n-1, dp);
        dp[n] = max(pick, notPick);
        
        return dp[n];
        
    }
public:
    int rob(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> dp(n+1, -1);
        // int ans = f(nums, n-1, dp);
        // return ans;
        
        
        
        int n = nums.size();
//         vector<int> dp(n+1, -1);
//         dp[0] = nums[0];
//         // dp[1] = max(nums[0], nums[1]);
        
//         for(int i=1; i<n; i++){
//         int pick = nums[i];  if(i>1) {
//             pick += dp[i-2];
//         }
//         int notPick = dp[i-1];
            
//             dp[i] = max(pick, notPick); 
//         }
//         return dp[n - 1];
        
        
        
        int prev = nums[0];
    int prev2 = 0;
    
    for (int i = 1; i < n; i++) {
        int pick = nums[i];
        if (i > 1)
            pick += prev2;
        
        int nonPick = 0 + prev;
        
        int cur_i = max(pick, nonPick);
        prev2 = prev;
        prev = cur_i;
    }
    
    return prev;
    }
};