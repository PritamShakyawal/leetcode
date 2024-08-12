class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> result;
        int total = 0;

    for (const string& operation : operations) {
        if (operation == "C") {
            if (!result.empty()) {
                result.pop_back();
            }
        } else if (operation == "D") {
            if (!result.empty()) {
                result.push_back(result.back() * 2);
            }
        } else if (operation == "+") {
            if (result.size() >= 2) {
                int last = result.back();
                int secondLast = result[result.size() - 2];
                result.push_back(last + secondLast);
            }
        } else {
            
            result.push_back(stoi(operation));
        }
    }

    for (int score : result) {
        total += score;
    }

    return total;
    }
};