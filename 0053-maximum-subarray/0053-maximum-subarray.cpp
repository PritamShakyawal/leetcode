class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            
            if(sum > maxi){
                maxi = sum;
            }
            
            if(sum < 0){
                sum = 0;
            }
            // if(maxi < 0){
            //     maxi = sum;
            // }
        }
        
        return maxi;
        
        
        // for(int i=0; i<n; i++){
        //     int sum = 0;
        //     for(int j=i; j<n; j++){
        //         sum += nums[j];
        //         maxi = max(maxi, sum);
        //     }
        // }
        // return maxi;
    }
};