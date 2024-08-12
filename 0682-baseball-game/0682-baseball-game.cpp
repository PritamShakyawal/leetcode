class Solution {
public:
    int calPoints(vector<string>& operations) {
//         vector<int> result;
//         int total = 0;

//     for (const string& operation : operations) {
//         if (operation == "C") {
//             if (!result.empty()) {
//                 result.pop_back();
//             }
//         } else if (operation == "D") {
//             if (!result.empty()) {
//                 result.push_back(result.back() * 2);
//             }
//         } else if (operation == "+") {
//             if (result.size() >= 2) {
//                 int last = result.back();
//                 int secondLast = result[result.size() - 2];
//                 result.push_back(last + secondLast);
//             }
//         } else {
            
//             result.push_back(stoi(operation));
//         }
//     }

//     for (int score : result) {
//         total += score;
//     }

//     return total;
        
        
        
        
        stack<int> scores;
        for(auto&op : operations){
            if (op == "+"){
               int top = scores.top();
             scores.pop();
             int newTop = top + scores.top();
             scores.push(top);
             scores.push(newTop);
            }else if (op == "D"){
                scores.push(2 * scores.top());
            }else if (op == "C"){
                scores.pop();
            }else{
                scores.push(stoi(op));
            }
        }
        int sum = 0;
        while(!scores.empty()){
            sum += scores.top();
            scores.pop();
        }
        return sum;
    }
};