class Solution {
public:
    int maxArea(vector<int>& height) {
        // int ans = 0;
        // int area = 0;
        // int n = height.size();
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         area = ((j-i)*min(height[i], height[j]));
        //         ans = max(ans, area);
        //     }
        // }
        // return ans;
        
        // int i=0; int j=1;
        // int ans = 0, maxi = 0;
        // while(i<n){
        //     while(j<n){
        //     ans = (j-i) * (min(height[i], height[j]));
        //     maxi = max(ans, maxi);
        //     j++; 
        // }
        //     i++;
        //     j=i+1;
        // }
        // return maxi;
        
        int n = height.size();
        int i=0; int j = n-1;
        int ans = 0; int maxi = 0;
        while(i<j){
            ans = (j-i) * min(height[i], height[j]);
            maxi = max(ans, maxi);
            
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxi;
    }
};