class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int n = nums.size();
        // int maxLen = 0; int len = 0;
        // for(int i=0; i<n; i++){
        //     int zeroes = 0;
        //     for(int j=i; j<n; j++){
        //         if(nums[j]==0)
        //             zeroes++;
        //         if(zeroes <= k){
        //             len = j-i+1;
        //             maxLen = max(maxLen, len);
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
        // return maxLen;
        
        int l=0, r=0; int maxLen = 0; int zeroes = 0;
        while(r<nums.size()){
            if(nums[r] == 0) zeroes++;
            if(zeroes>k){
                if(nums[l] == 0)
                    zeroes--;
                    l++;
        }
                if(zeroes <= k){
                    maxLen = max(maxLen, r-l+1); 
                }
            r++;
        }
        return maxLen;
    //      int l=0,r=0,maxi=0,zero=0,n=nums.size();
    //     while(r<n){
    //         if(nums[r]==0) zero++;
    //         if(zero>k){
    //         if(nums[l]==0) zero--;
    //             l++;
    //         }
    //         if(zero<=k){
    //             maxi=max(maxi,r-l+1);
    //         }
    //         r++;
    //     }
    // return maxi;
    }
};