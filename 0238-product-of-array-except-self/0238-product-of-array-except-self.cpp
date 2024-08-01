class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> result;
        // int n = nums.size();
        // for(int i=0; i<n; i++){
        //     int ans = 1;
        //     for(int j=0; j<n; j++){
        //         if(i==j) continue;
        //         ans *= nums[j];
        //     }
        //     result.push_back(ans);
        // }
        // return result;
        
        
        
        int n = nums.size();
        vector<int> result(n);
        
        int leftProduct = 1;
        int rightProduct = 1;
        
        for (int i = 0; i < n; i++) {
            result[i] = leftProduct;
            leftProduct *= nums[i];
        }
        
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= rightProduct;
            rightProduct *= nums[i];
        }
        
        return result;
    }
};