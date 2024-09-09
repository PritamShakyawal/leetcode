class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();

//     map<long long, int> preSumMap;
//     long long sum = 0;
//     int maxLen = 0;
//     for (int i = 0; i < n; i++) {
//         sum += nums[i];
//         if (sum == k) {
//             maxLen = max(maxLen, i + 1);
//         }
//         long long rem = sum - k;
//         if (preSumMap.find(rem) != preSumMap.end()) {
//             int len = i - preSumMap[rem];
//             maxLen = max(maxLen, len);
//         }
//         if (preSumMap.find(sum) == preSumMap.end()) {
//             preSumMap[sum] = i;
//         }
//     }
//     return maxLen;
    
        
//         int n = nums.size();

//     int left = 0, right = 0;
//     long long sum = nums[0];
//     int maxLen = 0;
//     while (right < n) {
        
//         while (left <= right && sum > k) {
//             sum -= nums[left];
//             left++;
//         }

//         if (sum == k) {
//             maxLen = max(maxLen, right - left + 1);
//         }
//         right++;
//         if (right < n) sum += nums[right];
//     }

//     return maxLen;


        
        int currSum = 0;
      int ans = 0;
      unordered_map<int, int> prefix;
      prefix[0] = 1;

       for(int i = 0; i < nums.size(); i++){
         currSum += nums[i];
         int prefixSum = currSum - k;

         if(prefix.find(prefixSum) != prefix.end()){
            ans += prefix[prefixSum];
         }
         

         if(prefix.find(currSum) == prefix.end()){
            prefix[currSum] = 1;
         }
         else prefix[currSum] = 1 + prefix[currSum];

       }  
       return ans;
    
    }
};