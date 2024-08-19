class Solution {
    int f(int i, int j, string &s, string &t, vector<vector<int>> &dp){
	if(i<0 || j<0) return 0;

	if(dp[i][j] != -1) return dp[i][j];

	if(s[i] == t[j]){
		return dp[i][j] = 1 + f(i-1, j-1, s, t, dp);
	}
	else{
		return dp[i][j] = 0 + max(f(i-1, j, s, t, dp),f(i, j-1, s, t, dp));
	}
}
public:
    int longestCommonSubsequence(string text1, string text2) {
        int ind1 = text1.size(); int ind2 = text2.size(); 
	    vector<vector<int>> dp(ind1, vector<int>(ind2, -1)); 
	    return f(ind1-1, ind2-1, text1, text2, dp);
    }
};