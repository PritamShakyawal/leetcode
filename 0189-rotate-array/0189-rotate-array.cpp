class Solution {
public:
    void rotate(vector<int>& nums, int k) {
//         vector <int> temp(nums.size());

//         for(int i=0; i<nums.size(); i++){
//             temp[(i+k)%nums.size()] = nums[i];

//         }
//         nums = temp;
        
        
        int n = nums.size();
        k = k % n; 
        if (k == 0) return;
        vector<int> ans;
        for(int i=n-k; i<n; i++){
            ans.push_back(nums[i]);
        }
        for(int i=0; i<n-k; i++){
            ans.push_back(nums[i]);
        }
        nums = ans;
    }
};