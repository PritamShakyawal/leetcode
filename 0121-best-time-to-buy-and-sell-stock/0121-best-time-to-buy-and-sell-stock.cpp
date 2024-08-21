class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int p = prices[0];
    int maxiPro = 0;
    for(int i=0; i<n; i++){
            int cost = prices[i] - p;
            maxiPro = max(cost, maxiPro);
            p = min(p, prices[i]);
    }
    return maxiPro;
    }
};