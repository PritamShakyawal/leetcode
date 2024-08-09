class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // priority_queue<int> pq;
        // for(int i  : nums) pq.push(i);
        // int x=pq.top();
        // pq.pop();
        // return (x-1)*(pq.top()-1);
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return ((nums[n-1] - 1) * (nums[n-2] - 1));
        
    }
};