class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        
        // sort(nums.begin(), nums.end());
        // int maxdistance = INT_MAX; int dis = 0;
        // for(int i=0; i<n; i++){
        //     if(dis >= 0){
        //     dis = abs(nums[i]-0);
        //         dis = min(dis, maxdistance);
        //         maxdistance = dis;
        //     }
        // }
        // return dis;
        
        // int closet = nums[0];
        // for(int i=1; i<n; i++){
        //     if(nums[i]<closet) closet = nums[i];
        // }
        // return closet;
        
        
        
        int ans = nums[0];

        for(int i = 1; i < nums.size();i++){
            int diff = abs(ans - 0);
            int curr = abs(nums[i] - 0);

            if(curr < diff){
                ans = nums[i];
            }
            if(curr == diff){
                ans = max(ans, nums[i]);
            }
        }
        return ans;
        
        
        
        
        
//         glt hai below ans for 1 test case
        
         // vector<int> ans;
//         int dis = 0;
//         for(int i=0; i<n; i++){
//             dis = abs(nums[i]-0);
//             ans.push_back(dis);
//         }
        
//         int min = ans[0];
//         for(int i=1; i<n; i++){
//             if(ans[i]<min){
//                 min = ans[i];
//             }
//         }
//         return min;      
    }
};