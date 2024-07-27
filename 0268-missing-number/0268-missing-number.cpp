class Solution {
public:
    int missingNumber(vector<int>& nums) {

        
//         int sum = 0; int sum1 = 0;
        int n = nums.size();
    
//         for(int i=1; i<=n; i++){
//             sum += i;
//         }
//         for(int i=0; i<n; i++){
//         sum1 += nums[i];
//     }
//     int ans = sum - sum1;
//     return ans;
        
        
        unordered_map <int, int> m;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
       for(int i=0; i<=n; i++){
           if(m[i] == 0) return i;
       }
        return -1;
    }
};