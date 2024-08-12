class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
    bool cnd = false;
    for (int i = digits.size()-1; i >= 0; i--){
        if (digits[i] != 9){
            digits[i]++;
            cnd = true;
            break;
        } else {
            digits[i] = 0;
        }
    }
    if (!cnd)ans.push_back(1);
    for (int i = 0; i < digits.size(); i++){
        if (!digits.size() && digits[i] == 0) continue;
        ans.push_back(digits[i]);
    }
    return ans;
    }
};