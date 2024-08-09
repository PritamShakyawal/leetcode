class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();
        long long ans = 0;
        sort(gifts.begin(), gifts.end());
        long long i = n-1;
        while(k>0){
        gifts[i] = (floor(sqrt(gifts[i])));
        // cout << "Yhi gdbd hai" << gifts[i] << endl;
        sort(gifts.begin(), gifts.end());
        k--;
        }
           for(int i=0; i<n; i++){
            ans += gifts[i];
        }
        return ans;
    }
};