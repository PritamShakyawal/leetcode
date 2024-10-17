class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

//         sort(nums.begin(), nums.end());
//         int count = 1, maxi = 1;
//         for(int i=1; i<n; i++){
            
//             if(nums[i] == nums[i-1]){
//                 continue;
//             }
//             if(nums[i] == nums[i-1]+1){
//                 count++;
//             }
//             else{
//                 maxi = max(maxi, count);
//                 count = 1;
//             }
//         }
//         maxi = max(maxi, count);
//         return maxi;
        
        
        int longest = 1;
        unordered_set<int> st;
        
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        
        for(auto it : st){
            if(st.find(it-1) == st.end()){
                int cnt = 1;
                int x = it;
                while(st.find(x+1) != st.end()){
                    x = x+1;
                    cnt++;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};