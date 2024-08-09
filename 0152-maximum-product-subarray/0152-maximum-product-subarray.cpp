class Solution {
public:
    int maxProduct(vector<int>& nums) {
//         int pre=1, suf=1; 
//         int ans=INT_MIN;
	int n = nums.size();
// 	for(int i=0; i<n; i++){
// 		if(pre==0) pre=1;
// 		if(suf==0) suf=1;

// 		pre = pre*nums[i];
// 		suf= suf*nums[n-i-1];

// 		ans = max(ans, max(pre,suf));

// 	}
// 	return ans;
        
       // long long maxi = LLONG_MIN;
       //  for(int i=0; i<n; i++){
       //      long long prod = 1;
       //      for(int j=i; j<n; j++){
       //          prod = prod * nums[j];
       //          maxi = max(maxi, prod);
       //      }
       //  }
       //  return maxi;
        
        

    double ans = INT_MIN;
    double pr = 1, su = 1;
    for (int i=0; i<n; ++i) {
      pr *= nums[i];
      su *= nums[n-1-i];
      ans = max({ans, pr, su});
      if (pr == 0) pr = 1;
      if (su == 0) su = 1;
    }
    return ans;
    }
};