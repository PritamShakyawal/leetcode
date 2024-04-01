class Solution {
public:
    void sortColors(vector<int>& nums) {
    //     int count1=0, count2=0, count3=0;
    //     int n = nums.size();
    //     for(int i=0; i<nums.size(); i++){
    //         if(nums[i] == 0){
    //             count1++;
    //         }else if(nums[i] == 1){
    //             count2++;
    //         }
    //         else{
    //             count3++;
    //         }
    //     }
    // for(int i=0; i<count1; i++){
    //     nums[i] = 0;
    // }
    //     for(int i=count1; i<count1+count2; i++){
    //     nums[i] = 1;
    // }
    //     for(int i=count1+count2; i<n; i++){
    //     nums[i] = 2;
    //     }
        
        
        int low=0, mid=0, high=nums.size()-1;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++; mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};