class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size(); 
    vector<int> ls; 
    unordered_map<int, int> mpp;
    
    for (int i = 0; i < n; i++) {
        mpp[nums[i]]++;
    }
       
       for(auto it : mpp){
        if(it.second > n/3){
            ls.push_back(it.first);
        }
       }
    return ls;
    }


};