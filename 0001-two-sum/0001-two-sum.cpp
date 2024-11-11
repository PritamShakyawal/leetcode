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
        
    // vector<int> ans;
    // int n = nums.size();
    // for (int i = 0; i < n; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         if (nums[i] + nums[j] == target) {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }
    // return { -1, -1};
        
        
       vector<pair<int, int>> numWithIndex;
    int n = nums.size();
    vector<int> ans;

    // Store values with their original indices
    for (int i = 0; i < n; i++) {
        numWithIndex.push_back({nums[i], i});
    }

    // Sort based on the values
    sort(numWithIndex.begin(), numWithIndex.end());

    int l = 0, r = n - 1;

    while (l < r) {
        int value = numWithIndex[l].first + numWithIndex[r].first;

        if (value < target) {
            l++;
        } else if (value > target) {
            r--;
        } else {
            // Return the original indices
            ans.push_back(numWithIndex[l].second);
            ans.push_back(numWithIndex[r].second);
            return ans;
        }
    }

    return {-1, -1};
        
    }
};