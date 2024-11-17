class Solution {
    private:
    int f(int i, int j, string s, string t, vector<vector<int>> &dp){
        if(i<0) return j+1;
        if(j<0) return i+1;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s[i] == t[j]) return 0 + f(i-1, j-1, s, t, dp);
        return dp[i][j] = 1 + min(f(i-1, j, s, t, dp),
                      min(f(i, j-1, s, t, dp),
                         f(i-1, j-1, s, t, dp)));
        
    }
public:
    int minDistance(string word1, string word2) {
        int ind1 = word1.size(); int ind2 = word2.size();
        vector<vector<int>> dp(ind1, vector<int> (ind2, -1));
        return f(ind1-1, ind2-1, word1, word2, dp);
    }
};