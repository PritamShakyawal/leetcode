class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // unordered_map <int, int> m;
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size() && abs(i-j) <= k; j++){
        //         if(nums[i] == nums[j]) return true;
        //     }
        // }
        // return false;

        int n = nums.size();
        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            if(m.find(nums[i]) != m.end() && i-m[nums[i]] <= k ){
                return true;
            }
            m[nums[i]] = i;
        }
        return false;
    }
};