class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for(int i=1; i<n; i++){
        //     if(nums[i] == nums[i-1]) return nums[i];
        // }
        // return -1;
        
       unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        for(auto it : m){
            if(it.second >= 2) return it.first;
        }
        return -1;
    }
};