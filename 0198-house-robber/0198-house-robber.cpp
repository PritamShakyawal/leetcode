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
        int n = nums.size();
        vector<int> dp(n+1, -1);
        int ans = f(nums, n-1, dp);
        return ans;
    }
};