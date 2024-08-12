class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> scores;
        for(auto&op : tokens){
             if (op == "+") {
            int top = scores.top(); scores.pop();
            int newTop = scores.top(); scores.pop();
            scores.push(newTop + top);
            }else if (op == "-"){
                int top = scores.top();
             scores.pop();
             int newTop = scores.top();
             scores.pop();
             scores.push(newTop - top);
            } else if (op == "*") {
            int top = scores.top(); scores.pop();
            int newTop = scores.top(); scores.pop();
            scores.push(newTop * top);
             }
            else if (op == "/") {
            int top = scores.top(); scores.pop();
            int newTop = scores.top(); scores.pop();
            scores.push(newTop / top);
            }
            else{
                scores.push(stoi(op));
            }
        }
        return scores.top();
        
        
//         stack<int> scores;

//     for (const auto& op : tokens) {
//         if (op == "+") {
//             int top = scores.top(); scores.pop();
//             int newTop = scores.top(); scores.pop();
//             scores.push(newTop + top);
//         } else if (op == "-") {
//             int top = scores.top(); scores.pop();
//             int newTop = scores.top(); scores.pop();
//             scores.push(newTop - top);
//         } else if (op == "*") {
//             int top = scores.top(); scores.pop();
//             int newTop = scores.top(); scores.pop();
//             scores.push(newTop * top);
//         } else if (op == "/") {
//             int top = scores.top(); scores.pop();
//             int newTop = scores.top(); scores.pop();
//             // Integer division should truncate towards zero
//             scores.push(newTop / top);
//         } else {
//             scores.push(stoi(op));
//         }
//     }

//     return scores.top();
    }
};