class Solution {
    
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    // map<int, int> m;
    // for(int i=0; i<nums.size(); i++){
    //     int a = nums[i];
    //     int remValue = target - a;
    //     if(m.find(remValue) != m.end()){
    //         return {m[remValue], i};
    //     }
    //         m[a] = i;    
    // }
    //  return {-1, -1};
        
        vector<int> ans;
        int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return { -1, -1};
        
    }
};