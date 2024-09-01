class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        int ans = 0;
         bool odd_found = false;
        
        for(auto ind : s){
            m[ind]++;
        }
        for(auto k : m){
            if((k.second) % 2 == 0){
                ans += k.second;
            }
            else{
                ans += k.second-1;
            odd_found = true;
            }
        }
        if (odd_found) {
        ans += 1;
    }

        return ans;
    }
};