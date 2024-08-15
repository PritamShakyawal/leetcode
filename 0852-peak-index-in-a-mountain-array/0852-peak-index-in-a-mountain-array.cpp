class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int s =0; int e = arr.size();
        // int mid = s + (e-s)/2;
        // while(s<e){
        //     if(arr[mid] < arr[mid+1]){
        //         s = mid+1;
        //     }
        //     else{
        //         e = mid;
        //     }
        //     mid = s + (e-s)/2;
        // }
        // return s; 
        
        int n = arr.size();
        int index = 0;
        int ans = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]>ans){
                index = i;
                ans = arr[i];
            }
        }
        return index;
    }
};