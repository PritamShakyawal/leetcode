class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
//         int currSum = 0;
//       int ans = 0;
//       unordered_map<int, int> prefix;
//       prefix[0] = 1;

//        for(int i = 0; i < nums.size(); i++){
//          currSum += nums[i];
//          int prefixSum = currSum - k;

//          if(prefix.find(prefixSum) != prefix.end()){
//             ans += prefix[prefixSum];
//          }
         

//          if(prefix.find(currSum) == prefix.end()){
//             prefix[currSum] = 1;
//          }
//          else prefix[currSum] = 1 + prefix[currSum];

//        }
//        return ans;
        
        
   
        
//         map<int, int> mpp;
//         mpp[0] = 1;
        
//         int preSum = 0, cnt = 0;
        
//         for(int i=0; i<nums.size(); i++){
//             preSum +=nums[i];
//             int remove = preSum - k;
            
//             cnt += mpp[remove];
            
//             mpp[preSum] += 1;
//         }
        
//         return cnt;
        
        
        int maxi = INT_MIN;
        int count = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=i; j<n; j++){
                 sum += nums[j];
                if (sum == k) {
                count++;  // Found a valid subarray
            }
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};