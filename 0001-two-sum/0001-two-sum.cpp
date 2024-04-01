class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         int i=0; int j=nums.size()-1;
//         vector<int> v;
//         sort(nums.begin(), nums.end());
//         while(i<j){
//             if(nums[i]+nums[j]==target){
                
//         }
//         else if(nums[i]+nums[j]>target){

//         }
//     }

    
    map<int, int> m;
    for(int i=0; i<nums.size(); i++){
        int a = nums[i];
        int remValue = target - a;
        if(m.find(remValue) != m.end()){
            return {m[remValue], i};
        }
            m[a] = i;    
    }
     return {-1, -1};
    }    
};