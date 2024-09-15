class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0; i<queries.size(); i++){
            int start = queries[i][0];
            int end = queries[i][1];
            
            int sum = 0;
            
            for(int i=start; i<=end; i++){
                sum ^= arr[i];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};