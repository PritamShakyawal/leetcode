class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0; 
        int n = details.size();
        
//         for(int i=0; i<n; i++){
//             int num = 0;
//             for(int j = 11; j<=12; j++){
//                 num = num*10 + (details[i][j] - '0');
//             }
//             if(num > 60) count++;
//         }
//         return count;
        
        for(int i=0; i<n; i++){
           string a = details[i].substr(11,2);
            int ans = stoi(a);
             if(ans>60) count++;
        }
        return count;
        
    }
};