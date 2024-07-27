class Solution {
public:
    int missingNumber(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    //     int n = nums.size();
    //     int x = nums[0];
    //     int ans = 0;
    //     for(int i=1; i<n; i++){
    //         if(nums[i] == x+1){
    //             x = x+1;
    //         }
    //         if(nums[i] != x+1)
    //         ans = nums[i]-1;
    //     }
    //     return ans;
        
        int sum = 0; int sum1 = 0;
        int n = nums.size();
    
        for(int i=1; i<=n; i++){
            sum += i;
        }
        for(int i=0; i<n; i++){
        sum1 += nums[i];
    }
    int ans = sum - sum1;
    return ans;
        
    }
};