class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(int i  : nums) pq.push(i);
        int x=pq.top();
        pq.pop();
        return (x-1)*(pq.top()-1);
    }
};